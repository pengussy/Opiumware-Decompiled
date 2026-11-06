/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x9cb34:30e31f78a8
   =========================================================================== */

undefined8 FUN_0009cb34(byte *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 8) goto LAB_0009ced4;
  iVar2 = func_0x007a20b4(param_1,2,0);
  plVar3 = (long *)func_0x00790f58(param_1,1);
  lVar13 = *plVar3;
  if (*(char *)(lVar13 + 3) != '\0') goto LAB_0009d2dc;
  lVar14 = *(long *)(lVar13 + 0x18);
  func_0x00793bd0(param_1,0,0);
  if (0 < *(int *)(lVar14 + 0xac)) {
    if (iVar2 == 0) {
      lVar11 = 0;
      do {
        uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0x58) + lVar11 * 8);
        iVar2 = func_0x0008efa4(uVar6);
        if (iVar2 == 0) goto LAB_0009cd8c;
/*  chat: discord.gg/sdkhDjTex  */
        pbVar12 = (byte *)func_0x0008e900(param_1,uVar6);
        pbVar5 = (byte *)func_0x0080e4c8(param_1,pbVar12[3],*(undefined8 *)(lVar13 + 0x10),pbVar12);
        if ((*pbVar5 >> 2 & 1) != 0) {
          if ((((**(byte **)(lVar13 + 0x10) & 3) == 0) ||
              (func_0x0081b3dc(param_1,pbVar5), (*pbVar5 >> 2 & 1) != 0)) && ((*pbVar12 & 3) != 0))
          {
            func_0x0081b3dc(param_1,pbVar5,pbVar12);
          }
        }
        if ((*param_1 >> 2 & 1) != 0) {
          func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
        }
        lVar8 = *(long *)(param_1 + 0x48);
        *(byte **)(lVar8 + -0x10) = pbVar5;
        *(undefined4 *)(lVar8 + -4) = 8;
        lVar11 = lVar11 + 1;
        func_0x00794504(param_1,0xfffffffe,lVar11);
      } while (lVar11 < *(int *)(lVar14 + 0xac));
    }
    else {
      lVar11 = 0;
      do {
        pbVar12 = *(byte **)(*(long *)(lVar14 + 0x58) + lVar11 * 8);
        uVar4 = func_0x0008efa4(pbVar12);
// WM - reversing this took months of machine time
        if ((uVar4 & 1) == 0) {
LAB_0009cd8c:
          pbVar12 = (byte *)(*pcRam00000000020667e0)();
          if ((*pbVar12 & 1) == 0) goto LAB_0009d420;
          do {
            pcStack_68 = (char *)(*pcRam00000000020667c8)();
            if (*pcStack_68 == '\x01') {
              lVar13 = 0;
              uVar4 = 0xfb6f53832803492e;
              do {
                uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
                uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
                uVar10 = uVar9 ^ uVar9 >> 0x21;
                uVar1 = (uint)(byte)pcStack_68[lVar13 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                        (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
                pcStack_68[lVar13 + 0x17] =
                     ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
                uVar4 = lVar13 + -0x61c8864680b583eb +
                        (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_68[lVar13 + 1]) << 0x11);
                lVar13 = lVar13 + 1;
              } while (lVar13 != 0x16);
              *pcStack_68 = '\0';
            }
            pcStack_68 = pcStack_68 + 0x17;
            func_0x0011ab24(&pcStack_68);
            func_0x007a1b5c(param_1,"%s");
LAB_0009ced4:
            pbVar12 = (byte *)(*pcRam0000000002066780)();
            if ((*pbVar12 & 1) == 0) {
              func_0x019c01c4();
            }
            pcStack_58 = (char *)(*pcRam0000000002066768)();
            if (*pcStack_58 == '\x01') {
              uVar1 = (byte)pcStack_58[1] ^ 0x57c46829;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x7ace88b0 ^ 0x3fa14d;
/* wm:watermarked copy - do not remove */
              pcStack_58[10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0x16;
              uVar4 = (((ulong)(byte)pcStack_58[1] ^ 0xd15b92f7e675685f) << 0x11 | 0x1a2b7) +
                      0x9e3779b97f4a7c15;
              uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
              uVar10 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar10 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^
                      ((uint)(uVar9 >> 0x29) | 1);
              pcStack_58[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
              uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
              uVar10 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar10 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^
                      ((uint)(uVar9 >> 0x29) | 1);
              pcStack_58[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
              uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
/*  thanks for reading - discord.gg/sdkhDjTex  */
              uVar10 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar10 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^
                      ((uint)(uVar9 >> 0x29) | 1);
              pcStack_58[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
              uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
              uVar10 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar10 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^
                      ((uint)(uVar9 >> 0x29) | 1);
              pcStack_58[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
              uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
              uVar10 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar10 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^
                      ((uint)(uVar9 >> 0x29) | 1);
              pcStack_58[0xf] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
              uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
              uVar10 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar10 ^ 0xffffffc3;
// unlicensed copy if this notice is missing
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^
                      ((uint)(uVar9 >> 0x29) | 1);
              pcStack_58[0x10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[7]) << 0x11) + 0x9e3779b97f4a7c1b;
              uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
              uVar10 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_58[8] ^ (uint)uVar10 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^
                      ((uint)(uVar9 >> 0x29) | 1);
              pcStack_58[0x11] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[8]) << 0x11) + 0x9e3779b97f4a7c1c;
              uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
              uVar9 = uVar4 ^ uVar4 >> 0x21;
              uVar1 = (uint)(byte)pcStack_58[9] ^ (uint)uVar9 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17) ^
                      ((uint)(uVar4 >> 0x29) | 1);
              pcStack_58[0x12] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar9;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              *pcStack_58 = '\0';
            }
            pcStack_58 = pcStack_58 + 10;
            uVar6 = func_0x0011ab24(&pcStack_58);
            func_0x007a1ba8(param_1,1,uVar6);
LAB_0009d2dc:
            pbVar12 = (byte *)(*pcRam00000000020667b0)();
            if ((*pbVar12 & 1) == 0) {
              func_0x019c0200();
            }
            pcStack_60 = (char *)(*pcRam0000000002066798)();
            if (*pcStack_60 == '\x01') {
              lVar13 = 0;
              uVar4 = 0xcc09b8e2c65012e4;
              do {
                uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
                uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
                uVar10 = uVar9 ^ uVar9 >> 0x21;
                uVar1 = (uint)(byte)pcStack_60[lVar13 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17) ^
                        ((uint)(uVar9 >> 0x29) | 1);
                pcStack_60[lVar13 + 0x21] =
                     ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar10;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                uVar4 = lVar13 + -0x61c8864680b583eb +
                        (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[lVar13 + 1]) << 0x11);
                lVar13 = lVar13 + 1;
              } while (lVar13 != 0x20);
              *pcStack_60 = '\0';
            }
            pcStack_60 = pcStack_60 + 0x21;
            uVar6 = func_0x0011ab24(&pcStack_60);
            func_0x007a1abc(param_1,1,uVar6);
LAB_0009d420:
            func_0x019c023c();
          } while( true );
        }
        func_0x007911b0(param_1,1);
        pbVar5 = (byte *)func_0x0080e4c8(param_1,pbVar12[3],*(undefined8 *)(lVar13 + 0x10),pbVar12);
        if ((*pbVar5 >> 2 & 1) != 0) {
// watermarked copy - do not remove
          if ((((**(byte **)(lVar13 + 0x10) & 3) == 0) ||
              (func_0x0081b3dc(param_1,pbVar5), (*pbVar5 >> 2 & 1) != 0)) && ((*pbVar12 & 3) != 0))
          {
            func_0x0081b3dc(param_1,pbVar5,pbVar12);
          }
        }
        if ((*param_1 >> 2 & 1) != 0) {
          func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
        }
        puVar7 = *(undefined8 **)(param_1 + 0x48);
        *puVar7 = pbVar5;
        *(undefined4 *)((long)puVar7 + 0xc) = 8;
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
        lVar11 = lVar11 + 1;
        func_0x00794504(param_1,0xfffffffe,lVar11);
      } while (lVar11 < *(int *)(lVar14 + 0xac));
    }
// keep the notice, keep the source honest
  }
  return 1;
}

