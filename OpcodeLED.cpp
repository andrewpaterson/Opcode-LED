#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>  
#include "BaseLib/DebugOutput.h"
#include "BaseLib/LogString.h"
#include "BaseLib/Chars.h"
#include "BaseLib/Numbers.h"
#include "BaseLib/NaiveFile.h"
#include "BaseLib/FileUtil.h"
#include "BaseLib/IntegerHelper.h"
#include "14SegmentASCII.h"
#include "65816OpcodeMnemonics.h"


uint16 GetPattern(char c)
{
	uint16	uiPattern;
	uint16	uiMush;

	uiMush = 0;
	if (c >= 32)
	{
		uiPattern = gauiFourteenSegmentASCII[c - 32];
		SetBit(6, &uiMush, GetBit(8, &uiPattern));
		SetBit(7, &uiMush, GetBit(9, &uiPattern));
		SetBit(8, &uiMush, GetBit(10, &uiPattern));
		SetBit(9, &uiMush, GetBit(7, &uiPattern));
		SetBit(10, &uiMush, GetBit(13, &uiPattern));
		SetBit(11, &uiMush, GetBit(12, &uiPattern));
		SetBit(12, &uiMush, GetBit(11, &uiPattern));
		SetBit(13, &uiMush, GetBit(6, &uiPattern));

		uiPattern &= 0b111111;

		uiPattern |= uiMush;

		//SwapBit(&uiPattern, 8, 6);
		//SwapBit(&uiPattern, 9, 7);
		//SwapBit(&uiPattern, 10, 8);
		//SwapBit(&uiPattern, 7, 9);
		//SwapBit(&uiPattern, 13, 10);
		//SwapBit(&uiPattern, 12, 11);
		//SwapBit(&uiPattern, 11, 12);
		//SwapBit(&uiPattern, 6, 13);
		return uiPattern;
	}
	else
	{
		return 0;
	}
}

////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
uint8 ConvertASCIICharToABCDEFGH(char c)
{
	uint16	uiPattern;
	uint8	ui;

	if (c >= 32)
	{
		uiPattern = GetPattern(c);
		ui = (uint8)uiPattern;
		return ui;
	}
	else
	{
		return 0;
	}
}


////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
uint8 ConvertASCIICharToJKPNML(char c)
{
	uint16	uiPattern;
	uint8	ui;

	if (c >= 32)
	{
		uiPattern = GetPattern(c);
		ui = (uint8)(uiPattern >> 8);
		return ui;
	}
	else
	{
		return 0;
	}
}


////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
int __cdecl main(void)
{
	_CrtSetBreakAlloc(0);
	_CrtDumpMemoryLeaks();

	size		i;
	char*		szOpcode;
	char		szTemp[4];
	size		j;
	char		c;
	uint8		uiJKPNML;
	uint8		uiABCDEFGH;
	CChars		sz;
	size		uiLength;
	uint8*		apuiJKPNMLMemory[3];
	uint8*		apuiABCDEFGHMemory[3];
	size		uiROMSize;
	CNaiveFile	cFile;
	CChars		szFileName;
	CFileUtil	cFileUtil;

	uiROMSize = 128 KB;
	for (j = 0; j < 3; j++)
	{
		apuiABCDEFGHMemory[j] = (uint8*)malloc(uiROMSize);
		apuiJKPNMLMemory[j] = (uint8*)malloc(uiROMSize);
		memset(apuiABCDEFGHMemory[j], 0xff, uiROMSize);
		memset(apuiJKPNMLMemory[j], 0xff, uiROMSize);
	}

	for (i = 0; i <= 255; i++)
	{
		szOpcode = gpszOpcodes[i];
		memset(szTemp, 0, 4);
		memcpy(szTemp, szOpcode, 3);

		sz.Init();
		sz.Append(szTemp);
		sz.Append(" - ");

		for (j = 0; j < 3; j++)
		{
			c = szTemp[j];
			uiABCDEFGH = ConvertASCIICharToABCDEFGH(c);
			uiJKPNML = ConvertASCIICharToJKPNML(c);

			uiLength = sz.Length();
			sz.Append(uiJKPNML, 2);
			sz.RightAlign(uiLength, '0', 6);
			sz.Append(" ");
			uiLength = sz.Length();
			sz.Append(uiABCDEFGH, 2);
			sz.RightAlign(uiLength, '0', 8);
			if (j != 2)
			{
				sz.Append(", ");
			}

			apuiABCDEFGHMemory[j][i] = uiABCDEFGH;
			apuiJKPNMLMemory[j][i] = uiJKPNML;
		}

		sz.Append("\n");
		sz.DumpKill();
	}

	cFileUtil.RemoveDir("Output");
	cFileUtil.MakeDir("Output");

	for (j = 0; j < 3; j++)
	{
		szFileName.Init("Output/ABCDEFGH_");
		szFileName.Append(j);
		szFileName.Append(".bin");
		cFile.Init(apuiABCDEFGHMemory[j], uiROMSize);
		cFile.Write(szFileName.Text());
		szFileName.Kill();

		szFileName.Init("Output/JKPNML_");
		szFileName.Append(j);
		szFileName.Append(".bin");
		cFile.Init(apuiJKPNMLMemory[j], uiROMSize);
		cFile.Write(szFileName.Text());
		szFileName.Kill();

		free(apuiABCDEFGHMemory[j]);
		free(apuiJKPNMLMemory[j]);
	}

	return 0;
}

