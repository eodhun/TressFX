#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 6.3.9600.16384
//
//
// Buffer Definitions: 
//
// cbuffer CB_UNIT_CUBE_TRANSFORM
// {
//
//   struct UnitCubeTransform
//   {
//       
//       float4x4 m_tr;                 // Offset:    0
//       float4x4 m_inverse;            // Offset:   64
//       float4x4 m_forward;            // Offset:  128
//       float4 m_color;                // Offset:  192
//
//   } g_UnitCubeTransform;             // Offset:    0 Size:   208
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// CB_UNIT_CUBE_TRANSFORM            cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_VERTEXID              0   x           0   VERTID    uint   x   
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float   xyzw
//
vs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer cb0[4], immediateIndexed
dcl_input_sgv v0.x, vertex_id
dcl_output_siv o0.xyzw, position
dcl_temps 1
dcl_indexableTemp x0[8], 4
dcl_indexableTemp x1[36], 4
mov x0[0].xyz, l(-1.000000,-1.000000,1.000000,0)
mov x0[1].xyz, l(-1.000000,-1.000000,-0.000000,0)
mov x0[2].xyz, l(1.000000,-1.000000,-0.000000,0)
mov x0[3].xyz, l(1.000000,-1.000000,1.000000,0)
mov x0[4].xyz, l(-1.000000,1.000000,1.000000,0)
mov x0[5].xyz, l(1.000000,1.000000,1.000000,0)
mov x0[6].xyz, l(1.000000,1.000000,-0.000000,0)
mov x0[7].xyz, l(-1.000000,1.000000,-0.000000,0)
mov x1[0].x, l(1)
mov x1[1].x, l(2)
mov x1[2].x, l(3)
mov x1[3].x, l(3)
mov x1[4].x, l(4)
mov x1[5].x, l(1)
mov x1[6].x, l(5)
mov x1[7].x, l(6)
mov x1[8].x, l(7)
mov x1[9].x, l(7)
mov x1[10].x, l(8)
mov x1[11].x, l(5)
mov x1[12].x, l(1)
mov x1[13].x, l(4)
mov x1[14].x, l(6)
mov x1[15].x, l(6)
mov x1[16].x, l(5)
mov x1[17].x, l(1)
mov x1[18].x, l(4)
mov x1[19].x, l(3)
mov x1[20].x, l(7)
mov x1[21].x, l(7)
mov x1[22].x, l(6)
mov x1[23].x, l(4)
mov x1[24].x, l(3)
mov x1[25].x, l(2)
mov x1[26].x, l(8)
mov x1[27].x, l(8)
mov x1[28].x, l(7)
mov x1[29].x, l(3)
mov x1[30].x, l(2)
mov x1[31].x, l(1)
mov x1[32].x, l(5)
mov x1[33].x, l(5)
mov x1[34].x, l(8)
mov x1[35].x, l(2)
mov r0.x, v0.x
mov r0.x, x1[r0.x + 0].x
iadd r0.x, r0.x, l(-1)
mov r0.xyz, x0[r0.x + 0].xyzx
mov r0.w, l(1.000000)
dp4 o0.x, r0.xyzw, cb0[0].xyzw
dp4 o0.y, r0.xyzw, cb0[1].xyzw
dp4 o0.z, r0.xyzw, cb0[2].xyzw
dp4 o0.w, r0.xyzw, cb0[3].xyzw
ret 
// Approximately 54 instruction slots used
#endif

