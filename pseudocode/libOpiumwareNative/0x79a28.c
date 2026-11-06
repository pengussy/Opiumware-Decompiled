/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x79a28:931bf83fbb
   =========================================================================== */

undefined8 FUN_00079a28(byte *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  long lStack_48;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 8) goto LAB_00079dd8;
  iVar2 = func_0x00791db8(param_1,2);
  if (iVar2 == 0) goto LAB_0007a1e0;
  plVar3 = (long *)func_0x00790f58(param_1,1);
  lVar9 = *plVar3;
  uVar4 = func_0x00792168(param_1,2,0);
  lStack_48 = lVar9;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  func_0x001393dc(0x20970c0,&lStack_48);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (*(char *)(lStack_48 + 3) != '\0') goto LAB_0007a530;
  pbVar10 = *(byte **)(lVar9 + 0x18);
  uVar5 = func_0x00078f98(pbVar10);
  if ((uVar5 & 1) == 0) goto LAB_0007a674;
  if (((int)uVar4 < 1) || (*(int *)(pbVar10 + 0xac) < (int)uVar4)) {
    pbVar10 = (byte *)(*pcRam0000000002064350)();
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    if ((*pbVar10 & 1) == 0) goto LAB_0007a8fc;
    goto LAB_00079cac;
  }
  iVar2 = func_0x000793a0(param_1,0);
  if (iVar2 != 0) {
    uVar6 = func_0x00791624(param_1,0xffffffff);
    func_0x007911b0(param_1,1);
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    *puVar7 = pbVar10;
    *(undefined4 *)((long)puVar7 + 0xc) = 0xf;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
    func_0x00793880(param_1,uVar6);
    iVar2 = func_0x00791be4(param_1,0xffffffff);
    if (iVar2 == 7) {
      func_0x00793928(param_1,0xffffffff,uVar4);
      puVar7 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
      if (*(int *)((long)puVar7 + 0xc) == 0xf) {
        pbVar11 = (byte *)*puVar7;
        uVar5 = func_0x00078f98(pbVar11);
        if ((uVar5 & 1) == 0) {
          do {
            pbVar10 = (byte *)(*pcRam0000000002064380)();
            if ((*pbVar10 & 1) == 0) {
              func_0x019bd758();
// WM - origin: github.com/pengussy
            }
            pcStack_68 = (char *)(*pcRam0000000002064368)();
            if (*pcStack_68 == '\x01') {
              lVar9 = 0;
              uVar4 = 0x5cd2bf5e9cd62b8e;
              do {
                uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
                uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
                uVar8 = uVar5 ^ uVar5 >> 0x21;
                uVar1 = (uint)(byte)pcStack_68[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                        (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
                pcStack_68[lVar9 + 0x21] =
                     ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
                uVar4 = lVar9 + -0x61c8864680b583eb +
                        (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_68[lVar9 + 1]) << 0x11);
                lVar9 = lVar9 + 1;
              } while (lVar9 != 0x20);
              *pcStack_68 = '\0';
            }
            pcStack_68 = pcStack_68 + 0x21;
            uVar6 = func_0x0011ab24(&pcStack_68);
            func_0x007a1abc(param_1,1,uVar6);
LAB_0007a8fc:
// chat: discord.gg/sdkhDjTex
            func_0x019bd794();
LAB_00079cac:
            pcStack_70 = (char *)(*pcRam0000000002064338)();
            if (*pcStack_70 == '\x01') {
              lVar9 = 0;
              uVar4 = 0x7c35406728407b85;
              do {
                uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
                uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
                uVar8 = uVar5 ^ uVar5 >> 0x21;
                uVar1 = (uint)(byte)pcStack_70[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                        (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
                pcStack_70[lVar9 + 0x21] =
                     ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
                uVar4 = lVar9 + -0x61c8864680b583eb +
                        (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_70[lVar9 + 1]) << 0x11);
                lVar9 = lVar9 + 1;
// WM - chat: discord.gg/sdkhDjTex
              } while (lVar9 != 0x20);
              *pcStack_70 = '\0';
            }
            pcStack_70 = pcStack_70 + 0x21;
            uVar6 = func_0x0011ab24(&pcStack_70);
            func_0x007a1abc(param_1,2,uVar6);
LAB_00079dd8:
            pbVar10 = (byte *)(*pcRam0000000002064290)();
            if ((*pbVar10 & 1) == 0) {
              func_0x019bd6a4();
            }
            pcStack_50 = (char *)(*pcRam0000000002064278)();
            if (*pcStack_50 == '\x01') {
              uVar1 = (byte)pcStack_50[1] ^ 0xdb6716d7;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x59a02bb7;
              pcStack_50[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0x69 ^ 0x14;
              uVar4 = (((ulong)(byte)pcStack_50[1] ^ 0x232d3ba3bb0c2724) << 0x11 | 0x465a) +
                      0x9e3779b97f4a7c15;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
              pcStack_50[0xb] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
              pcStack_50[0xc] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^
/* donate: donate/README.md */
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
              pcStack_50[0xd] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
// WM - thanks for reading - discord.gg/sdkhDjTex
              pcStack_50[0xe] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
              pcStack_50[0xf] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
              pcStack_50[0x10] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^
                   (byte)uVar8;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[7]) << 0x11) + 0x9e3779b97f4a7c1b;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_50[8] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
              pcStack_50[0x11] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^
                   (byte)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[8]) << 0x11) + 0x9e3779b97f4a7c1c;
              uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
              uVar5 = uVar4 ^ uVar4 >> 0x21;
              uVar1 = (uint)(byte)pcStack_50[9] ^ (uint)uVar5 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar5 >> 0x17);
              pcStack_50[0x12] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar4 >> 0x29) | 1) ^
                   (byte)uVar5;
              *pcStack_50 = '\0';
            }
            pcStack_50 = pcStack_50 + 10;
            uVar6 = func_0x0011ab24(&pcStack_50);
            func_0x007a1ba8(param_1,1,uVar6);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
LAB_0007a1e0:
            pbVar10 = (byte *)(*pcRam00000000020642c0)();
            if ((*pbVar10 & 1) == 0) {
              func_0x019bd7d0();
            }
            pcStack_78 = (char *)(*pcRam00000000020642a8)();
            if (*pcStack_78 == '\x01') {
              uVar1 = (byte)pcStack_78[1] ^ 0xb43c7cc9;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x18dec569 ^ 0x5179c9;
              pcStack_78[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - 10;
              uVar4 = (((ulong)(byte)pcStack_78[1] ^ 0x71a01e32832673d2) << 0x11 | 0xe340) +
                      0x9e3779b97f4a7c15;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^
                      ((uint)(uVar5 >> 0x29) | 1);
              pcStack_78[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^
                      ((uint)(uVar5 >> 0x29) | 1);
              pcStack_78[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
/* WM - keep the notice, keep the source honest */
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^
                      ((uint)(uVar5 >> 0x29) | 1);
              pcStack_78[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^
                      ((uint)(uVar5 >> 0x29) | 1);
              pcStack_78[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
              uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
              uVar8 = uVar5 ^ uVar5 >> 0x21;
              uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar8 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^
                      ((uint)(uVar5 >> 0x29) | 1);
              pcStack_78[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
              uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
              uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
              uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
              uVar5 = uVar4 ^ uVar4 >> 0x21;
              uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar5 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar5 >> 0x17) ^
                      ((uint)(uVar4 >> 0x29) | 1);
              pcStack_78[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar5;
              *pcStack_78 = '\0';
/*  proprietary - see LICENSE - do not sell  */
            }
            pcStack_78 = pcStack_78 + 8;
            uVar6 = func_0x0011ab24(&pcStack_78);
            func_0x007a1ba8(param_1,2,uVar6);
LAB_0007a530:
            pbVar10 = (byte *)(*pcRam00000000020642f0)();
            if ((*pbVar10 & 1) == 0) {
              func_0x019bd6e0();
            }
            pcStack_58 = (char *)(*pcRam00000000020642d8)();
            if (*pcStack_58 == '\x01') {
              lVar9 = 0;
              uVar4 = 0x92ffc819fae4bc06;
              do {
                uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
                uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
                uVar8 = uVar5 ^ uVar5 >> 0x21;
                uVar1 = (uint)(byte)pcStack_58[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
                pcStack_58[lVar9 + 0x13] =
                     ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1)
                     ^ (byte)uVar8;
                uVar4 = lVar9 + -0x61c8864680b583eb +
                        (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[lVar9 + 1]) << 0x11);
                lVar9 = lVar9 + 1;
              } while (lVar9 != 0x12);
              *pcStack_58 = '\0';
            }
            pcStack_58 = pcStack_58 + 0x13;
            uVar6 = func_0x0011ab24(&pcStack_58);
            func_0x007a1abc(param_1,1,uVar6);
LAB_0007a674:
            pbVar10 = (byte *)(*pcRam0000000002064320)();
            if ((*pbVar10 & 1) == 0) {
              func_0x019bd71c();
            }
            pcStack_60 = (char *)(*pcRam0000000002064308)();
            if (*pcStack_60 == '\x01') {
/* wm:if you paid for this, you were scammed */
              lVar9 = 0;
              uVar4 = 0x55d0cdf49ee73df;
              do {
                uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
                uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
                uVar8 = uVar5 ^ uVar5 >> 0x21;
                uVar1 = (uint)(byte)pcStack_60[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                        (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
                pcStack_60[lVar9 + 0x18] =
                     ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
                uVar4 = lVar9 + -0x61c8864680b583eb +
                        (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[lVar9 + 1]) << 0x11);
                lVar9 = lVar9 + 1;
              } while (lVar9 != 0x17);
              *pcStack_60 = '\0';
            }
            pcStack_60 = pcStack_60 + 0x18;
            uVar6 = func_0x0011ab24(&pcStack_60);
            func_0x007a1abc(param_1,1,uVar6);
          } while( true );
        }
        func_0x000790a8(param_1,pbVar10);
        *(byte **)(*(long *)(pbVar10 + 0x58) + (uVar4 & 0xffffffff) * 8 + -8) = pbVar11;
        if (((*pbVar10 >> 2 & 1) != 0) && ((*pbVar11 & 3) != 0)) {
          func_0x0081b3dc(param_1,pbVar10,pbVar11);
        }
        func_0x00791660(param_1,0xfffffffe);
        func_0x00792a48(param_1);
        func_0x00794504(param_1,0xfffffffe,uVar4);
        func_0x00792a48(param_1);
        iVar2 = func_0x00795158(param_1,0xfffffffe);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
        if (iVar2 == 0) {
          func_0x007911b0(param_1,1);
          if ((*param_1 >> 2 & 1) != 0) {
            func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
          }
          puVar7 = *(undefined8 **)(param_1 + 0x48);
          *puVar7 = pbVar10;
          *(undefined4 *)((long)puVar7 + 0xc) = 0xf;
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
          func_0x00792a48(param_1);
          func_0x00794428(param_1,uVar6);
        }
        else {
          func_0x00791660(param_1,0xfffffffd);
        }
      }
    }
  }
  return 0;
}

