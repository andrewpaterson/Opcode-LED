#ifndef __65816_OPCODE_MNEMONICS__
#define __65816_OPCODE_MNEMONICS__


char gszOpcode00[] = { "BRK s" };
char gszOpcode01[] = { "ORA (d,x)" };
char gszOpcode02[] = { "COP s" };
char gszOpcode03[] = { "ORA d,s" };
char gszOpcode04[] = { "TSB d" };
char gszOpcode05[] = { "ORA d" };
char gszOpcode06[] = { "ASL d" };
char gszOpcode07[] = { "ORA [d]" };
char gszOpcode08[] = { "PHP s" };
char gszOpcode09[] = { "ORA #" };
char gszOpcode0A[] = { "ASL A" };
char gszOpcode0B[] = { "PHD s" };
char gszOpcode0C[] = { "TSB a" };
char gszOpcode0D[] = { "ORA a" };
char gszOpcode0E[] = { "ASL a" };
char gszOpcode0F[] = { "ORA al" };
char gszOpcode10[] = { "BPL r" };
char gszOpcode11[] = { "ORA (d),y" };
char gszOpcode12[] = { "ORA (d)" };
char gszOpcode13[] = { "ORA (d,s),y" };
char gszOpcode14[] = { "TRB d" };
char gszOpcode15[] = { "ORA d,x" };
char gszOpcode16[] = { "ASL d,x" };
char gszOpcode17[] = { "ORA [d],y" };
char gszOpcode18[] = { "CLI i" };
char gszOpcode19[] = { "ORA a,y" };
char gszOpcode1A[] = { "INC A" };
char gszOpcode1B[] = { "TCS i" };
char gszOpcode1C[] = { "TRB a" };
char gszOpcode1D[] = { "ORA a,x" };
char gszOpcode1E[] = { "ASL a,x" };
char gszOpcode1F[] = { "ORA al,x" };
char gszOpcode20[] = { "JSR a" };
char gszOpcode21[] = { "AND (d,x)" };
char gszOpcode22[] = { "JSL al" };
char gszOpcode23[] = { "AND d,s" };
char gszOpcode24[] = { "BIT d" };
char gszOpcode25[] = { "AND d" };
char gszOpcode26[] = { "ROL d" };
char gszOpcode27[] = { "AND [d]" };
char gszOpcode28[] = { "PLP s" };
char gszOpcode29[] = { "AND #" };
char gszOpcode2A[] = { "ROL A" };
char gszOpcode2B[] = { "PLD s" };
char gszOpcode2C[] = { "BIT a" };
char gszOpcode2D[] = { "AND a" };
char gszOpcode2E[] = { "ROL a" };
char gszOpcode2F[] = { "AND al" };
char gszOpcode30[] = { "BMI r" };
char gszOpcode31[] = { "AND (d),y" };
char gszOpcode32[] = { "AND (d)" };
char gszOpcode33[] = { "AND (d,s),y" };
char gszOpcode34[] = { "BIT d,x" };
char gszOpcode35[] = { "AND d,x" };
char gszOpcode36[] = { "ROL d,x" };
char gszOpcode37[] = { "AND [d],y" };
char gszOpcode38[] = { "SEC i" };
char gszOpcode39[] = { "AND a,y" };
char gszOpcode3A[] = { "DEC A" };
char gszOpcode3B[] = { "TSC i" };
char gszOpcode3C[] = { "BIT a,x" };
char gszOpcode3D[] = { "AND a,x" };
char gszOpcode3E[] = { "ROL a,x" };
char gszOpcode3F[] = { "AND al,x" };
char gszOpcode40[] = { "RTI" };
char gszOpcode41[] = { "EOR (d,x)" };
char gszOpcode42[] = { "WDM" };
char gszOpcode43[] = { "EOR d,s" };
char gszOpcode44[] = { "MVP xyc" };
char gszOpcode45[] = { "EOR d" };
char gszOpcode46[] = { "LSR d" };
char gszOpcode47[] = { "EOR [d]" };
char gszOpcode48[] = { "PHA" };
char gszOpcode49[] = { "EOR #" };
char gszOpcode4A[] = { "LSR A" };
char gszOpcode4B[] = { "PHK" };
char gszOpcode4C[] = { "JMP a" };
char gszOpcode4D[] = { "EOR a" };
char gszOpcode4E[] = { "LSR a" };
char gszOpcode4F[] = { "EOR al" };
char gszOpcode50[] = { "BVC r" };
char gszOpcode51[] = { "EOR (d),y" };
char gszOpcode52[] = { "EOR (d)" };
char gszOpcode53[] = { "EOR (d,s),y" };
char gszOpcode54[] = { "MVN xyc" };
char gszOpcode55[] = { "EOR d,x" };
char gszOpcode56[] = { "LSR d,x" };
char gszOpcode57[] = { "EOR [d],y" };
char gszOpcode58[] = { "CLI i" };
char gszOpcode59[] = { "EOR a,y" };
char gszOpcode5A[] = { "PHY s" };
char gszOpcode5B[] = { "TCD i" };
char gszOpcode5C[] = { "JMP al" };
char gszOpcode5D[] = { "EOR a,x" };
char gszOpcode5E[] = { "LSR a,x" };
char gszOpcode5F[] = { "EOR al,x" };
char gszOpcode60[] = { "RTS s" };
char gszOpcode61[] = { "ADC (d,x)" };
char gszOpcode62[] = { "PER s" };
char gszOpcode63[] = { "ADC d,s" };
char gszOpcode64[] = { "STZ d" };
char gszOpcode65[] = { "ADC d" };
char gszOpcode66[] = { "ROR d" };
char gszOpcode67[] = { "ADC [d]" };
char gszOpcode68[] = { "PLA s" };
char gszOpcode69[] = { "ADC #" };
char gszOpcode6A[] = { "ROR A" };
char gszOpcode6B[] = { "RTL s" };
char gszOpcode6C[] = { "JMP (a)" };
char gszOpcode6D[] = { "ADC a" };
char gszOpcode6E[] = { "ROR a" };
char gszOpcode6F[] = { "ADC al" };
char gszOpcode70[] = { "BVS r" };
char gszOpcode71[] = { "ADC (d),y" };
char gszOpcode72[] = { "ADC (d)" };
char gszOpcode73[] = { "ADC (d,s),y" };
char gszOpcode74[] = { "STZ d,x" };
char gszOpcode75[] = { "ADC d,x" };
char gszOpcode76[] = { "ROR d,x" };
char gszOpcode77[] = { "ADC [d],y" };
char gszOpcode78[] = { "SEI i" };
char gszOpcode79[] = { "ADC a,y" };
char gszOpcode7A[] = { "PLY" };
char gszOpcode7B[] = { "TDC i" };
char gszOpcode7C[] = { "JMP (a,x)" };
char gszOpcode7D[] = { "ADC a,x" };
char gszOpcode7E[] = { "ROR a,x" };
char gszOpcode7F[] = { "ADC al,x" };
char gszOpcode80[] = { "BRA r" };
char gszOpcode81[] = { "STA (d,x)" };
char gszOpcode82[] = { "BRL rl" };
char gszOpcode83[] = { "STA d,s" };
char gszOpcode84[] = { "STY d" };
char gszOpcode85[] = { "STA d" };
char gszOpcode86[] = { "STX d" };
char gszOpcode87[] = { "STA [d]" };
char gszOpcode88[] = { "DEY i" };
char gszOpcode89[] = { "BIT #" };
char gszOpcode8A[] = { "TXA i" };
char gszOpcode8B[] = { "PHB" };
char gszOpcode8C[] = { "STY a" };
char gszOpcode8D[] = { "STA a" };
char gszOpcode8E[] = { "STX a" };
char gszOpcode8F[] = { "STA al" };
char gszOpcode90[] = { "BCC r" };
char gszOpcode91[] = { "STA (d),y" };
char gszOpcode92[] = { "STA (d)" };
char gszOpcode93[] = { "STA (d,s),y" };
char gszOpcode94[] = { "STY d,x" };
char gszOpcode95[] = { "STA d,x" };
char gszOpcode96[] = { "STX d,y" };
char gszOpcode97[] = { "STA [d],y" };
char gszOpcode98[] = { "TYA i" };
char gszOpcode99[] = { "STA a,y" };
char gszOpcode9A[] = { "TXS i" };
char gszOpcode9B[] = { "TXY i" };
char gszOpcode9C[] = { "STZ a" };
char gszOpcode9D[] = { "STA a,x" };
char gszOpcode9E[] = { "STZ a,x" };
char gszOpcode9F[] = { "STA al,x" };
char gszOpcodeA0[] = { "LDY #" };
char gszOpcodeA1[] = { "LDA (d,x)" };
char gszOpcodeA2[] = { "LDX #" };
char gszOpcodeA3[] = { "LDA d,s" };
char gszOpcodeA4[] = { "LDY d" };
char gszOpcodeA5[] = { "LDA d" };
char gszOpcodeA6[] = { "LDX d" };
char gszOpcodeA7[] = { "LDA [d]" };
char gszOpcodeA8[] = { "TAY i" };
char gszOpcodeA9[] = { "LDA #" };
char gszOpcodeAA[] = { "TAX i" };
char gszOpcodeAB[] = { "PLB s" };
char gszOpcodeAC[] = { "LDY a" };
char gszOpcodeAD[] = { "LDA a" };
char gszOpcodeAE[] = { "LDX a" };
char gszOpcodeAF[] = { "LDA al" };
char gszOpcodeB0[] = { "BCS r" };
char gszOpcodeB1[] = { "LDA (d),y" };
char gszOpcodeB2[] = { "LDA (d)" };
char gszOpcodeB3[] = { "LDA (d,s),y" };
char gszOpcodeB4[] = { "LDY d,x" };
char gszOpcodeB5[] = { "LDA d,x" };
char gszOpcodeB6[] = { "LDX d,y" };
char gszOpcodeB7[] = { "LDA [d],y" };
char gszOpcodeB8[] = { "CLV i" };
char gszOpcodeB9[] = { "LDA a,y" };
char gszOpcodeBA[] = { "TSX i" };
char gszOpcodeBB[] = { "TYX i" };
char gszOpcodeBC[] = { "LDY a,x" };
char gszOpcodeBD[] = { "LDA a,x" };
char gszOpcodeBE[] = { "LDX a,y" };
char gszOpcodeBF[] = { "LDA al,x" };
char gszOpcodeC0[] = { "CPY #" };
char gszOpcodeC1[] = { "CMP (d,x)" };
char gszOpcodeC2[] = { "REP #" };
char gszOpcodeC3[] = { "CMP d,s" };
char gszOpcodeC4[] = { "CPY d" };
char gszOpcodeC5[] = { "CMP d" };
char gszOpcodeC6[] = { "DEC d" };
char gszOpcodeC7[] = { "CMP [d]" };
char gszOpcodeC8[] = { "INY" };
char gszOpcodeC9[] = { "CMP #" };
char gszOpcodeCA[] = { "DEX i" };
char gszOpcodeCB[] = { "WAI" };
char gszOpcodeCC[] = { "CPY a" };
char gszOpcodeCD[] = { "CMP a" };
char gszOpcodeCE[] = { "DEC a" };
char gszOpcodeCF[] = { "CMP al" };
char gszOpcodeD0[] = { "BNE r" };
char gszOpcodeD1[] = { "CMP (d),y" };
char gszOpcodeD2[] = { "CMP (d)" };
char gszOpcodeD3[] = { "CMP (d,s),y" };
char gszOpcodeD4[] = { "PEI d" };
char gszOpcodeD5[] = { "CMP d,x" };
char gszOpcodeD6[] = { "DEC d,x" };
char gszOpcodeD7[] = { "CMP [d],y" };
char gszOpcodeD8[] = { "CLD i" };
char gszOpcodeD9[] = { "CMP a,y" };
char gszOpcodeDA[] = { "PHX" };
char gszOpcodeDB[] = { "STP" };
char gszOpcodeDC[] = { "JML (a)" };
char gszOpcodeDD[] = { "CMP a,x" };
char gszOpcodeDE[] = { "DEC a,x" };
char gszOpcodeDF[] = { "CMP al,x" };
char gszOpcodeE0[] = { "CPX #" };
char gszOpcodeE1[] = { "SBC (d,x)" };
char gszOpcodeE2[] = { "SEP #" };
char gszOpcodeE3[] = { "SBC d,s" };
char gszOpcodeE4[] = { "CPX d" };
char gszOpcodeE5[] = { "SBC d" };
char gszOpcodeE6[] = { "INC d" };
char gszOpcodeE7[] = { "SBC [d]" };
char gszOpcodeE8[] = { "INX" };
char gszOpcodeE9[] = { "SBC #" };
char gszOpcodeEA[] = { "NOP" };
char gszOpcodeEB[] = { "XBA i" };
char gszOpcodeEC[] = { "CPX a" };
char gszOpcodeED[] = { "SBC a" };
char gszOpcodeEE[] = { "INC a" };
char gszOpcodeEF[] = { "SBC al" };
char gszOpcodeF0[] = { "BEQ r" };
char gszOpcodeF1[] = { "SBC (d),y" };
char gszOpcodeF2[] = { "SBC (d)" };
char gszOpcodeF3[] = { "SBC (d,s),y" };
char gszOpcodeF4[] = { "PEA s" };
char gszOpcodeF5[] = { "SBC d,x" };
char gszOpcodeF6[] = { "INC d,x" };
char gszOpcodeF7[] = { "SBC [d],y" };
char gszOpcodeF8[] = { "SED i" };
char gszOpcodeF9[] = { "SBC a,y" };
char gszOpcodeFA[] = { "PLX s" };
char gszOpcodeFB[] = { "XCE i" };
char gszOpcodeFC[] = { "JSR (a,x)" };
char gszOpcodeFD[] = { "SBC a,x" };
char gszOpcodeFE[] = { "INC a,x" };
char gszOpcodeFF[] = { "SBC al,x" };


