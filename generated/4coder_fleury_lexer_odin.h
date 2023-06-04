#if !defined(FCODER_LEX_GEN_HAND_WRITTEN_TYPES)
#define FCODER_LEX_GEN_HAND_WRITTEN_TYPES

struct Lexeme_Table_Value{
    Token_Base_Kind base_kind;
    u16 sub_kind;
};

struct Lexeme_Table_Lookup{
    b32 found_match;
    Token_Base_Kind base_kind;
    u16 sub_kind;
};

#endif
typedef u16 Token_Odin_Kind;
enum{
TokenOdinKind_EOF = 0,
TokenOdinKind_Whitespace = 1,
TokenOdinKind_LexError = 2,
TokenOdinKind_BlockComment = 3,
TokenOdinKind_LineComment = 4,
TokenOdinKind_Backslash = 5,
TokenOdinKind_LiteralInteger = 6,
TokenOdinKind_LiteralIntegerU = 7,
TokenOdinKind_LiteralIntegerL = 8,
TokenOdinKind_LiteralIntegerUL = 9,
TokenOdinKind_LiteralIntegerLL = 10,
TokenOdinKind_LiteralIntegerULL = 11,
TokenOdinKind_LiteralIntegerHex = 12,
TokenOdinKind_LiteralIntegerHexU = 13,
TokenOdinKind_LiteralIntegerHexL = 14,
TokenOdinKind_LiteralIntegerHexUL = 15,
TokenOdinKind_LiteralIntegerHexLL = 16,
TokenOdinKind_LiteralIntegerHexULL = 17,
TokenOdinKind_LiteralIntegerOct = 18,
TokenOdinKind_LiteralIntegerOctU = 19,
TokenOdinKind_LiteralIntegerOctL = 20,
TokenOdinKind_LiteralIntegerOctUL = 21,
TokenOdinKind_LiteralIntegerOctLL = 22,
TokenOdinKind_LiteralIntegerOctULL = 23,
TokenOdinKind_LiteralFloat32 = 24,
TokenOdinKind_LiteralFloat64 = 25,
TokenOdinKind_LiteralString = 26,
TokenOdinKind_LiteralStringWide = 27,
TokenOdinKind_LiteralStringUTF8 = 28,
TokenOdinKind_LiteralStringUTF16 = 29,
TokenOdinKind_LiteralStringUTF32 = 30,
TokenOdinKind_LiteralStringRaw = 31,
TokenOdinKind_LiteralStringWideRaw = 32,
TokenOdinKind_LiteralStringUTF8Raw = 33,
TokenOdinKind_LiteralStringUTF16Raw = 34,
TokenOdinKind_LiteralStringUTF32Raw = 35,
TokenOdinKind_LiteralCharacter = 36,
TokenOdinKind_LiteralCharacterWide = 37,
TokenOdinKind_LiteralCharacterUTF8 = 38,
TokenOdinKind_LiteralCharacterUTF16 = 39,
TokenOdinKind_LiteralCharacterUTF32 = 40,
TokenOdinKind_PPIncludeFile = 41,
TokenOdinKind_PPErrorMessage = 42,
TokenOdinKind_KeywordGeneric = 43,
TokenOdinKind_BraceOp = 44,
TokenOdinKind_BraceCl = 45,
TokenOdinKind_ParenOp = 46,
TokenOdinKind_BrackOp = 47,
TokenOdinKind_ParenCl = 48,
TokenOdinKind_BrackCl = 49,
TokenOdinKind_Semicolon = 50,
TokenOdinKind_Colon = 51,
TokenOdinKind_DotDotDot = 52,
TokenOdinKind_ColonColon = 53,
TokenOdinKind_PlusPlus = 54,
TokenOdinKind_MinusMinus = 55,
TokenOdinKind_Dot = 56,
TokenOdinKind_Arrow = 57,
TokenOdinKind_Plus = 58,
TokenOdinKind_Minus = 59,
TokenOdinKind_Not = 60,
TokenOdinKind_Tilde = 61,
TokenOdinKind_Star = 62,
TokenOdinKind_And = 63,
TokenOdinKind_DotStar = 64,
TokenOdinKind_ArrowStar = 65,
TokenOdinKind_Div = 66,
TokenOdinKind_Mod = 67,
TokenOdinKind_LeftLeft = 68,
TokenOdinKind_RightRight = 69,
TokenOdinKind_Compare = 70,
TokenOdinKind_Less = 71,
TokenOdinKind_LessEq = 72,
TokenOdinKind_Grtr = 73,
TokenOdinKind_GrtrEq = 74,
TokenOdinKind_EqEq = 75,
TokenOdinKind_NotEq = 76,
TokenOdinKind_Xor = 77,
TokenOdinKind_Or = 78,
TokenOdinKind_AndAnd = 79,
TokenOdinKind_OrOr = 80,
TokenOdinKind_Ternary = 81,
TokenOdinKind_Eq = 82,
TokenOdinKind_PlusEq = 83,
TokenOdinKind_MinusEq = 84,
TokenOdinKind_StarEq = 85,
TokenOdinKind_DivEq = 86,
TokenOdinKind_ModEq = 87,
TokenOdinKind_LeftLeftEq = 88,
TokenOdinKind_RightRightEq = 89,
TokenOdinKind_Comma = 90,
TokenOdinKind_PPStringify = 91,
TokenOdinKind_PPConcat = 92,
TokenOdinKind_Void = 93,
TokenOdinKind_Bool = 94,
TokenOdinKind_Char = 95,
TokenOdinKind_Int = 96,
TokenOdinKind_Float = 97,
TokenOdinKind_Double = 98,
TokenOdinKind_Long = 99,
TokenOdinKind_Short = 100,
TokenOdinKind_Unsigned = 101,
TokenOdinKind_Signed = 102,
TokenOdinKind_Const = 103,
TokenOdinKind_Volatile = 104,
TokenOdinKind_Asm = 105,
TokenOdinKind_Break = 106,
TokenOdinKind_Case = 107,
TokenOdinKind_Catch = 108,
TokenOdinKind_Continue = 109,
TokenOdinKind_Default = 110,
TokenOdinKind_Do = 111,
TokenOdinKind_Else = 112,
TokenOdinKind_For = 113,
TokenOdinKind_Goto = 114,
TokenOdinKind_If = 115,
TokenOdinKind_Return = 116,
TokenOdinKind_Switch = 117,
TokenOdinKind_Try = 118,
TokenOdinKind_While = 119,
TokenOdinKind_StaticAssert = 120,
TokenOdinKind_ConstCast = 121,
TokenOdinKind_DynamicCast = 122,
TokenOdinKind_ReinterpretCast = 123,
TokenOdinKind_StaticCast = 124,
TokenOdinKind_Class = 125,
TokenOdinKind_Enum = 126,
TokenOdinKind_Struct = 127,
TokenOdinKind_Typedef = 128,
TokenOdinKind_Union = 129,
TokenOdinKind_Template = 130,
TokenOdinKind_Typename = 131,
TokenOdinKind_Friend = 132,
TokenOdinKind_Namespace = 133,
TokenOdinKind_Private = 134,
TokenOdinKind_Protected = 135,
TokenOdinKind_Public = 136,
TokenOdinKind_Using = 137,
TokenOdinKind_Extern = 138,
TokenOdinKind_Export = 139,
TokenOdinKind_Inline = 140,
TokenOdinKind_Static = 141,
TokenOdinKind_Virtual = 142,
TokenOdinKind_AlignAs = 143,
TokenOdinKind_Explicit = 144,
TokenOdinKind_NoExcept = 145,
TokenOdinKind_NullPtr = 146,
TokenOdinKind_Operator = 147,
TokenOdinKind_Register = 148,
TokenOdinKind_This = 149,
TokenOdinKind_ThreadLocal = 150,
TokenOdinKind_SizeOf = 151,
TokenOdinKind_AlignOf = 152,
TokenOdinKind_DeclType = 153,
TokenOdinKind_TypeID = 154,
TokenOdinKind_New = 155,
TokenOdinKind_Delete = 156,
TokenOdinKind_f32 = 157,
TokenOdinKind_u32 = 158,
TokenOdinKind_u16 = 159,
TokenOdinKind_i32 = 160,
TokenOdinKind_i16 = 161,
TokenOdinKind_i8 = 162,
TokenOdinKind_string = 163,
TokenOdinKind_cstring = 164,
TokenOdinKind_rawptr = 165,
TokenOdinKind_nil = 166,
TokenOdinKind_u8 = 167,
TokenOdinKind_byte = 168,
TokenOdinKind_any = 169,
TokenOdinKind_package = 170,
TokenOdinKind_import = 171,
TokenOdinKind_foreign = 172,
TokenOdinKind_when = 173,
TokenOdinKind_defer = 174,
TokenOdinKind_in = 175,
TokenOdinKind_not_in = 176,
TokenOdinKind_fallthrough = 177,
TokenOdinKind_proc = 178,
TokenOdinKind_bit_field = 179,
TokenOdinKind_bit_set = 180,
TokenOdinKind_map = 181,
TokenOdinKind_dynamic = 182,
TokenOdinKind_cast = 183,
TokenOdinKind_auto_cast = 184,
TokenOdinKind_transmute = 185,
TokenOdinKind_no_inline = 186,
TokenOdinKind_context = 187,
TokenOdinKind_size_of = 188,
TokenOdinKind_align_of = 189,
TokenOdinKind_offset_of = 190,
TokenOdinKind_type_of = 191,
TokenOdinKind_distinct = 192,
TokenOdinKind_opaque = 193,
TokenOdinKind_LiteralTrue = 194,
TokenOdinKind_LiteralFalse = 195,
TokenOdinKind_Identifier = 196,
TokenOdinKind_PPInclude = 197,
TokenOdinKind_PPVersion = 198,
TokenOdinKind_PPDefine = 199,
TokenOdinKind_PPUndef = 200,
TokenOdinKind_PPIf = 201,
TokenOdinKind_PPIfDef = 202,
TokenOdinKind_PPIfNDef = 203,
TokenOdinKind_PPElse = 204,
TokenOdinKind_PPElIf = 205,
TokenOdinKind_PPEndIf = 206,
TokenOdinKind_PPError = 207,
TokenOdinKind_PPImport = 208,
TokenOdinKind_PPUsing = 209,
TokenOdinKind_PPLine = 210,
TokenOdinKind_PPPragma = 211,
TokenOdinKind_PPUnknown = 212,
TokenOdinKind_PPDefined = 213,
TokenOdinKind_COUNT = 214,
};
char *token_odin_kind_names[] = {
"EOF",
"Whitespace",
"LexError",
"BlockComment",
"LineComment",
"Backslash",
"LiteralInteger",
"LiteralIntegerU",
"LiteralIntegerL",
"LiteralIntegerUL",
"LiteralIntegerLL",
"LiteralIntegerULL",
"LiteralIntegerHex",
"LiteralIntegerHexU",
"LiteralIntegerHexL",
"LiteralIntegerHexUL",
"LiteralIntegerHexLL",
"LiteralIntegerHexULL",
"LiteralIntegerOct",
"LiteralIntegerOctU",
"LiteralIntegerOctL",
"LiteralIntegerOctUL",
"LiteralIntegerOctLL",
"LiteralIntegerOctULL",
"LiteralFloat32",
"LiteralFloat64",
"LiteralString",
"LiteralStringWide",
"LiteralStringUTF8",
"LiteralStringUTF16",
"LiteralStringUTF32",
"LiteralStringRaw",
"LiteralStringWideRaw",
"LiteralStringUTF8Raw",
"LiteralStringUTF16Raw",
"LiteralStringUTF32Raw",
"LiteralCharacter",
"LiteralCharacterWide",
"LiteralCharacterUTF8",
"LiteralCharacterUTF16",
"LiteralCharacterUTF32",
"PPIncludeFile",
"PPErrorMessage",
"KeywordGeneric",
"BraceOp",
"BraceCl",
"ParenOp",
"BrackOp",
"ParenCl",
"BrackCl",
"Semicolon",
"Colon",
"DotDotDot",
"ColonColon",
"PlusPlus",
"MinusMinus",
"Dot",
"Arrow",
"Plus",
"Minus",
"Not",
"Tilde",
"Star",
"And",
"DotStar",
"ArrowStar",
"Div",
"Mod",
"LeftLeft",
"RightRight",
"Compare",
"Less",
"LessEq",
"Grtr",
"GrtrEq",
"EqEq",
"NotEq",
"Xor",
"Or",
"AndAnd",
"OrOr",
"Ternary",
"Eq",
"PlusEq",
"MinusEq",
"StarEq",
"DivEq",
"ModEq",
"LeftLeftEq",
"RightRightEq",
"Comma",
"PPStringify",
"PPConcat",
"Void",
"Bool",
"Char",
"Int",
"Float",
"Double",
"Long",
"Short",
"Unsigned",
"Signed",
"Const",
"Volatile",
"Asm",
"Break",
"Case",
"Catch",
"Continue",
"Default",
"Do",
"Else",
"For",
"Goto",
"If",
"Return",
"Switch",
"Try",
"While",
"StaticAssert",
"ConstCast",
"DynamicCast",
"ReinterpretCast",
"StaticCast",
"Class",
"Enum",
"Struct",
"Typedef",
"Union",
"Template",
"Typename",
"Friend",
"Namespace",
"Private",
"Protected",
"Public",
"Using",
"Extern",
"Export",
"Inline",
"Static",
"Virtual",
"AlignAs",
"Explicit",
"NoExcept",
"NullPtr",
"Operator",
"Register",
"This",
"ThreadLocal",
"SizeOf",
"AlignOf",
"DeclType",
"TypeID",
"New",
"Delete",
"f32",
"u32",
"u16",
"i32",
"i16",
"i8",
"string",
"cstring",
"rawptr",
"nil",
"u8",
"byte",
"any",
"package",
"import",
"foreign",
"when",
"defer",
"in",
"not_in",
"fallthrough",
"proc",
"bit_field",
"bit_set",
"map",
"dynamic",
"cast",
"auto_cast",
"transmute",
"no_inline",
"context",
"size_of",
"align_of",
"offset_of",
"type_of",
"distinct",
"opaque",
"LiteralTrue",
"LiteralFalse",
"Identifier",
"PPInclude",
"PPVersion",
"PPDefine",
"PPUndef",
"PPIf",
"PPIfDef",
"PPIfNDef",
"PPElse",
"PPElIf",
"PPEndIf",
"PPError",
"PPImport",
"PPUsing",
"PPLine",
"PPPragma",
"PPUnknown",
"PPDefined",
};