const BYTE VS_CLIP_SPACE_CUBE_Data[] =
{
     68,  88,  66,  67,  14, 171, 
    101,  88,  64, 235, 155,  83, 
    156, 112,  95, 215, 154,  25, 
    141,  72,   1,   0,   0,   0, 
      8,   9,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
     24,   2,   0,   0,  76,   2, 
      0,   0, 128,   2,   0,   0, 
    108,   8,   0,   0,  82,  68, 
     69,  70, 220,   1,   0,   0, 
      1,   0,   0,   0, 116,   0, 
      0,   0,   1,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
    254, 255,   0,   1,   0,   0, 
    168,   1,   0,   0,  82,  68, 
     49,  49,  60,   0,   0,   0, 
     24,   0,   0,   0,  32,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
     92,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  67,  66,  95,  85, 
     78,  73,  84,  95,  67,  85, 
     66,  69,  95,  84,  82,  65, 
     78,  83,  70,  79,  82,  77, 
      0, 171,  92,   0,   0,   0, 
      1,   0,   0,   0, 140,   0, 
      0,   0, 208,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 180,   0,   0,   0, 
      0,   0,   0,   0, 208,   0, 
      0,   0,   2,   0,   0,   0, 
    132,   1,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    103,  95,  85, 110, 105, 116, 
     67, 117,  98, 101,  84, 114, 
     97, 110, 115, 102, 111, 114, 
    109,   0,  85, 110, 105, 116, 
     67, 117,  98, 101,  84, 114, 
     97, 110, 115, 102, 111, 114, 
    109,   0, 109,  95, 116, 114, 
      0, 102, 108, 111,  97, 116, 
     52, 120,  52,   0,   3,   0, 
      3,   0,   4,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    223,   0,   0,   0, 109,  95, 
    105, 110, 118, 101, 114, 115, 
    101,   0, 109,  95, 102, 111, 
    114, 119,  97, 114, 100,   0, 
    109,  95,  99, 111, 108, 111, 
    114,   0, 102, 108, 111,  97, 
    116,  52,   0, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     40,   1,   0,   0, 218,   0, 
      0,   0, 232,   0,   0,   0, 
      0,   0,   0,   0,  12,   1, 
      0,   0, 232,   0,   0,   0, 
     64,   0,   0,   0,  22,   1, 
      0,   0, 232,   0,   0,   0, 
    128,   0,   0,   0,  32,   1, 
      0,   0,  48,   1,   0,   0, 
    192,   0,   0,   0,   5,   0, 
      0,   0,   1,   0,  52,   0, 
      0,   0,   4,   0,  84,   1, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    200,   0,   0,   0,  77, 105, 
     99, 114, 111, 115, 111, 102, 
    116,  32,  40,  82,  41,  32, 
     72,  76,  83,  76,  32,  83, 
    104,  97, 100, 101, 114,  32, 
     67, 111, 109, 112, 105, 108, 
    101, 114,  32,  54,  46,  51, 
     46,  57,  54,  48,  48,  46, 
     49,  54,  51,  56,  52,   0, 
    171, 171,  73,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   6,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   1,   1,   0,   0, 
     83,  86,  95,  86,  69,  82, 
     84,  69,  88,  73,  68,   0, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  80, 111, 115, 105, 116, 
    105, 111, 110,   0,  83,  72, 
     69,  88, 228,   5,   0,   0, 
     80,   0,   1,   0, 121,   1, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,  96,   0, 
      0,   4,  18,  16,  16,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0, 103,   0,   0,   4, 
    242,  32,  16,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
    104,   0,   0,   2,   1,   0, 
      0,   0, 105,   0,   0,   4, 
      0,   0,   0,   0,   8,   0, 
      0,   0,   4,   0,   0,   0, 
    105,   0,   0,   4,   1,   0, 
      0,   0,  36,   0,   0,   0, 
      4,   0,   0,   0,  54,   0, 
      0,   9, 114,  48,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128, 191,   0,   0, 
    128, 191,   0,   0, 128,  63, 
      0,   0,   0,   0,  54,   0, 
      0,   9, 114,  48,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128, 191,   0,   0, 
    128, 191,   0,   0,   0, 128, 
      0,   0,   0,   0,  54,   0, 
      0,   9, 114,  48,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128, 191,   0,   0,   0, 128, 
      0,   0,   0,   0,  54,   0, 
      0,   9, 114,  48,  32,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128, 191,   0,   0, 128,  63, 
      0,   0,   0,   0,  54,   0, 
      0,   9, 114,  48,  32,   0, 
      0,   0,   0,   0,   4,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128, 191,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0,   0,   0,  54,   0, 
      0,   9, 114,  48,  32,   0, 
      0,   0,   0,   0,   5,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0,   0,   0,  54,   0, 
      0,   9, 114,  48,  32,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128,  63,   0,   0,   0, 128, 
      0,   0,   0,   0,  54,   0, 
      0,   9, 114,  48,  32,   0, 
      0,   0,   0,   0,   7,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128, 191,   0,   0, 
    128,  63,   0,   0,   0, 128, 
      0,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,   2,   0, 
      0,   0,   1,  64,   0,   0, 
      3,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   1,  64,   0,   0, 
      3,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,   4,   0, 
      0,   0,   1,  64,   0,   0, 
      4,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,   5,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,   6,   0, 
      0,   0,   1,  64,   0,   0, 
      5,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,   7,   0, 
      0,   0,   1,  64,   0,   0, 
      6,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,   8,   0, 
      0,   0,   1,  64,   0,   0, 
      7,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,   9,   0, 
      0,   0,   1,  64,   0,   0, 
      7,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  10,   0, 
      0,   0,   1,  64,   0,   0, 
      8,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  11,   0, 
      0,   0,   1,  64,   0,   0, 
      5,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  12,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  13,   0, 
      0,   0,   1,  64,   0,   0, 
      4,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  14,   0, 
      0,   0,   1,  64,   0,   0, 
      6,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  15,   0, 
      0,   0,   1,  64,   0,   0, 
      6,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  16,   0, 
      0,   0,   1,  64,   0,   0, 
      5,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  17,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  18,   0, 
      0,   0,   1,  64,   0,   0, 
      4,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  19,   0, 
      0,   0,   1,  64,   0,   0, 
      3,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  20,   0, 
      0,   0,   1,  64,   0,   0, 
      7,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  21,   0, 
      0,   0,   1,  64,   0,   0, 
      7,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  22,   0, 
      0,   0,   1,  64,   0,   0, 
      6,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  23,   0, 
      0,   0,   1,  64,   0,   0, 
      4,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  24,   0, 
      0,   0,   1,  64,   0,   0, 
      3,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  25,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  26,   0, 
      0,   0,   1,  64,   0,   0, 
      8,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  27,   0, 
      0,   0,   1,  64,   0,   0, 
      8,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  28,   0, 
      0,   0,   1,  64,   0,   0, 
      7,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  29,   0, 
      0,   0,   1,  64,   0,   0, 
      3,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  30,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  31,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  32,   0, 
      0,   0,   1,  64,   0,   0, 
      5,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  33,   0, 
      0,   0,   1,  64,   0,   0, 
      5,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  34,   0, 
      0,   0,   1,  64,   0,   0, 
      8,   0,   0,   0,  54,   0, 
      0,   6,  18,  48,  32,   0, 
      1,   0,   0,   0,  35,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0,  54,   0, 
      0,   5,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,  16, 
     16,   0,   0,   0,   0,   0, 
     54,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,  48,  32,   4,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  30,   0, 
      0,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0, 255, 255, 
    255, 255,  54,   0,   0,   7, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,  50,  32,   4, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     54,   0,   0,   5, 130,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128,  63,  17,   0,   0,   8, 
     18,  32,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  17,   0, 
      0,   8,  34,  32,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     17,   0,   0,   8,  66,  32, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,  17,   0,   0,   8, 
    130,  32,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,  62,   0, 
      0,   1,  83,  84,  65,  84, 
    148,   0,   0,   0,  54,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   4,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  44,   0,   0,   0, 
     46,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0
};