char* gpszOpcodes[] = { 
	gszOpcode00,
	gszOpcode01,
	gszOpcode02,
	gszOpcode03,
	gszOpcode04,
	gszOpcode05,
	gszOpcode06,
	gszOpcode07,
	gszOpcode08,
	gszOpcode09,
	gszOpcode0A,
	gszOpcode0B,
	gszOpcode0C,
	gszOpcode0D,
	gszOpcode0E,
	gszOpcode0F,
	gszOpcode10,
	gszOpcode11,
	gszOpcode12,
	gszOpcode13,
	gszOpcode14,
	gszOpcode15,
	gszOpcode16,
	gszOpcode17,
	gszOpcode18,
	gszOpcode19,
	gszOpcode1A,
	gszOpcode1B,
	gszOpcode1C,
	gszOpcode1D,
	gszOpcode1E,
	gszOpcode1F,
	gszOpcode20,
	gszOpcode21,
	gszOpcode22,
	gszOpcode23,
	gszOpcode24,
	gszOpcode25,
	gszOpcode26,
	gszOpcode27,
	gszOpcode28,
	gszOpcode29,
	gszOpcode2A,
	gszOpcode2B,
	gszOpcode2C,
	gszOpcode2D,
	gszOpcode2E,
	gszOpcode2F,
	gszOpcode30,
	gszOpcode31,
	gszOpcode32,
	gszOpcode33,
	gszOpcode34,
	gszOpcode35,
	gszOpcode36,
	gszOpcode37,
	gszOpcode38,
	gszOpcode39,
	gszOpcode3A,
	gszOpcode3B,
	gszOpcode3C,
	gszOpcode3D,
	gszOpcode3E,
	gszOpcode3F,
	gszOpcode40,
	gszOpcode41,
	gszOpcode42,
	gszOpcode43,
	gszOpcode44,
	gszOpcode45,
	gszOpcode46,
	gszOpcode47,
	gszOpcode48,
	gszOpcode49,
	gszOpcode4A,
	gszOpcode4B,
	gszOpcode4C,
	gszOpcode4D,
	gszOpcode4E,
	gszOpcode4F,
	gszOpcode50,
	gszOpcode51,
	gszOpcode52,
	gszOpcode53,
	gszOpcode54,
	gszOpcode55,
	gszOpcode56,
	gszOpcode57,
	gszOpcode58,
	gszOpcode59,
	gszOpcode5A,
	gszOpcode5B,
	gszOpcode5C,
	gszOpcode5D,
	gszOpcode5E,
	gszOpcode5F,
	gszOpcode60,
	gszOpcode61,
	gszOpcode62,
	gszOpcode63,
	gszOpcode64,
	gszOpcode65,
	gszOpcode66,
	gszOpcode67,
	gszOpcode68,
	gszOpcode69,
	gszOpcode6A,
	gszOpcode6B,
	gszOpcode6C,
	gszOpcode6D,
	gszOpcode6E,
	gszOpcode6F,
	gszOpcode70,
	gszOpcode71,
	gszOpcode72,
	gszOpcode73,
	gszOpcode74,
	gszOpcode75,
	gszOpcode76,
	gszOpcode77,
	gszOpcode78,
	gszOpcode79,
	gszOpcode7A,
	gszOpcode7B,
	gszOpcode7C,
	gszOpcode7D,
	gszOpcode7E,
	gszOpcode7F,
	gszOpcode80,
	gszOpcode81,
	gszOpcode82,
	gszOpcode83,
	gszOpcode84,
	gszOpcode85,
	gszOpcode86,
	gszOpcode87,
	gszOpcode88,
	gszOpcode89,
	gszOpcode8A,
	gszOpcode8B,
	gszOpcode8C,
	gszOpcode8D,
	gszOpcode8E,
	gszOpcode8F,
	gszOpcode90,
	gszOpcode91,
	gszOpcode92,
	gszOpcode93,
	gszOpcode94,
	gszOpcode95,
	gszOpcode96,
	gszOpcode97,
	gszOpcode98,
	gszOpcode99,
	gszOpcode9A,
	gszOpcode9B,
	gszOpcode9C,
	gszOpcode9D,
	gszOpcode9E,
	gszOpcode9F,
	gszOpcodeA0,
	gszOpcodeA1,
	gszOpcodeA2,
	gszOpcodeA3,
	gszOpcodeA4,
	gszOpcodeA5,
	gszOpcodeA6,
	gszOpcodeA7,
	gszOpcodeA8,
	gszOpcodeA9,
	gszOpcodeAA,
	gszOpcodeAB,
	gszOpcodeAC,
	gszOpcodeAD,
	gszOpcodeAE,
	gszOpcodeAF,
	gszOpcodeB0,
	gszOpcodeB1,
	gszOpcodeB2,
	gszOpcodeB3,
	gszOpcodeB4,
	gszOpcodeB5,
	gszOpcodeB6,
	gszOpcodeB7,
	gszOpcodeB8,
	gszOpcodeB9,
	gszOpcodeBA,
	gszOpcodeBB,
	gszOpcodeBC,
	gszOpcodeBD,
	gszOpcodeBE,
	gszOpcodeBF,
	gszOpcodeC0,
	gszOpcodeC1,
	gszOpcodeC2,
	gszOpcodeC3,
	gszOpcodeC4,
	gszOpcodeC5,
	gszOpcodeC6,
	gszOpcodeC7,
	gszOpcodeC8,
	gszOpcodeC9,
	gszOpcodeCA,
	gszOpcodeCB,
	gszOpcodeCC,
	gszOpcodeCD,
	gszOpcodeCE,
	gszOpcodeCF,
	gszOpcodeD0,
	gszOpcodeD1,
	gszOpcodeD2,
	gszOpcodeD3,
	gszOpcodeD4,
	gszOpcodeD5,
	gszOpcodeD6,
	gszOpcodeD7,
	gszOpcodeD8,
	gszOpcodeD9,
	gszOpcodeDA,
	gszOpcodeDB,
	gszOpcodeDC,
	gszOpcodeDD,
	gszOpcodeDE,
	gszOpcodeDF,
	gszOpcodeE0,
	gszOpcodeE1,
	gszOpcodeE2,
	gszOpcodeE3,
	gszOpcodeE4,
	gszOpcodeE5,
	gszOpcodeE6,
	gszOpcodeE7,
	gszOpcodeE8,
	gszOpcodeE9,
	gszOpcodeEA,
	gszOpcodeEB,
	gszOpcodeEC,
	gszOpcodeED,
	gszOpcodeEE,
	gszOpcodeEF,
	gszOpcodeF0,
	gszOpcodeF1,
	gszOpcodeF2,
	gszOpcodeF3,
	gszOpcodeF4,
	gszOpcodeF5,
	gszOpcodeF6,
	gszOpcodeF7,
	gszOpcodeF8,
	gszOpcodeF9,
	gszOpcodeFA,
	gszOpcodeFB,
	gszOpcodeFC,
	gszOpcodeFD,
	gszOpcodeFE,
	gszOpcodeFF };


#endif // __65816_OPCODE_MNEMONICS__

