/*******************************************************************************
 *
 *	Font metric data for Courier
 *
 *	Copyright 2001 Ian Pilcher
 *
 *
 *	See dlls/wineps/data/COPYRIGHTS for font copyright information.
 *
 */

#include "psdrv.h"
#include "data/agl.h"


/*
 *  Glyph metrics
 */

static const AFMMETRICS metrics[243] = 
{
    {  32, 0x0020,  600, GN_space },
    {  33, 0x0021,  600, GN_exclam },
    {  34, 0x0022,  600, GN_quotedbl },
    {  35, 0x0023,  600, GN_numbersign },
    {  36, 0x0024,  600, GN_dollar },
    {  37, 0x0025,  600, GN_percent },
    {  38, 0x0026,  600, GN_ampersand },
    { 169, 0x0027,  600, GN_quotesingle },
    {  40, 0x0028,  600, GN_parenleft },
    {  41, 0x0029,  600, GN_parenright },
    {  42, 0x002a,  600, GN_asterisk },
    {  43, 0x002b,  600, GN_plus },
    {  44, 0x002c,  600, GN_comma },
    {  45, 0x002d,  600, GN_hyphen },
    {  46, 0x002e,  600, GN_period },
    {  47, 0x002f,  600, GN_slash },
    {  48, 0x0030,  600, GN_zero },
    {  49, 0x0031,  600, GN_one },
    {  50, 0x0032,  600, GN_two },
    {  51, 0x0033,  600, GN_three },
    {  52, 0x0034,  600, GN_four },
    {  53, 0x0035,  600, GN_five },
    {  54, 0x0036,  600, GN_six },
    {  55, 0x0037,  600, GN_seven },
    {  56, 0x0038,  600, GN_eight },
    {  57, 0x0039,  600, GN_nine },
    {  58, 0x003a,  600, GN_colon },
    {  59, 0x003b,  600, GN_semicolon },
    {  60, 0x003c,  600, GN_less },
    {  61, 0x003d,  600, GN_equal },
    {  62, 0x003e,  600, GN_greater },
    {  63, 0x003f,  600, GN_question },
    {  64, 0x0040,  600, GN_at },
    {  65, 0x0041,  600, GN_A },
    {  66, 0x0042,  600, GN_B },
    {  67, 0x0043,  600, GN_C },
    {  68, 0x0044,  600, GN_D },
    {  69, 0x0045,  600, GN_E },
    {  70, 0x0046,  600, GN_F },
    {  71, 0x0047,  600, GN_G },
    {  72, 0x0048,  600, GN_H },
    {  73, 0x0049,  600, GN_I },
    {  74, 0x004a,  600, GN_J },
    {  75, 0x004b,  600, GN_K },
    {  76, 0x004c,  600, GN_L },
    {  77, 0x004d,  600, GN_M },
    {  78, 0x004e,  600, GN_N },
    {  79, 0x004f,  600, GN_O },
    {  80, 0x0050,  600, GN_P },
    {  81, 0x0051,  600, GN_Q },
    {  82, 0x0052,  600, GN_R },
    {  83, 0x0053,  600, GN_S },
    {  84, 0x0054,  600, GN_T },
    {  85, 0x0055,  600, GN_U },
    {  86, 0x0056,  600, GN_V },
    {  87, 0x0057,  600, GN_W },
    {  88, 0x0058,  600, GN_X },
    {  89, 0x0059,  600, GN_Y },
    {  90, 0x005a,  600, GN_Z },
    {  91, 0x005b,  600, GN_bracketleft },
    {  92, 0x005c,  600, GN_backslash },
    {  93, 0x005d,  600, GN_bracketright },
    {  94, 0x005e,  600, GN_asciicircum },
    {  95, 0x005f,  600, GN_underscore },
    { 193, 0x0060,  600, GN_grave },
    {  97, 0x0061,  600, GN_a },
    {  98, 0x0062,  600, GN_b },
    {  99, 0x0063,  600, GN_c },
    { 100, 0x0064,  600, GN_d },
    { 101, 0x0065,  600, GN_e },
    { 102, 0x0066,  600, GN_f },
    { 103, 0x0067,  600, GN_g },
    { 104, 0x0068,  600, GN_h },
    { 105, 0x0069,  600, GN_i },
    { 106, 0x006a,  600, GN_j },
    { 107, 0x006b,  600, GN_k },
    { 108, 0x006c,  600, GN_l },
    { 109, 0x006d,  600, GN_m },
    { 110, 0x006e,  600, GN_n },
    { 111, 0x006f,  600, GN_o },
    { 112, 0x0070,  600, GN_p },
    { 113, 0x0071,  600, GN_q },
    { 114, 0x0072,  600, GN_r },
    { 115, 0x0073,  600, GN_s },
    { 116, 0x0074,  600, GN_t },
    { 117, 0x0075,  600, GN_u },
    { 118, 0x0076,  600, GN_v },
    { 119, 0x0077,  600, GN_w },
    { 120, 0x0078,  600, GN_x },
    { 121, 0x0079,  600, GN_y },
    { 122, 0x007a,  600, GN_z },
    { 123, 0x007b,  600, GN_braceleft },
    { 124, 0x007c,  600, GN_bar },
    { 125, 0x007d,  600, GN_braceright },
    { 126, 0x007e,  600, GN_asciitilde },
    { 161, 0x00a1,  600, GN_exclamdown },
    { 162, 0x00a2,  600, GN_cent },
    { 163, 0x00a3,  600, GN_sterling },
    { 168, 0x00a4,  600, GN_currency },
    { 165, 0x00a5,  600, GN_yen },
    {  -1, 0x00a6,  600, GN_brokenbar },
    { 167, 0x00a7,  600, GN_section },
    { 200, 0x00a8,  600, GN_dieresis },
    {  -1, 0x00a9,  600, GN_copyright },
    { 227, 0x00aa,  600, GN_ordfeminine },
    { 171, 0x00ab,  600, GN_guillemotleft },
    {  -1, 0x00ac,  600, GN_logicalnot },
    {  -1, 0x00ae,  600, GN_registered },
    {  -1, 0x00b0,  600, GN_degree },
    {  -1, 0x00b1,  600, GN_plusminus },
    {  -1, 0x00b2,  600, GN_twosuperior },
    {  -1, 0x00b3,  600, GN_threesuperior },
    { 194, 0x00b4,  600, GN_acute },
    { 182, 0x00b6,  600, GN_paragraph },
    { 180, 0x00b7,  600, GN_periodcentered },
    { 203, 0x00b8,  600, GN_cedilla },
    {  -1, 0x00b9,  600, GN_onesuperior },
    { 235, 0x00ba,  600, GN_ordmasculine },
    { 187, 0x00bb,  600, GN_guillemotright },
    {  -1, 0x00bc,  600, GN_onequarter },
    {  -1, 0x00bd,  600, GN_onehalf },
    {  -1, 0x00be,  600, GN_threequarters },
    { 191, 0x00bf,  600, GN_questiondown },
    {  -1, 0x00c0,  600, GN_Agrave },
    {  -1, 0x00c1,  600, GN_Aacute },
    {  -1, 0x00c2,  600, GN_Acircumflex },
    {  -1, 0x00c3,  600, GN_Atilde },
    {  -1, 0x00c4,  600, GN_Adieresis },
    {  -1, 0x00c5,  600, GN_Aring },
    { 225, 0x00c6,  600, GN_AE },
    {  -1, 0x00c7,  600, GN_Ccedilla },
    {  -1, 0x00c8,  600, GN_Egrave },
    {  -1, 0x00c9,  600, GN_Eacute },
    {  -1, 0x00ca,  600, GN_Ecircumflex },
    {  -1, 0x00cb,  600, GN_Edieresis },
    {  -1, 0x00cc,  600, GN_Igrave },
    {  -1, 0x00cd,  600, GN_Iacute },
    {  -1, 0x00ce,  600, GN_Icircumflex },
    {  -1, 0x00cf,  600, GN_Idieresis },
    {  -1, 0x00d0,  600, GN_Eth },
    {  -1, 0x00d1,  600, GN_Ntilde },
    {  -1, 0x00d2,  600, GN_Ograve },
    {  -1, 0x00d3,  600, GN_Oacute },
    {  -1, 0x00d4,  600, GN_Ocircumflex },
    {  -1, 0x00d5,  600, GN_Otilde },
    {  -1, 0x00d6,  600, GN_Odieresis },
    {  -1, 0x00d7,  600, GN_multiply },
    { 233, 0x00d8,  600, GN_Oslash },
    {  -1, 0x00d9,  600, GN_Ugrave },
    {  -1, 0x00da,  600, GN_Uacute },
    {  -1, 0x00db,  600, GN_Ucircumflex },
    {  -1, 0x00dc,  600, GN_Udieresis },
    {  -1, 0x00dd,  600, GN_Yacute },
    {  -1, 0x00de,  600, GN_Thorn },
    { 251, 0x00df,  600, GN_germandbls },
    {  -1, 0x00e0,  600, GN_agrave },
    {  -1, 0x00e1,  600, GN_aacute },
    {  -1, 0x00e2,  600, GN_acircumflex },
    {  -1, 0x00e3,  600, GN_atilde },
    {  -1, 0x00e4,  600, GN_adieresis },
    {  -1, 0x00e5,  600, GN_aring },
    { 241, 0x00e6,  600, GN_ae },
    {  -1, 0x00e7,  600, GN_ccedilla },
    {  -1, 0x00e8,  600, GN_egrave },
    {  -1, 0x00e9,  600, GN_eacute },
    {  -1, 0x00ea,  600, GN_ecircumflex },
    {  -1, 0x00eb,  600, GN_edieresis },
    {  -1, 0x00ec,  600, GN_igrave },
    {  -1, 0x00ed,  600, GN_iacute },
    {  -1, 0x00ee,  600, GN_icircumflex },
    {  -1, 0x00ef,  600, GN_idieresis },
    {  -1, 0x00f0,  600, GN_eth },
    {  -1, 0x00f1,  600, GN_ntilde },
    {  -1, 0x00f2,  600, GN_ograve },
    {  -1, 0x00f3,  600, GN_oacute },
    {  -1, 0x00f4,  600, GN_ocircumflex },
    {  -1, 0x00f5,  600, GN_otilde },
    {  -1, 0x00f6,  600, GN_odieresis },
    {  -1, 0x00f7,  600, GN_divide },
    { 249, 0x00f8,  600, GN_oslash },
    {  -1, 0x00f9,  600, GN_ugrave },
    {  -1, 0x00fa,  600, GN_uacute },
    {  -1, 0x00fb,  600, GN_ucircumflex },
    {  -1, 0x00fc,  600, GN_udieresis },
    {  -1, 0x00fd,  600, GN_yacute },
    {  -1, 0x00fe,  600, GN_thorn },
    {  -1, 0x00ff,  600, GN_ydieresis },
    { 245, 0x0131,  600, GN_dotlessi },
    {  -1, 0x0132,  600, GN_IJ },
    {  -1, 0x0133,  600, GN_ij },
    { 232, 0x0141,  600, GN_Lslash },
    { 248, 0x0142,  600, GN_lslash },
    { 234, 0x0152,  600, GN_OE },
    { 250, 0x0153,  600, GN_oe },
    {  -1, 0x015e,  600, GN_Scedilla },
    {  -1, 0x0160,  600, GN_Scaron },
    {  -1, 0x0161,  600, GN_scaron },
    {  -1, 0x0178,  600, GN_Ydieresis },
    {  -1, 0x017d,  600, GN_Zcaron },
    {  -1, 0x017e,  600, GN_zcaron },
    { 166, 0x0192,  600, GN_florin },
    {  -1, 0x01e6,  600, GN_Gcaron },
    {  -1, 0x01e7,  600, GN_gcaron },
    { 195, 0x02c6,  600, GN_circumflex },
    { 207, 0x02c7,  600, GN_caron },
    { 197, 0x02c9,  600, GN_macron },
    { 198, 0x02d8,  600, GN_breve },
    { 199, 0x02d9,  600, GN_dotaccent },
    { 202, 0x02da,  600, GN_ring },
    { 206, 0x02db,  600, GN_ogonek },
    { 196, 0x02dc,  600, GN_tilde },
    { 205, 0x02dd,  600, GN_hungarumlaut },
    {  -1, 0x03bc,  600, GN_mu },
    { 177, 0x2013,  600, GN_endash },
    { 208, 0x2014,  600, GN_emdash },
    {  96, 0x2018,  600, GN_quoteleft },
    {  39, 0x2019,  600, GN_quoteright },
    { 184, 0x201a,  600, GN_quotesinglbase },
    { 170, 0x201c,  600, GN_quotedblleft },
    { 186, 0x201d,  600, GN_quotedblright },
    { 185, 0x201e,  600, GN_quotedblbase },
    { 178, 0x2020,  600, GN_dagger },
    { 179, 0x2021,  600, GN_daggerdbl },
    { 183, 0x2022,  600, GN_bullet },
    { 188, 0x2026,  600, GN_ellipsis },
    { 189, 0x2030,  600, GN_perthousand },
    { 172, 0x2039,  600, GN_guilsinglleft },
    { 173, 0x203a,  600, GN_guilsinglright },
    {  -1, 0x20a4,  600, GN_lira },
    {  -1, 0x211e,  600, GN_prescription },
    {  -1, 0x2122,  600, GN_trademark },
    {  -1, 0x2190,  600, GN_arrowleft },
    {  -1, 0x2191,  600, GN_arrowup },
    {  -1, 0x2192,  600, GN_arrowright },
    {  -1, 0x2193,  600, GN_arrowdown },
    {  -1, 0x2194,  600, GN_arrowboth },
    {  -1, 0x2212,  600, GN_minus },
    { 164, 0x2215,  600, GN_fraction },
    {  -1, 0xf6bf,  600, GN_LL },
    {  -1, 0xf6c0,  600, GN_ll },
    {  -1, 0xf6c2,  600, GN_scedilla },
    { 174, 0xfb01,  600, GN_fi },
    { 175, 0xfb02,  600, GN_fl }
};


