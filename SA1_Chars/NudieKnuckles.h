#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

#include "SADXModLoader.h"

/* NINJA Basic (with Sonic Adventure DX additions) model
 *
 * Generated by SAMDL
 *
 * Description: 0034B094
 *
 */

NJS_MATERIAL nudieknuckles_matlist[] = {
	{ { 0xFFFF0026 }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFF0026 }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 nudieknuckles_p0[] = {
	4, 26, 1, 21, 16,
	0x8000u | 5, 6, 1, 11, 16, 15,
	0x8000u | 10, 11, 15, 10, 14, 9, 13, 8, 12, 7, 0,
	8, 0, 27, 17, 22, 18, 23, 19, 24,
	10, 31, 26, 30, 25, 29, 24, 28, 23, 27, 22,
	6, 12, 17, 13, 18, 14, 19,
	12, 11, 6, 10, 5, 9, 4, 8, 3, 7, 2, 0, 27,
	0x8000u | 5, 26, 1, 31, 6, 5,
	9, 27, 2, 28, 3, 29, 4, 30, 5, 31,
	0x8000u | 3, 0, 12, 17,
	0x8000u | 22, 79, 72, 104, 98, 78, 68, 96, 91, 87, 86, 105, 85, 83, 84, 94, 90, 77, 66, 103, 100, 80, 70,
	0x8000u | 9, 84, 85, 90, 89, 66, 74, 101, 98, 72,
	0x8000u | 7, 85, 86, 89, 91, 74, 68, 98,
	0x8000u | 5, 66, 101, 100, 76, 70,
	0x8000u | 3, 72, 76, 101,
	13, 80, 103, 69, 99, 102, 73, 67, 93, 95, 81, 88, 87, 96,
	0x8000u | 8, 87, 105, 81, 83, 82, 92, 93, 73,
	0x8000u | 3, 93, 81, 82,
	6, 69, 102, 75, 97, 71, 79,
	8, 88, 96, 95, 78, 67, 104, 97, 79,
	0x8000u | 6, 83, 94, 92, 65, 73, 99,
	0x8000u | 5, 103, 99, 77, 65, 94,
	0x8000u | 3, 67, 102, 97,
	0x8000u | 18, 45, 62, 35, 58, 51, 64, 39, 59, 47, 61, 37, 60, 53, 63, 33, 57, 45, 62,
	13, 58, 64, 41, 55, 34, 50, 56, 46, 36, 43, 54, 63, 57,
	0x8000u | 11, 63, 60, 43, 48, 46, 38, 50, 42, 55, 59, 64,
	0x8000u | 5, 38, 48, 42, 61, 59,
	0x8000u | 3, 48, 60, 61,
	7, 56, 36, 52, 54, 40, 57, 62,
	0x8000u | 7, 40, 52, 32, 44, 49, 41, 58,
	5, 41, 34, 44, 56, 52,
	5, 32, 40, 49, 62, 58
};

Sint16 nudieknuckles_p1[] = {
	0x8000u | 6, 26, 25, 21, 20, 16, 15,
	0x8000u | 6, 25, 24, 20, 19, 15, 14
};

NJS_TEX nudieknuckles_uv0[] = {
	{ 207, 32 },
	{ 125, 3 },
	{ 125, 42 },
	{ 43, 32 },
	{ 126, 5 },
	{ 125, 3 },
	{ 156, 13 },
	{ 71, 32 },
	{ 61, 74 },
	{ 156, 13 },
	{ 61, 74 },
	{ 185, 46 },
	{ 74, 132 },
	{ 203, 103 },
	{ 106, 197 },
	{ 208, 174 },
	{ 141, 243 },
	{ 200, 229 },
	{ 125, 255 },
	{ 175, 255 },
	{ 200, 229 },
	{ 125, 249 },
	{ 182, 243 },
	{ 125, 209 },
	{ 224, 197 },
	{ 125, 147 },
	{ 251, 132 },
	{ 156, 13 },
	{ 71, 32 },
	{ 185, 46 },
	{ 61, 74 },
	{ 203, 103 },
	{ 74, 132 },
	{ 208, 174 },
	{ 106, 197 },
	{ 200, 229 },
	{ 141, 243 },
	{ 68, 243 },
	{ 125, 249 },
	{ 26, 197 },
	{ 125, 209 },
	{ 0, 132 },
	{ 125, 147 },
	{ 43, 13 },
	{ 126, 5 },
	{ 5, 46 },
	{ 129, 36 },
	{ 0, 103 },
	{ 129, 92 },
	{ 26, 174 },
	{ 128, 166 },
	{ 68, 229 },
	{ 125, 223 },
	{ 125, 255 },
	{ 182, 229 },
	{ 71, 32 },
	{ 108, 3 },
	{ 207, 13 },
	{ 126, 5 },
	{ 129, 36 },
	{ 182, 229 },
	{ 125, 223 },
	{ 224, 174 },
	{ 128, 166 },
	{ 251, 103 },
	{ 129, 92 },
	{ 245, 46 },
	{ 129, 36 },
	{ 207, 13 },
	{ 125, 255 },
	{ 141, 243 },
	{ 125, 249 },
	{ 92, 105 },
	{ 78, 78 },
	{ 104, 94 },
	{ 99, 78 },
	{ 118, 84 },
	{ 117, 80 },
	{ 121, 81 },
	{ 121, 80 },
	{ 122, 81 },
	{ 121, 80 },
	{ 122, 80 },
	{ 122, 80 },
	{ 123, 80 },
	{ 122, 79 },
	{ 124, 79 },
	{ 122, 78 },
	{ 126, 76 },
	{ 122, 75 },
	{ 138, 64 },
	{ 122, 57 },
	{ 150, 53 },
	{ 125, 36 },
	{ 122, 79 },
	{ 122, 80 },
	{ 122, 78 },
	{ 121, 79 },
	{ 122, 75 },
	{ 119, 76 },
	{ 107, 63 },
	{ 99, 78 },
	{ 78, 78 },
	{ 122, 80 },
	{ 121, 80 },
	{ 121, 79 },
	{ 121, 80 },
	{ 119, 76 },
	{ 117, 80 },
	{ 99, 78 },
	{ 122, 75 },
	{ 107, 63 },
	{ 122, 57 },
	{ 89, 43 },
	{ 125, 36 },
	{ 78, 78 },
	{ 89, 43 },
	{ 107, 63 },
	{ 150, 53 },
	{ 138, 64 },
	{ 150, 80 },
	{ 145, 80 },
	{ 139, 98 },
	{ 126, 84 },
	{ 122, 86 },
	{ 124, 82 },
	{ 122, 82 },
	{ 123, 81 },
	{ 122, 81 },
	{ 122, 81 },
	{ 121, 81 },
	{ 122, 81 },
	{ 122, 80 },
	{ 123, 81 },
	{ 123, 80 },
	{ 123, 80 },
	{ 124, 80 },
	{ 124, 82 },
	{ 126, 84 },
	{ 124, 82 },
	{ 123, 81 },
	{ 123, 80 },
	{ 150, 80 },
	{ 139, 98 },
	{ 139, 99 },
	{ 120, 102 },
	{ 119, 108 },
	{ 92, 105 },
	{ 122, 81 },
	{ 121, 81 },
	{ 122, 82 },
	{ 118, 84 },
	{ 122, 86 },
	{ 104, 94 },
	{ 120, 102 },
	{ 92, 105 },
	{ 123, 80 },
	{ 124, 79 },
	{ 124, 80 },
	{ 128, 80 },
	{ 126, 84 },
	{ 145, 80 },
	{ 138, 64 },
	{ 145, 80 },
	{ 126, 76 },
	{ 128, 80 },
	{ 124, 79 },
	{ 122, 86 },
	{ 139, 98 },
	{ 120, 102 },
	{ 180, 150 },
	{ 148, 156 },
	{ 165, 108 },
	{ 141, 142 },
	{ 120, 108 },
	{ 125, 139 },
	{ 78, 123 },
	{ 112, 147 },
	{ 78, 168 },
	{ 109, 162 },
	{ 93, 210 },
	{ 117, 176 },
	{ 137, 210 },
	{ 132, 178 },
	{ 180, 195 },
	{ 146, 171 },
	{ 180, 150 },
	{ 148, 156 },
	{ 141, 142 },
	{ 125, 139 },
	{ 134, 151 },
	{ 127, 150 },
	{ 132, 155 },
	{ 128, 155 },
	{ 129, 159 },
	{ 125, 160 },
	{ 126, 163 },
	{ 123, 166 },
	{ 130, 168 },
	{ 132, 178 },
	{ 146, 171 },
	{ 132, 178 },
	{ 117, 176 },
	{ 123, 166 },
	{ 119, 160 },
	{ 125, 160 },
	{ 125, 156 },
	{ 128, 155 },
	{ 121, 153 },
	{ 127, 150 },
	{ 112, 147 },
	{ 125, 139 },
	{ 125, 156 },
	{ 119, 160 },
	{ 121, 153 },
	{ 109, 162 },
	{ 112, 147 },
	{ 119, 160 },
	{ 117, 176 },
	{ 109, 162 },
	{ 129, 159 },
	{ 126, 163 },
	{ 129, 163 },
	{ 130, 168 },
	{ 136, 164 },
	{ 146, 171 },
	{ 148, 156 },
	{ 136, 164 },
	{ 129, 163 },
	{ 133, 162 },
	{ 133, 158 },
	{ 138, 157 },
	{ 134, 151 },
	{ 141, 142 },
	{ 134, 151 },
	{ 132, 155 },
	{ 133, 158 },
	{ 129, 159 },
	{ 129, 163 },
	{ 133, 162 },
	{ 136, 164 },
	{ 138, 157 },
	{ 148, 156 },
	{ 141, 142 }
};

NJS_TEX nudieknuckles_uv1[] = {
	{ 213, 10 },
	{ 245, 83 },
	{ 125, 14 },
	{ 124, 127 },
	{ 32, 10 },
	{ 5, 83 },
	{ 245, 83 },
	{ 248, 206 },
	{ 124, 127 },
	{ 124, 251 },
	{ 5, 83 },
	{ 2, 205 }
};

NJS_MESHSET_SADX nudieknuckles_meshset[] = {
	{ NJD_MESHSET_TRIMESH | 0, 32, nudieknuckles_p0, NULL, NULL, NULL, nudieknuckles_uv0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, nudieknuckles_p1, NULL, NULL, NULL, nudieknuckles_uv1, NULL }
};

NJS_VECTOR nudieknuckles_pos[] = {
	{ 0.331164f, -1.49744f, 0 },
	{ -0.285568f, 1.022745f, 0 },
	{ 0.8303249f, -1.179752f, 0 },
	{ 0.999259f, -0.6041999f, 0.022074f },
	{ 1.026362f, 0.132179f, 0.034114f },
	{ 0.829251f, 0.692203f, 0.034114f },
	{ 0.484125f, 1.003905f, 0.01204f },
	{ 0.558171f, -1.246353f, -0.494297f },
	{ 0.634058f, -0.693571f, -0.8561479f },
	{ 0.5923229f, 0.025962f, -1.086367f },
	{ 0.423547f, 0.5929199f, -1.034904f },
	{ 0.152158f, 0.922667f, -0.7081259f },
	{ 0.013862f, -1.379554f, -0.494297f },
	{ -0.308712f, -0.924282f, -0.8561479f },
	{ -0.603959f, -0.266788f, -1.086367f },
	{ -0.716065f, 0.314038f, -1.034904f },
	{ -0.627614f, 0.7318439f, -0.7081259f },
	{ -0.258292f, -1.446155f, 0 },
	{ -0.7800969f, -1.039638f, 0 },
	{ -1.202101f, -0.413163f, 0 },
	{ -1.285871f, 0.174597f, 0 },
	{ -1.0175f, 0.636432f, 0 },
	{ 0.013862f, -1.379554f, 0.494297f },
	{ -0.308712f, -0.924282f, 0.8561479f },
	{ -0.603959f, -0.266788f, 1.086367f },
	{ -0.716065f, 0.314038f, 1.034904f },
	{ -0.627614f, 0.7318439f, 0.7081259f },
	{ 0.558171f, -1.246353f, 0.494297f },
	{ 0.634058f, -0.693571f, 0.8561479f },
	{ 0.592324f, 0.025963f, 1.086367f },
	{ 0.423547f, 0.5929199f, 1.034904f },
	{ 0.152158f, 0.922667f, 0.708125f },
	{ -0.4370398f, -1.822984f, 0.2515483f },
	{ -0.3519914f, -1.248045f, 0.1665f },
	{ -0.4370398f, -1.822984f, -0.2515483f },
	{ -0.3519914f, -1.248046f, -0.1665f },
	{ 0.0660568f, -1.822984f, 0.2515483f },
	{ -0.01899146f, -1.248046f, 0.1665f },
	{ 0.0660568f, -1.822984f, -0.2515483f },
	{ -0.01899146f, -1.248046f, -0.1665f },
	{ -0.4756862f, -1.61181f, 0.2901948f },
	{ -0.4756862f, -1.61181f, -0.2901948f },
	{ 0.1047034f, -1.61181f, -0.2901948f },
	{ 0.1047034f, -1.61181f, 0.2901948f },
	{ -0.4925601f, -1.872936f, -0.0000000009468448f },
	{ -0.418514f, -1.244481f, -0.0000000009468448f },
	{ 0.1215772f, -1.872936f, -0.0000000009468448f },
	{ 0.04753108f, -1.244481f, -0.0000000009468448f },
	{ 0.2178834f, -1.616175f, -0.0000000009468448f },
	{ -0.5888663f, -1.616175f, -0.0000000009468448f },
	{ -0.1854915f, -1.872936f, -0.3070687f },
	{ -0.1854915f, -1.244481f, -0.2330226f },
	{ -0.1854915f, -1.872936f, 0.3070687f },
	{ -0.1854915f, -1.244481f, 0.2330226f },
	{ -0.1854915f, -1.616175f, 0.4033748f },
	{ -0.1854915f, -1.616175f, -0.4033748f },
	{ -0.1854915f, -1.997757f, -0.0000000009468448f },
	{ -0.4139399f, -1.413604f, 0.2284485f },
	{ -0.4139399f, -1.413604f, -0.2284485f },
	{ 0.04295702f, -1.413604f, -0.2284485f },
	{ 0.04295702f, -1.413604f, 0.2284485f },
	{ 0.1325981f, -1.412555f, -0.0000000009468448f },
	{ -0.503581f, -1.412555f, -0.0000000009468448f },
	{ -0.1854915f, -1.412555f, 0.3180895f },
	{ -0.1854915f, -1.412555f, -0.3180895f },
	{ -0.4067942f, -1.494382f, 0.1573247f },
	{ -0.7135857f, -1.427829f, 0.1573247f },
	{ -0.4067942f, -1.494382f, -0.1573246f },
	{ -0.7135857f, -1.427829f, -0.1573246f },
	{ -0.3657528f, -1.26141f, 0.1325224f },
	{ -0.5845532f, -1.110429f, 0.1327755f },
	{ -0.3661072f, -1.262125f, -0.1325183f },
	{ -0.5845532f, -1.110429f, -0.1327755f },
	{ -0.3341941f, -1.510215f, 0.00000003418269f },
	{ -0.7862241f, -1.412156f, 0.00000002307242f },
	{ -0.316518f, -1.30774f, 0.000000005424731f },
	{ -0.6447403f, -1.0837f, -0.00000005297596f },
	{ -0.560209f, -1.461185f, 0.231804f },
	{ -0.560209f, -1.461185f, -0.2318039f },
	{ -0.4642176f, -1.163871f, -0.1991847f },
	{ -0.4642176f, -1.163871f, 0.1991846f },
	{ -0.5230844f, -1.759491f, 0.0000000835069f },
	{ -0.5357415f, -1.750825f, 0.07496065f },
	{ -0.6111025f, -1.750879f, 0.08848137f },
	{ -0.684878f, -1.736234f, 0.07496064f },
	{ -0.6991206f, -1.742268f, 0.00000007841339f },
	{ -0.684878f, -1.736234f, -0.07496049f },
	{ -0.6111025f, -1.750879f, -0.08848123f },
	{ -0.5357415f, -1.750825f, -0.07496049f },
	{ -0.7801338f, -1.64686f, 0.00000005812346f },
	{ -0.7262915f, -1.651055f, 0.1252973f },
	{ -0.7262917f, -1.651055f, -0.1252971f },
	{ -0.4770088f, -1.675444f, 0.1252973f },
	{ -0.4233958f, -1.681763f, 0.00000006842911f },
	{ -0.6017648f, -1.664312f, 0.1793076f },
	{ -0.4770088f, -1.675444f, -0.1252971f },
	{ -0.6017648f, -1.664312f, -0.1793075f },
	{ -0.3803002f, -1.296748f, -0.132151f },
	{ -0.6327353f, -1.222169f, -0.132151f },
	{ -0.3803002f, -1.296748f, 0.132151f },
	{ -0.6327353f, -1.222169f, 0.132151f },
	{ -0.6943595f, -1.203965f, 0.000000004124825f },
	{ -0.3186773f, -1.314956f, 0.00000001013271f },
	{ -0.5065184f, -1.259461f, 0.1966716f },
	{ -0.5065185f, -1.259461f, -0.1966716f },
	{ -0.6130552f, -1.768983f, 0.00000008321735f }
};

NJS_VECTOR nudieknuckles_nrm[] = {
	{ 0.2377712f, -0.9713212f, 0.00002315268f },
	{ -0.231636f, 0.9728026f, -0.0002477347f },
	{ 0.8260552f, -0.5635625f, 0.00547975f },
	{ 0.9827641f, -0.1841828f, 0.01585235f },
	{ 0.9898519f, 0.1415121f, 0.0129519f },
	{ 0.8297939f, 0.5577149f, 0.01990596f },
	{ 0.4058751f, 0.913896f, 0.007711576f },
	{ 0.50941f, -0.6773075f, -0.530807f },
	{ 0.582248f, -0.3429784f, -0.7371249f },
	{ 0.5638333f, 0.01500017f, -0.8257524f },
	{ 0.4068422f, 0.4942239f, -0.7682592f },
	{ 0.1116334f, 0.8781344f, -0.4652075f },
	{ -0.123497f, -0.8311273f, -0.5421954f },
	{ -0.3186047f, -0.5649407f, -0.7611393f },
	{ -0.4563255f, -0.235237f, -0.8581554f },
	{ -0.5425062f, 0.2653897f, -0.7970291f },
	{ -0.4718811f, 0.7380059f, -0.4823645f },
	{ -0.428968f, -0.9033197f, 0.00003864616f },
	{ -0.7465326f, -0.6653488f, -0.000001458452f },
	{ -0.9362149f, -0.3514283f, -0.0000001193661f },
	{ -0.9881188f, 0.1536925f, 0.0000001364378f },
	{ -0.7427489f, 0.6695701f, -0.0000001361379f },
	{ -0.1235515f, -0.8311124f, 0.5422058f },
	{ -0.3186045f, -0.5649409f, 0.7611394f },
	{ -0.4563256f, -0.2352369f, 0.8581554f },
	{ -0.5425063f, 0.2653896f, 0.7970291f },
	{ -0.4718811f, 0.7380059f, 0.4823646f },
	{ 0.5208979f, -0.6551496f, 0.5472152f },
	{ 0.5823827f, -0.3156828f, 0.7491161f },
	{ 0.5545306f, 0.02457803f, 0.8318003f },
	{ 0.412353f, 0.4790084f, 0.7749296f },
	{ 0.1320653f, 0.8655828f, 0.4830373f },
	{ -0.5823173f, -0.5672494f, 0.5823528f },
	{ -0.4269589f, -0.9041721f, 0.01338959f },
	{ -0.5823215f, -0.5672475f, -0.5823504f },
	{ -0.4269663f, -0.9041696f, -0.01331818f },
	{ 0.5823213f, -0.5672488f, 0.5823494f },
	{ -0.1075752f, -0.8360078f, 0.5380694f },
	{ 0.5823658f, -0.5672249f, -0.582328f },
	{ -0.1075831f, -0.8359913f, -0.5380934f },
	{ -0.7064521f, 0.04304893f, 0.7064505f },
	{ -0.7064504f, 0.04304883f, -0.706452f },
	{ 0.7064521f, 0.04304884f, -0.7064503f },
	{ 0.7064505f, 0.04304887f, 0.706452f },
	{ -0.719348f, -0.6946499f, -0.0001797377f },
	{ -0.4316751f, -0.9020292f, 0.0000846386f },
	{ 0.7193084f, -0.6946909f, -0.00001796987f },
	{ 0.2482683f, -0.9686915f, -0.0006608665f },
	{ 0.9991578f, 0.04103287f, 0.000005913898f },
	{ -0.9991578f, 0.0410328f, -0.00005894341f },
	{ -0.000301674f, -0.6946852f, -0.7193138f },
	{ -0.4142464f, -0.9099549f, -0.01955009f },
	{ -0.0002960302f, -0.6946903f, 0.719309f },
	{ -0.4142641f, -0.9099457f, 0.01960394f },
	{ -0.00005973503f, 0.04103287f, 0.9991578f },
	{ 0.000005890615f, 0.04103288f, -0.9991578f },
	{ -0.0000001772984f, -1, 0.00000003545968f },
	{ -0.6396301f, 0.4262785f, 0.6396564f },
	{ -0.6396563f, 0.4262787f, -0.6396301f },
	{ 0.6396298f, 0.4262787f, -0.6396563f },
	{ 0.6396563f, 0.4262788f, 0.63963f },
	{ 0.906661f, 0.42186f, 0.00002025254f },
	{ -0.906643f, 0.4218988f, 0.00001357659f },
	{ 0.00001358544f, 0.4218989f, 0.9066429f },
	{ 0.00002018898f, 0.42186f, -0.906661f },
	{ 0.6822455f, -0.1953307f, 0.7045473f },
	{ -0.6947771f, 0.134075f, 0.7066179f },
	{ 0.6821753f, -0.1953491f, -0.7046103f },
	{ -0.6947779f, 0.1340905f, -0.7066141f },
	{ -0.4083205f, -0.9126048f, -0.02066159f },
	{ -0.7302907f, -0.6829448f, 0.01618539f },
	{ -0.408265f, -0.912628f, 0.02073445f },
	{ -0.730284f, -0.6829517f, -0.01619633f },
	{ 0.9647388f, -0.263209f, -0.0001601502f },
	{ -0.9795598f, 0.2011529f, 0.0000132313f },
	{ -0.4256966f, -0.904866f, 0.000007838011f },
	{ -0.7424223f, -0.6699322f, -0.0002113637f },
	{ -0.006982698f, -0.02965825f, 0.9995357f },
	{ -0.006794424f, -0.02979214f, -0.9995331f },
	{ -0.3903999f, -0.9206427f, 0.002230842f },
	{ -0.3904429f, -0.9206246f, -0.002177967f },
	{ 0.3970733f, -0.917787f, -0.0001491414f },
	{ 0.3233859f, -0.8547296f, 0.4060284f },
	{ -0.0859218f, -0.8691789f, 0.4869759f },
	{ -0.4864959f, -0.7727959f, 0.4075639f },
	{ -0.5722481f, -0.8200805f, -0.0002405792f },
	{ -0.4865007f, -0.772801f, -0.4075485f },
	{ -0.08596236f, -0.8691675f, -0.4869888f },
	{ 0.3233745f, -0.8547263f, -0.4060443f },
	{ -0.9523954f, -0.3048655f, -0.0001058821f },
	{ -0.6911382f, -0.3465458f, 0.6342194f },
	{ -0.6911244f, -0.3465878f, -0.6342112f },
	{ 0.5511184f, -0.5530028f, 0.6248651f },
	{ 0.8029122f, -0.5960975f, -0.0001230184f },
	{ -0.06752675f, -0.4484769f, 0.8912401f },
	{ 0.5511088f, -0.552998f, -0.6248777f },
	{ -0.06751338f, -0.4484809f, -0.891239f },
	{ 0.6881052f, -0.1441616f, -0.7111461f },
	{ -0.6531964f, 0.3053786f, -0.6928769f },
	{ 0.687941f, -0.1445119f, 0.7112338f },
	{ -0.6532024f, 0.3053685f, 0.6928758f },
	{ -0.9170352f, 0.3988061f, 0.0000151128f },
	{ 0.9753605f, -0.2206172f, -0.0002911314f },
	{ -0.0008631586f, 0.08577027f, 0.9963145f },
	{ -0.0008031758f, 0.08580088f, -0.9963121f },
	{ -0.09785935f, -0.9952003f, -0.00007023104f }
};


