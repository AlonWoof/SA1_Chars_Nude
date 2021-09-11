#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

#include "SADXModLoader.h"

/* NINJA Basic (with Sonic Adventure DX additions) model
 *
 * Generated by SAMDL
 *
 * Description: 001BE76C
 *
 */

NJS_MATERIAL nudiesonic_matlist[] = {
	{ { 0xFF3333FF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFCC99 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 nudiesonic_p0[] = {
	19, 25, 101, 24, 20, 23, 19, 18, 15, 14, 11, 10, 2, 41, 39, 6, 40, 42, 14, 10,
	0x8000u | 12, 40, 14, 39, 0, 2, 34, 3, 31, 32, 28, 29, 25,
	6, 29, 32, 33, 4, 5, 9,
	0x8000u | 6, 32, 4, 3, 7, 2, 11,
	9, 14, 0, 18, 22, 23, 27, 24, 28, 25,
	4, 6, 42, 41, 10,
	4, 20, 102, 16, 17,
	0x8000u | 12, 28, 31, 27, 34, 26, 37, 35, 30, 36, 38, 22, 0,
	5, 0, 34, 38, 37, 30,
	5, 36, 35, 22, 26, 27,
	0x8000u | 7, 20, 19, 16, 15, 12, 11, 7,
	0x8000u | 8, 17, 16, 13, 12, 9, 8, 4, 7,
	0x8000u | 3, 7, 8, 12
};

Sint16 nudiesonic_p1[] = {
	18, 54, 52, 49, 46, 57, 55, 48, 44, 53, 51, 47, 43, 58, 56, 50, 45, 54, 52,
	6, 101, 25, 20, 21, 102, 17,
	11, 52, 45, 63, 62, 71, 74, 73, 65, 59, 43, 51,
	5, 43, 65, 56, 62, 45,
	0x8000u | 3, 74, 65, 62,
	9, 71, 73, 75, 68, 67, 64, 60, 44, 55,
	0x8000u | 6, 73, 68, 59, 64, 51, 44,
	11, 95, 83, 99, 86, 94, 82, 90, 92, 87, 81, 97,
	6, 94, 90, 100, 80, 96, 98,
	0x8000u | 5, 90, 80, 87, 98, 97,
	0x8000u | 5, 81, 91, 92, 86, 82,
	11, 97, 77, 98, 84, 96, 76, 88, 93, 85, 79, 95,
	0x8000u | 6, 95, 85, 99, 78, 94, 100,
	5, 85, 78, 88, 100, 96,
	0x8000u | 5, 79, 89, 93, 84, 76,
	0x8000u | 3, 86, 91, 83,
	0x8000u | 3, 84, 89, 77,
	5, 21, 25, 1, 29, 33,
	0x8000u | 5, 21, 17, 1, 13, 9,
	4, 33, 5, 1, 9,
	0x8000u | 7, 75, 71, 72, 63, 61, 52, 46,
	7, 46, 61, 66, 69, 70, 75, 67,
	4, 61, 72, 69, 75,
	0x8000u | 6, 67, 70, 60, 66, 55, 46
};

NJS_TEX nudiesonic_uv0[] = {
	{ 216, 216 },
	{ 0, 256 },
	{ 79, 195 },
	{ 79, 223 },
	{ 114, 195 },
	{ 114, 223 },
	{ 143, 186 },
	{ 114, 195 },
	{ 143, 172 },
	{ 114, 127 },
	{ 143, 122 },
	{ 150, 65 },
	{ 199, 112 },
	{ 187, 150 },
	{ 223, 211 },
	{ 175, 179 },
	{ 176, 146 },
	{ 143, 172 },
	{ 143, 122 },
	{ 175, 179 },
	{ 143, 172 },
	{ 187, 150 },
	{ 153, 122 },
	{ 150, 65 },
	{ 150, 65 },
	{ 116, 31 },
	{ 116, 59 },
	{ 78, 59 },
	{ 79, 127 },
	{ 44, 127 },
	{ 47, 175 },
	{ 44, 127 },
	{ 78, 59 },
	{ 47, 79 },
	{ 78, 31 },
	{ 47, 59 },
	{ 47, 79 },
	{ 78, 59 },
	{ 78, 31 },
	{ 116, 31 },
	{ 116, 59 },
	{ 150, 65 },
	{ 114, 127 },
	{ 143, 172 },
	{ 153, 122 },
	{ 143, 186 },
	{ 143, 172 },
	{ 114, 195 },
	{ 114, 127 },
	{ 79, 195 },
	{ 79, 127 },
	{ 47, 175 },
	{ 223, 211 },
	{ 176, 146 },
	{ 199, 112 },
	{ 143, 122 },
	{ 0, 256 },
	{ 0, 256 },
	{ 79, 195 },
	{ 38, 216 },
	{ 79, 127 },
	{ 116, 59 },
	{ 114, 127 },
	{ 150, 65 },
	{ 143, 122 },
	{ 199, 112 },
	{ 177, 144 },
	{ 223, 211 },
	{ 175, 179 },
	{ 187, 150 },
	{ 143, 172 },
	{ 153, 122 },
	{ 153, 122 },
	{ 150, 65 },
	{ 187, 150 },
	{ 199, 112 },
	{ 223, 211 },
	{ 175, 179 },
	{ 177, 144 },
	{ 143, 172 },
	{ 143, 122 },
	{ 114, 127 },
	{ 79, 223 },
	{ 114, 223 },
	{ 79, 195 },
	{ 114, 195 },
	{ 79, 127 },
	{ 114, 127 },
	{ 116, 59 },
	{ 47, 175 },
	{ 79, 195 },
	{ 44, 127 },
	{ 79, 127 },
	{ 47, 79 },
	{ 78, 59 },
	{ 78, 31 },
	{ 116, 59 },
	{ 116, 59 },
	{ 78, 59 },
	{ 79, 127 }
};

NJS_TEX nudiesonic_uv1[] = {
	{ 123, 104 },
	{ 119, 107 },
	{ 129, 108 },
	{ 123, 112 },
	{ 135, 112 },
	{ 126, 116 },
	{ 137, 117 },
	{ 127, 120 },
	{ 136, 124 },
	{ 128, 124 },
	{ 137, 131 },
	{ 127, 128 },
	{ 134, 136 },
	{ 126, 132 },
	{ 129, 140 },
	{ 123, 136 },
	{ 122, 144 },
	{ 118, 141 },
	{ 201, 220 },
	{ 217, 200 },
	{ 128, 238 },
	{ 127, 194 },
	{ 51, 219 },
	{ 33, 201 },
	{ 118, 141 },
	{ 123, 136 },
	{ 114, 136 },
	{ 119, 133 },
	{ 113, 130 },
	{ 117, 130 },
	{ 119, 128 },
	{ 122, 130 },
	{ 123, 127 },
	{ 127, 128 },
	{ 128, 124 },
	{ 127, 128 },
	{ 122, 130 },
	{ 126, 132 },
	{ 119, 133 },
	{ 123, 136 },
	{ 117, 130 },
	{ 122, 130 },
	{ 119, 133 },
	{ 113, 130 },
	{ 119, 128 },
	{ 116, 124 },
	{ 121, 126 },
	{ 121, 124 },
	{ 124, 124 },
	{ 124, 121 },
	{ 127, 120 },
	{ 126, 116 },
	{ 119, 128 },
	{ 121, 126 },
	{ 123, 127 },
	{ 124, 124 },
	{ 128, 124 },
	{ 127, 120 },
	{ 179, 164 },
	{ 175, 149 },
	{ 153, 165 },
	{ 158, 146 },
	{ 134, 153 },
	{ 145, 143 },
	{ 145, 132 },
	{ 158, 132 },
	{ 158, 118 },
	{ 175, 115 },
	{ 179, 99 },
	{ 134, 153 },
	{ 145, 132 },
	{ 126, 132 },
	{ 145, 120 },
	{ 134, 111 },
	{ 153, 99 },
	{ 145, 132 },
	{ 145, 120 },
	{ 158, 118 },
	{ 153, 99 },
	{ 179, 99 },
	{ 175, 115 },
	{ 171, 132 },
	{ 158, 132 },
	{ 158, 146 },
	{ 145, 143 },
	{ 124, 162 },
	{ 126, 146 },
	{ 97, 165 },
	{ 101, 146 },
	{ 78, 153 },
	{ 89, 144 },
	{ 88, 132 },
	{ 102, 132 },
	{ 100, 117 },
	{ 125, 116 },
	{ 122, 100 },
	{ 122, 100 },
	{ 100, 117 },
	{ 95, 99 },
	{ 88, 121 },
	{ 77, 112 },
	{ 69, 133 },
	{ 100, 117 },
	{ 88, 121 },
	{ 88, 132 },
	{ 69, 133 },
	{ 78, 153 },
	{ 125, 116 },
	{ 126, 131 },
	{ 102, 132 },
	{ 101, 146 },
	{ 89, 144 },
	{ 158, 146 },
	{ 171, 132 },
	{ 175, 149 },
	{ 101, 146 },
	{ 126, 131 },
	{ 126, 146 },
	{ 127, 194 },
	{ 217, 200 },
	{ 127, 127 },
	{ 250, 127 },
	{ 229, 38 },
	{ 127, 194 },
	{ 33, 201 },
	{ 127, 127 },
	{ 4, 127 },
	{ 25, 38 },
	{ 229, 38 },
	{ 127, 1 },
	{ 127, 127 },
	{ 25, 38 },
	{ 116, 124 },
	{ 113, 117 },
	{ 118, 117 },
	{ 115, 112 },
	{ 120, 115 },
	{ 119, 107 },
	{ 123, 112 },
	{ 123, 112 },
	{ 120, 115 },
	{ 122, 118 },
	{ 119, 120 },
	{ 121, 122 },
	{ 116, 124 },
	{ 121, 124 },
	{ 120, 115 },
	{ 118, 117 },
	{ 119, 120 },
	{ 116, 124 },
	{ 121, 124 },
	{ 121, 122 },
	{ 124, 121 },
	{ 122, 118 },
	{ 126, 116 },
	{ 123, 112 }
};

NJS_MESHSET_SADX nudiesonic_meshset[] = {
	{ NJD_MESHSET_TRIMESH | 0, 13, nudiesonic_p0, NULL, NULL, NULL, nudiesonic_uv0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 24, nudiesonic_p1, NULL, NULL, NULL, nudiesonic_uv1, NULL }
};

NJS_VECTOR nudiesonic_pos[] = {
	{ 0.93752f, 0.01136f, 0 },
	{ -1.089275f, -0.045173f, 0 },
	{ 0.878629f, 0.661817f, -0.372361f },
	{ 0.318846f, 1.055032f, 0 },
	{ -0.318368f, 1.055032f, 0 },
	{ -0.832378f, 0.729986f, 0 },
	{ 2.088477f, -1.003901f, -0.7686599f },
	{ 0.318846f, 0.732789f, -0.7447219f },
	{ -0.318368f, 0.732789f, -0.7447219f },
	{ -0.832378f, 0.502947f, -0.550935f },
	{ 0.7585109f, 0.01136f, -0.900839f },
	{ 0.28986f, -0.045173f, -0.9001679f },
	{ -0.289425f, -0.045173f, -0.9001679f },
	{ -0.878276f, -0.045173f, -0.634221f },
	{ 0.7585109f, -0.5602199f, -0.393388f },
	{ 0.28986f, -0.823136f, -0.636515f },
	{ -0.289425f, -0.823136f, -0.636515f },
	{ -0.7917652f, -0.593293f, -0.4889416f },
	{ 0.7585109f, -0.725137f, 0 },
	{ 0.28986f, -1.145378f, 0 },
	{ -0.289425f, -1.145378f, 0 },
	{ -0.756707f, -0.820332f, 0 },
	{ 0.7585109f, -0.5602199f, 0.393388f },
	{ 0.28986f, -0.823136f, 0.636515f },
	{ -0.289425f, -0.823136f, 0.636515f },
	{ -0.7917652f, -0.593293f, 0.4889416f },
	{ 0.7585109f, 0.01136f, 0.900839f },
	{ 0.28986f, -0.045173f, 0.9001679f },
	{ -0.289425f, -0.045173f, 0.9001679f },
	{ -0.878276f, -0.045173f, 0.634221f },
	{ 2.088477f, -1.003901f, 0.7686599f },
	{ 0.318846f, 0.732789f, 0.7447219f },
	{ -0.318368f, 0.732789f, 0.7447219f },
	{ -0.832378f, 0.502947f, 0.550935f },
	{ 0.878629f, 0.661817f, 0.372361f },
	{ 1.325422f, -0.244116f, 0.8785959f },
	{ 1.289238f, -0.646074f, 0.558616f },
	{ 1.697312f, 0.125458f, 0.668523f },
	{ 1.493748f, -0.306925f, 0.233461f },
	{ 1.493748f, -0.306925f, -0.233461f },
	{ 1.289238f, -0.646074f, -0.558616f },
	{ 1.697312f, 0.125458f, -0.668523f },
	{ 1.319553f, -0.265707f, -0.886533f },
	{ -0.6789206f, -1.057953f, 0.1189613f },
	{ -0.6789206f, -1.057953f, -0.1189624f },
	{ -0.4700733f, -1.108525f, 0.1189613f },
	{ -0.4700733f, -1.108525f, -0.1189624f },
	{ -0.6134853f, -0.8348937f, 0.1256531f },
	{ -0.6152244f, -0.840822f, -0.1254763f },
	{ -0.4317719f, -0.9712933f, -0.1247545f },
	{ -0.4283994f, -0.9592099f, 0.1252634f },
	{ -0.7089704f, -1.054843f, -0.000005471852f },
	{ -0.4400281f, -1.113811f, -0.000005471852f },
	{ -0.6683898f, -0.8595611f, -0.000005475554f },
	{ -0.4140819f, -1.030259f, -0.00000547479f },
	{ -0.5744993f, -1.084327f, -0.151353f },
	{ -0.5744993f, -1.084327f, 0.1513519f },
	{ -0.5148224f, -0.875626f, -0.1697696f },
	{ -0.5162618f, -0.8806603f, 0.1693242f },
	{ -0.714015f, -1.192872f, 0.1337403f },
	{ -0.714015f, -1.192872f, -0.1337413f },
	{ -0.4640406f, -1.223195f, -0.1337413f },
	{ -0.4640406f, -1.223195f, 0.1337403f },
	{ -0.4375862f, -1.235106f, -0.000005479183f },
	{ -0.7406323f, -1.189554f, -0.000005479183f },
	{ -0.5891092f, -1.218241f, 0.1612595f },
	{ -0.5891092f, -1.218241f, -0.1612606f },
	{ -0.7263211f, -1.311842f, -0.000005478305f },
	{ -0.7001883f, -1.303144f, 0.1025348f },
	{ -0.599105f, -1.325433f, -0.1277083f },
	{ -0.7001883f, -1.303144f, -0.1025359f },
	{ -0.4718735f, -1.327297f, -0.000005478305f },
	{ -0.4973665f, -1.307067f, -0.1025526f },
	{ -0.599105f, -1.325433f, 0.1277072f },
	{ -0.4973665f, -1.307067f, 0.1025515f },
	{ -0.6003902f, -1.369705f, -0.000005483766f },
	{ -0.4618779f, -1.430428f, 0.1892006f },
	{ -0.4440319f, -0.9193473f, 0.1713546f },
	{ -0.4618779f, -1.430428f, -0.1892013f },
	{ -0.4440319f, -0.9193473f, -0.1713553f },
	{ -0.1226455f, -1.40651f, 0.172001f },
	{ -0.1388691f, -1.035654f, 0.1557773f },
	{ -0.1226455f, -1.40651f, -0.1720008f },
	{ -0.1388691f, -1.035654f, -0.1557771f },
	{ -0.5013455f, -1.238801f, 0.2286682f },
	{ -0.5013455f, -1.238801f, -0.2286688f },
	{ -0.08676589f, -1.232304f, -0.2078803f },
	{ -0.08676589f, -1.232304f, 0.2078806f },
	{ -0.5059472f, -1.472734f, -0.000003184068f },
	{ -0.4746715f, -0.9140816f, -0.000003184068f },
	{ -0.08258256f, -1.44497f, 0.0000001192568f },
	{ -0.1110149f, -1.114779f, 0.0000001192568f },
	{ -0.0007963143f, -1.228547f, 0.0000001192568f },
	{ -0.595912f, -1.234668f, -0.000003184068f },
	{ -0.272677f, -1.472734f, -0.2332705f },
	{ -0.272677f, -0.9588541f, -0.2019949f },
	{ -0.272677f, -1.472734f, 0.2332698f },
	{ -0.272677f, -0.9588541f, 0.2019943f },
	{ -0.272677f, -1.234668f, 0.3232347f },
	{ -0.272677f, -1.234668f, -0.3232354f },
	{ -0.272677f, -1.572083f, -0.000003184068f },
	{ -0.5568355f, -0.8693355f, 0.4185098f },
	{ -0.5568354f, -0.8693355f, -0.4185098f }
};

NJS_VECTOR nudiesonic_nrm[] = {
	{ 0.999519f, 0.03101392f, -0.000000278685f },
	{ -0.9991117f, -0.04213693f, -0.00000004073017f },
	{ 0.6486846f, 0.7035316f, -0.2902612f },
	{ 0.2241661f, 0.9745509f, -0.00000005581055f },
	{ -0.2571723f, 0.9663655f, -0.000003899208f },
	{ -0.7459226f, 0.6660317f, -0.001088563f },
	{ 0.6625008f, -0.723192f, -0.1951559f },
	{ 0.2582494f, 0.5825081f, -0.7707087f },
	{ -0.2420364f, 0.6166501f, -0.7491068f },
	{ -0.7147306f, 0.4313237f, -0.5505633f },
	{ -0.02611679f, 0.06773484f, -0.9973615f },
	{ 0.1393829f, -0.07519545f, -0.9873794f },
	{ -0.2105279f, -0.06315532f, -0.9755459f },
	{ -0.7376668f, -0.0588293f, -0.6725971f },
	{ 0.4959767f, -0.7971687f, -0.3442807f },
	{ 0.3040141f, -0.6314619f, -0.7133242f },
	{ -0.01362085f, -0.6378814f, -0.7700142f },
	{ -0.7457821f, -0.3294322f, -0.5790367f },
	{ 0.8162001f, -0.5777695f, 0.00000002692607f },
	{ 0.3270671f, -0.9450011f, -0.0000001850924f },
	{ -0.2638979f, -0.9503852f, -0.1646996f },
	{ -0.4369689f, -0.8994766f, -0.0002534315f },
	{ 0.4999005f, -0.7929932f, 0.3482256f },
	{ 0.3040141f, -0.6314619f, 0.7133242f },
	{ -0.1901595f, -0.7308041f, 0.6555644f },
	{ -0.7323645f, -0.5491657f, 0.4025659f },
	{ -0.01993892f, 0.06186966f, 0.9978852f },
	{ 0.1393829f, -0.07519541f, 0.9873794f },
	{ -0.1932817f, -0.06515664f, 0.9789774f },
	{ -0.7235615f, -0.06215582f, 0.6874558f },
	{ 0.6598495f, -0.7246744f, 0.1986095f },
	{ 0.2582494f, 0.582508f, 0.7707086f },
	{ -0.2480365f, 0.6151364f, 0.7483884f },
	{ -0.7201919f, 0.4271093f, 0.5467184f },
	{ 0.6486845f, 0.7035317f, 0.2902612f },
	{ -0.01746605f, -0.1349494f, 0.9906985f },
	{ -0.2944703f, -0.9551474f, 0.03131509f },
	{ 0.7503431f, 0.6247768f, 0.2159608f },
	{ 0.4453888f, -0.143767f, -0.8837194f },
	{ 0.4453889f, -0.143767f, 0.8837193f },
	{ -0.2889321f, -0.9572915f, -0.0105468f },
	{ 0.7501026f, 0.6251293f, -0.2157762f },
	{ -0.02918174f, -0.1532642f, -0.9877543f },
	{ -0.7075697f, 0.1886893f, 0.6809858f },
	{ -0.7077719f, 0.1884285f, -0.6808478f },
	{ 0.7065161f, -0.07760403f, 0.7034292f },
	{ 0.7062545f, -0.07792893f, -0.7036558f },
	{ -0.5996802f, -0.7864763f, 0.1477799f },
	{ -0.6053905f, -0.7847096f, -0.1331664f },
	{ -0.4367163f, -0.8897903f, -0.1324848f },
	{ -0.4325913f, -0.8893742f, 0.1479132f },
	{ -0.96916f, 0.2464323f, 0.0001698532f },
	{ 0.9930181f, -0.1179621f, 0.00005386677f },
	{ -0.6316905f, -0.7751946f, 0.006350592f },
	{ -0.4097408f, -0.9121701f, 0.007642478f },
	{ -0.01532467f, 0.0314366f, -0.9993882f },
	{ -0.01488813f, 0.03181573f, 0.9993829f },
	{ -0.5259057f, -0.8292243f, -0.1892361f },
	{ -0.5155045f, -0.8334179f, 0.1991723f },
	{ -0.71648f, 0.00005513569f, 0.6976076f },
	{ -0.71652f, 0.00008398702f, -0.6975667f },
	{ 0.6996245f, -0.1585036f, -0.6967083f },
	{ 0.6996509f, -0.1585009f, 0.6966823f },
	{ 0.9826154f, -0.1856528f, 0.000004322268f },
	{ -0.9985482f, 0.05386812f, -0.00007918105f },
	{ -0.002971373f, -0.1191497f, 0.9928719f },
	{ -0.002973069f, -0.1191289f, -0.9928743f },
	{ -0.7975979f, -0.6031895f, 0.000003564637f },
	{ -0.633697f, -0.5494617f, 0.5445367f },
	{ -0.04028027f, -0.7142544f, -0.6987261f },
	{ -0.6337236f, -0.5494601f, -0.5445071f },
	{ 0.6743505f, -0.7384114f, 0.0000005247421f },
	{ 0.5337105f, -0.6400436f, -0.5527181f },
	{ -0.040298f, -0.7142488f, 0.6987309f },
	{ 0.5336934f, -0.6400511f, 0.5527259f },
	{ -0.03820087f, -0.9992701f, 0.00001468184f },
	{ -0.5847984f, -0.5621636f, 0.5847932f },
	{ -0.4516196f, -0.8685001f, 0.2043222f },
	{ -0.5848193f, -0.5621535f, -0.5847821f },
	{ -0.4603876f, -0.866235f, -0.194114f },
	{ 0.6794622f, -0.503984f, 0.5332274f },
	{ -0.1051347f, -0.9460942f, 0.3063536f },
	{ 0.6794905f, -0.5037082f, -0.5334517f },
	{ -0.1122374f, -0.9468716f, -0.3013921f },
	{ -0.7018744f, -0.007703732f, 0.7122591f },
	{ -0.7018623f, -0.007683152f, -0.7122714f },
	{ 0.7848597f, 0.0624525f, -0.6165185f },
	{ 0.7848656f, 0.06247371f, 0.6165087f },
	{ -0.7198458f, -0.6941339f, -0.0001460034f },
	{ -0.4961969f, -0.8676349f, 0.03159759f },
	{ 0.7847247f, -0.6198445f, 0.00002420042f },
	{ -0.08697468f, -0.9960598f, 0.01732436f },
	{ 0.9964377f, 0.08433218f, -0.0001030415f },
	{ -0.9999763f, -0.006886003f, -0.00006822869f },
	{ 0.09035172f, -0.6928006f, -0.7154467f },
	{ -0.3722148f, -0.9041808f, -0.2095554f },
	{ 0.09032781f, -0.692802f, 0.7154483f },
	{ -0.3634419f, -0.905857f, 0.2175619f },
	{ 0.1043425f, 0.01323272f, 0.9944534f },
	{ 0.1043473f, 0.01323287f, -0.9944529f },
	{ 0.09480228f, -0.9954962f, 0.00001867115f },
	{ -0.4758539f, -0.7625893f, 0.4382016f },
	{ -0.475862f, -0.7625937f, -0.4381851f }
};


/* NINJA Basic (with Sonic Adventure DX additions) model
 *
 * Generated by SAMDL
 *
 * Description: 00009D2C
 *
 */

NJS_MATERIAL nudiesupersonic_matlist[] = {
	{ { 0xFFFFB200 }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFCC99 }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 nudiesupersonic_p0[] = {
	19, 25, 43, 24, 20, 23, 19, 18, 15, 14, 11, 10, 2, 41, 39, 6, 40, 42, 14, 10,
	0x8000u | 12, 40, 14, 39, 0, 2, 34, 3, 31, 32, 28, 29, 25,
	6, 29, 32, 33, 4, 5, 9,
	0x8000u | 6, 32, 4, 3, 7, 2, 11,
	9, 14, 0, 18, 22, 23, 27, 24, 28, 25,
	4, 6, 42, 41, 10,
	4, 20, 44, 16, 17,
	0x8000u | 12, 28, 31, 27, 34, 26, 37, 35, 30, 36, 38, 22, 0,
	5, 0, 34, 38, 37, 30,
	5, 36, 35, 22, 26, 27,
	0x8000u | 7, 20, 19, 16, 15, 12, 11, 7,
	0x8000u | 8, 17, 16, 13, 12, 9, 8, 4, 7,
	0x8000u | 3, 7, 8, 12
};

Sint16 nudiesupersonic_p1[] = {
	18, 56, 54, 51, 48, 59, 57, 50, 46, 55, 53, 49, 45, 60, 58, 52, 47, 56, 54,
	6, 43, 25, 20, 21, 44, 17,
	11, 54, 47, 65, 64, 73, 76, 75, 67, 61, 45, 53,
	5, 45, 67, 58, 64, 47,
	0x8000u | 3, 76, 67, 64,
	9, 73, 75, 77, 70, 69, 66, 62, 46, 57,
	0x8000u | 6, 75, 70, 61, 66, 53, 46,
	11, 100, 79, 88, 82, 99, 78, 84, 86, 83, 81, 98,
	0x8000u | 6, 98, 83, 101, 80, 87, 102,
	5, 83, 80, 84, 102, 99,
	0x8000u | 5, 81, 85, 86, 82, 78,
	0x8000u | 3, 82, 85, 79,
	11, 98, 92, 101, 93, 87, 91, 95, 97, 94, 90, 100,
	6, 87, 95, 102, 89, 99, 88,
	0x8000u | 5, 95, 89, 94, 88, 100,
	0x8000u | 5, 90, 96, 97, 93, 91,
	0x8000u | 3, 93, 96, 92,
	5, 21, 25, 1, 29, 33,
	0x8000u | 5, 21, 17, 1, 13, 9,
	4, 33, 5, 1, 9,
	0x8000u | 7, 77, 73, 74, 65, 63, 54, 48,
	7, 48, 63, 68, 71, 72, 77, 69,
	4, 63, 74, 71, 77,
	0x8000u | 6, 69, 72, 62, 68, 57, 48
};

NJS_TEX nudiesupersonic_uv1[] = {
	{ 61, 177 },
	{ 60, 179 },
	{ 64, 179 },
	{ 62, 181 },
	{ 66, 181 },
	{ 63, 182 },
	{ 67, 183 },
	{ 63, 184 },
	{ 67, 185 },
	{ 63, 185 },
	{ 67, 188 },
	{ 63, 187 },
	{ 66, 190 },
	{ 62, 189 },
	{ 64, 192 },
	{ 61, 190 },
	{ 61, 193 },
	{ 60, 192 },
	{ 93, 224 },
	{ 100, 216 },
	{ 63, 232 },
	{ 63, 214 },
	{ 32, 224 },
	{ 25, 216 },
	{ 60, 192 },
	{ 61, 190 },
	{ 58, 190 },
	{ 60, 189 },
	{ 57, 188 },
	{ 59, 188 },
	{ 60, 187 },
	{ 61, 188 },
	{ 62, 187 },
	{ 63, 187 },
	{ 63, 185 },
	{ 63, 187 },
	{ 61, 188 },
	{ 62, 189 },
	{ 60, 189 },
	{ 61, 190 },
	{ 59, 188 },
	{ 61, 188 },
	{ 60, 189 },
	{ 57, 188 },
	{ 60, 187 },
	{ 58, 185 },
	{ 61, 186 },
	{ 61, 185 },
	{ 62, 185 },
	{ 62, 184 },
	{ 63, 184 },
	{ 63, 182 },
	{ 60, 187 },
	{ 61, 186 },
	{ 62, 187 },
	{ 62, 185 },
	{ 63, 185 },
	{ 63, 184 },
	{ 62, 201 },
	{ 63, 194 },
	{ 51, 202 },
	{ 52, 194 },
	{ 43, 197 },
	{ 48, 193 },
	{ 47, 189 },
	{ 53, 188 },
	{ 52, 183 },
	{ 62, 182 },
	{ 61, 176 },
	{ 61, 176 },
	{ 52, 183 },
	{ 50, 175 },
	{ 47, 184 },
	{ 43, 180 },
	{ 40, 189 },
	{ 52, 183 },
	{ 47, 184 },
	{ 47, 189 },
	{ 40, 189 },
	{ 43, 197 },
	{ 62, 182 },
	{ 63, 188 },
	{ 53, 188 },
	{ 52, 194 },
	{ 48, 193 },
	{ 52, 194 },
	{ 63, 188 },
	{ 63, 194 },
	{ 84, 202 },
	{ 82, 195 },
	{ 73, 202 },
	{ 75, 194 },
	{ 66, 197 },
	{ 70, 193 },
	{ 70, 189 },
	{ 76, 189 },
	{ 75, 183 },
	{ 82, 182 },
	{ 84, 175 },
	{ 66, 197 },
	{ 70, 189 },
	{ 63, 189 },
	{ 70, 184 },
	{ 66, 180 },
	{ 73, 175 },
	{ 70, 189 },
	{ 70, 184 },
	{ 75, 183 },
	{ 73, 175 },
	{ 84, 175 },
	{ 82, 182 },
	{ 81, 189 },
	{ 76, 189 },
	{ 75, 194 },
	{ 70, 193 },
	{ 75, 194 },
	{ 81, 189 },
	{ 82, 195 },
	{ 63, 214 },
	{ 100, 216 },
	{ 63, 187 },
	{ 113, 187 },
	{ 104, 150 },
	{ 63, 214 },
	{ 25, 216 },
	{ 63, 187 },
	{ 13, 187 },
	{ 22, 150 },
	{ 104, 150 },
	{ 63, 135 },
	{ 63, 187 },
	{ 22, 150 },
	{ 58, 185 },
	{ 57, 183 },
	{ 59, 183 },
	{ 58, 181 },
	{ 60, 182 },
	{ 60, 179 },
	{ 62, 181 },
	{ 62, 181 },
	{ 60, 182 },
	{ 61, 183 },
	{ 60, 184 },
	{ 61, 184 },
	{ 58, 185 },
	{ 61, 185 },
	{ 60, 182 },
	{ 59, 183 },
	{ 60, 184 },
	{ 58, 185 },
	{ 61, 185 },
	{ 61, 184 },
	{ 62, 184 },
	{ 61, 183 },
	{ 63, 182 },
	{ 62, 181 }
};

NJS_MESHSET_SADX nudiesupersonic_meshset[] = {
	{ NJD_MESHSET_TRIMESH | 0, 13, nudiesupersonic_p0, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 24, nudiesupersonic_p1, NULL, NULL, NULL, nudiesupersonic_uv1, NULL }
};

NJS_VECTOR nudiesupersonic_pos[] = {
	{ 0.9421591f, 0.004618761f, 0 },
	{ -1.089275f, -0.05357079f, 0 },
	{ 0.878629f, 0.661817f, -0.372361f },
	{ 0.318846f, 1.055032f, 0 },
	{ -0.318368f, 1.055032f, 0 },
	{ -0.832378f, 0.729986f, 0 },
	{ 2.341562f, -2.142613f, -1.05214f },
	{ 0.318846f, 0.732789f, -0.7447219f },
	{ -0.318368f, 0.732789f, -0.7447219f },
	{ -0.832378f, 0.502947f, -0.550935f },
	{ 0.7585109f, 0.01136f, -0.900839f },
	{ 0.28986f, -0.045173f, -0.9001679f },
	{ -0.289425f, -0.045173f, -0.9001679f },
	{ -0.878276f, -0.045173f, -0.634221f },
	{ 0.7585109f, -0.7711239f, -0.393388f },
	{ 0.28986f, -0.948787f, -0.636515f },
	{ -0.2750372f, -0.9165808f, -0.636515f },
	{ -0.7917652f, -0.6687256f, -0.4889416f },
	{ 0.7585109f, -0.936041f, 0 },
	{ 0.28986f, -1.27103f, 0 },
	{ -0.2750372f, -1.238823f, 0 },
	{ -0.756707f, -0.8957646f, 0 },
	{ 0.7585109f, -0.7711239f, 0.393388f },
	{ 0.28986f, -0.948787f, 0.636515f },
	{ -0.2750372f, -0.9165808f, 0.636515f },
	{ -0.7917652f, -0.6687256f, 0.4889416f },
	{ 0.7585109f, 0.01136f, 0.900839f },
	{ 0.28986f, -0.045173f, 0.9001679f },
	{ -0.289425f, -0.045173f, 0.9001679f },
	{ -0.878276f, -0.045173f, 0.634221f },
	{ 2.341562f, -2.142613f, 1.05214f },
	{ 0.318846f, 0.732789f, 0.7447219f },
	{ -0.318368f, 0.732789f, 0.7447219f },
	{ -0.832378f, 0.502947f, 0.550935f },
	{ 0.878629f, 0.661817f, 0.372361f },
	{ 1.578506f, -0.709506f, 1.162076f },
	{ 1.542322f, -1.199894f, 0.842096f },
	{ 1.950397f, -0.258626f, 0.952002f },
	{ 1.746833f, -0.786133f, 0.51694f },
	{ 1.746833f, -0.786133f, -0.51694f },
	{ 1.542322f, -1.199894f, -0.842096f },
	{ 1.950397f, -0.258626f, -0.952002f },
	{ 1.578506f, -0.709506f, -1.162076f },
	{ -0.5552305f, -0.9459381f, 0.4185098f },
	{ -0.5552304f, -0.9459381f, -0.4185098f },
	{ -0.6788759f, -1.133386f, 0.1189613f },
	{ -0.6788759f, -1.133386f, -0.1189624f },
	{ -0.4650162f, -1.189224f, 0.1189613f },
	{ -0.4650162f, -1.189224f, -0.1189624f },
	{ -0.613338f, -0.9103266f, 0.1256531f },
	{ -0.6150749f, -0.9162551f, -0.1254763f },
	{ -0.4260037f, -1.052955f, -0.1247545f },
	{ -0.4226207f, -1.040892f, 0.1252634f },
	{ -0.7089704f, -1.130276f, -0.000005471852f },
	{ -0.4333002f, -1.196666f, -0.000005471852f },
	{ -0.6683898f, -0.9349937f, -0.000005475554f },
	{ -0.4065704f, -1.114179f, -0.00000547479f },
	{ -0.5729939f, -1.160813f, -0.151353f },
	{ -0.5729938f, -1.160813f, 0.1513519f },
	{ -0.5129621f, -0.9525379f, -0.1697696f },
	{ -0.5143936f, -0.957579f, 0.1693242f },
	{ -0.714015f, -1.268305f, 0.1337403f },
	{ -0.714015f, -1.268305f, -0.1337413f },
	{ -0.4589653f, -1.303929f, -0.1337413f },
	{ -0.4589653f, -1.303929f, 0.1337403f },
	{ -0.4309642f, -1.317832f, -0.000005479183f },
	{ -0.7406323f, -1.264986f, -0.000005479183f },
	{ -0.5879847f, -1.29435f, 0.1612595f },
	{ -0.5879847f, -1.29435f, -0.1612606f },
	{ -0.7263211f, -1.387275f, -0.000005478305f },
	{ -0.7001883f, -1.378577f, 0.1025348f },
	{ -0.5983518f, -1.401214f, -0.1277083f },
	{ -0.7001883f, -1.378577f, -0.1025359f },
	{ -0.4673292f, -1.407365f, -0.000005478305f },
	{ -0.4938109f, -1.385908f, -0.1025526f },
	{ -0.5983518f, -1.401214f, 0.1277072f },
	{ -0.4938109f, -1.385908f, 0.1025515f },
	{ -0.5996734f, -1.445456f, -0.000005483766f },
	{ -0.458852f, -1.508709f, 0.1892006f },
	{ -0.4396265f, -0.9992997f, 0.1713546f },
	{ -0.458852f, -1.508709f, -0.1892013f },
	{ -0.4396266f, -0.9992997f, -0.1713553f },
	{ -0.4984145f, -1.316913f, 0.2286682f },
	{ -0.4984145f, -1.316913f, -0.2286688f },
	{ -0.5039533f, -1.549799f, -0.000003184068f },
	{ -0.47071f, -0.993443f, -0.000003184068f },
	{ -0.5946511f, -1.310898f, -0.000003184068f },
	{ -0.2641313f, -1.558356f, -0.2332705f },
	{ -0.2623183f, -1.322699f, 0.3232347f },
	{ -0.1048118f, -1.505199f, 0.172001f },
	{ -0.1183007f, -1.138118f, 0.1557773f },
	{ -0.1048118f, -1.505199f, -0.1720008f },
	{ -0.1183007f, -1.138118f, -0.1557771f },
	{ -0.06450195f, -1.337291f, -0.2078803f },
	{ -0.06450196f, -1.337291f, 0.2078806f },
	{ -0.06251098f, -1.546893f, 0.0000001192568f },
	{ 0.0007013306f, -1.222569f, 0.0000001192568f },
	{ 0.02861686f, -1.343846f, 0.0000001192568f },
	{ -0.2608218f, -1.048898f, -0.2019949f },
	{ -0.2641312f, -1.558356f, 0.2332698f },
	{ -0.2608218f, -1.048898f, 0.2019943f },
	{ -0.2623183f, -1.322699f, -0.3232354f },
	{ -0.264829f, -1.656787f, -0.000003184068f }
};

NJS_VECTOR nudiesupersonic_nrm[] = {
	{ 0.9931329f, 0.1169913f, 0.0000000235202f },
	{ -0.9995866f, -0.02874942f, 0.00000001885964f },
	{ 0.6819128f, 0.6698909f, -0.2936683f },
	{ 0.2241661f, 0.9745509f, -0.00000005581055f },
	{ -0.2571723f, 0.9663655f, -0.000003899208f },
	{ -0.7468354f, 0.665009f, -0.0000003317837f },
	{ 0.43189f, -0.8924361f, -0.130495f },
	{ 0.2582494f, 0.5825081f, -0.7707087f },
	{ -0.2448735f, 0.6159239f, -0.7487822f },
	{ -0.7178653f, 0.4289944f, -0.5483005f },
	{ -0.1010238f, 0.2007798f, -0.9744135f },
	{ 0.1165858f, -0.04270281f, -0.9922621f },
	{ -0.2035053f, -0.04780712f, -0.9779061f },
	{ -0.7303545f, -0.04608824f, -0.6815117f },
	{ 0.4459587f, -0.8355674f, -0.3208554f },
	{ 0.2539134f, -0.6251578f, -0.7380418f },
	{ -0.2009226f, -0.6118663f, -0.7650162f },
	{ -0.719387f, -0.4399637f, -0.5375074f },
	{ 0.7890836f, -0.6142858f, 0.00000001693913f },
	{ 0.2554817f, -0.9668139f, 0.0000001832598f },
	{ -0.2796478f, -0.9601026f, 0.00001022313f },
	{ -0.7746453f, -0.6323962f, -0.0001156703f },
	{ 0.4459587f, -0.8355674f, 0.3208554f },
	{ 0.253907f, -0.6251363f, 0.7380623f },
	{ -0.2009524f, -0.6118495f, 0.7650218f },
	{ -0.7193863f, -0.4399715f, 0.5375023f },
	{ -0.1010238f, 0.2007798f, 0.9744135f },
	{ 0.1165282f, -0.04271617f, 0.9922683f },
	{ -0.2035383f, -0.04778336f, 0.9779004f },
	{ -0.7303641f, -0.0460948f, 0.6815009f },
	{ 0.4318895f, -0.8924363f, 0.1304948f },
	{ 0.2582494f, 0.582508f, 0.7707086f },
	{ -0.2448802f, 0.6159373f, 0.7487689f },
	{ -0.7179988f, 0.4289933f, 0.5481265f },
	{ 0.6819128f, 0.6698909f, 0.2936683f },
	{ -0.1729338f, -0.05714306f, 0.9832744f },
	{ -0.6630458f, -0.7474337f, -0.04139025f },
	{ 0.7860495f, 0.5528512f, 0.2765536f },
	{ 0.489948f, -0.1540505f, -0.8580323f },
	{ 0.489948f, -0.1540505f, 0.8580322f },
	{ -0.6630459f, -0.7474337f, 0.04139026f },
	{ 0.7860495f, 0.5528511f, -0.2765536f },
	{ -0.1729337f, -0.05714308f, -0.9832744f },
	{ -0.4923242f, -0.7539374f, 0.4349658f },
	{ -0.4923278f, -0.7539359f, -0.4349645f },
	{ -0.7060454f, 0.1885811f, 0.6825958f },
	{ -0.7062503f, 0.188343f, -0.6824497f },
	{ 0.696018f, -0.07835737f, 0.713736f },
	{ 0.6957517f, -0.07879809f, -0.7139472f },
	{ -0.6622493f, -0.7329682f, 0.1555109f },
	{ -0.6616465f, -0.7350281f, -0.1481812f },
	{ -0.4568359f, -0.8776245f, -0.1451771f },
	{ -0.4601565f, -0.8746386f, 0.1525236f },
	{ -0.969119f, 0.2465939f, 0.0001722621f },
	{ 0.9927008f, -0.1206035f, 0.0001339796f },
	{ -0.7116777f, -0.702475f, 0.006621674f },
	{ -0.4448859f, -0.8955454f, 0.008669496f },
	{ -0.01781287f, 0.03073816f, -0.9993688f },
	{ -0.01735367f, 0.03112524f, 0.999365f },
	{ -0.558224f, -0.8048552f, -0.2014802f },
	{ -0.5570596f, -0.8046507f, 0.2054795f },
	{ -0.7157277f, 0.0004097221f, 0.6983795f },
	{ -0.715686f, 0.0003833489f, -0.6984221f },
	{ 0.6912193f, -0.1670843f, -0.7030639f },
	{ 0.6912556f, -0.1670629f, 0.7030331f },
	{ 0.9793774f, -0.2020389f, 0.000009353273f },
	{ -0.9985439f, 0.05394819f, -0.00006986316f },
	{ -0.007465787f, -0.1176403f, 0.9930283f },
	{ -0.00744688f, -0.1176808f, -0.9930235f },
	{ -0.7976952f, -0.6030609f, -0.00005260808f },
	{ -0.6335371f, -0.5492159f, 0.5449703f },
	{ -0.05386211f, -0.7125134f, -0.6995881f },
	{ -0.6335209f, -0.5492329f, -0.5449719f },
	{ 0.6510456f, -0.7590388f, 0.000003792928f },
	{ 0.5077303f, -0.6546183f, -0.5600757f },
	{ -0.05384011f, -0.7124895f, 0.6996142f },
	{ 0.5077149f, -0.6546333f, 0.5600721f },
	{ -0.05558656f, -0.998454f, 0.000007152558f },
	{ -0.5890905f, -0.5569419f, 0.5854811f },
	{ -0.4842737f, -0.8513133f, 0.2018529f },
	{ -0.5890747f, -0.5569502f, -0.5854892f },
	{ -0.4785475f, -0.8545576f, -0.2018014f },
	{ -0.6965334f, -0.001550985f, 0.7175226f },
	{ -0.6965351f, -0.001552872f, -0.7175211f },
	{ -0.7275174f, -0.6860892f, 0.00001458245f },
	{ -0.5513772f, -0.8337173f, 0.02997963f },
	{ -0.9999982f, -0.001921866f, 0.00003686035f },
	{ 0.05205786f, -0.6951935f, -0.7169351f },
	{ 0.0985637f, 0.01447126f, 0.9950256f },
	{ 0.6304065f, -0.5442316f, 0.5535338f },
	{ -0.1314705f, -0.9661822f, 0.2218276f },
	{ 0.6304039f, -0.5442358f, -0.5535326f },
	{ -0.131514f, -0.9661856f, -0.2217871f },
	{ 0.7382104f, -0.01009331f, -0.6744952f },
	{ 0.7382183f, -0.01005752f, 0.674487f },
	{ 0.7400619f, -0.6725389f, -0.0000535883f },
	{ -0.01986259f, -0.9996766f, 0.01587576f },
	{ 0.9995843f, -0.02883357f, -0.00009745359f },
	{ -0.2649264f, -0.9119393f, -0.3133382f },
	{ 0.05201715f, -0.6951958f, 0.7169358f },
	{ -0.2649685f, -0.9119288f, 0.3133334f },
	{ 0.09856559f, 0.01447112f, -0.9950253f },
	{ 0.04355452f, -0.999051f, -0.0002246071f }
};