/*
 *  Font metrics
 */

const AFM PSDRV_Courier =
{
    "Courier",				    /* FontName */
    "Courier",				    /* FullName */
    "Courier",				    /* FamilyName */
    "AdobeStandardEncoding",		    /* EncodingScheme */
    FW_NORMAL,				    /* Weight */
    0,					    /* ItalicAngle */
    TRUE,				    /* IsFixedPitch */
    -100,				    /* UnderlinePosition */
    50,					    /* UnderlineThickness */
    { -28, -250, 628, 805 },		    /* FontBBox */
    629,				    /* Ascender */
    -157,				    /* Descender */
    {
	1000,				    /* WinMetrics.usUnitsPerEm */
	833,				    /* WinMetrics.sAscender */
	-300,				    /* WinMetrics.sDescender */
	0,				    /* WinMetrics.sLineGap */
	600,				    /* WinMetrics.sAvgCharWidth */
	613,				    /* WinMetrics.sTypoAscender */
	-188,				    /* WinMetrics.sTypoDescender */
	0,				    /* WinMetrics.sTypoLineGap */
	833,				    /* WinMetrics.usWinAscent */
	300				    /* WinMetrics.usWinDescent */
    },
    243,				    /* NumofMetrics */
    metrics				    /* Metrics */
};
