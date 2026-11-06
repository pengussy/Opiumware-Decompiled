/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0xe03fc:bcff88e52d
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x000e0564) */

undefined8 FUN_000e03fc(long param_1)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  uint uVar17;
  int *piVar18;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x27;
  uint uVar19;
  long lStack_140;
  uint uStack_138;
  int iStack_134;
  int iStack_130;
  uint uStack_12c;
  char *pcStack_128;
  char *pcStack_120;
// stripping the watermark breaks the license
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  int aiStack_b8 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  undefined2 uStack_90;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong auStack_70 [2];
  
  puVar7 = (undefined8 *)func_0x007926a8(param_1,1);
  auStack_70[0] = 0;
  lVar8 = func_0x00792368(param_1,2,auStack_70);
  uVar10 = auStack_70[0];
  if (lVar8 == 0) {
    func_0x00792a48(param_1);
    return 1;
  }
  if (0x7ffffffffffffff6 < auStack_70[0]) {
    FUN_0000aa50();
LAB_000e22f0:
    func_0x019c5480();
LAB_000e15dc:
    pcStack_108 = (char *)(*pcRam000000000206a9c8)();
    if (*pcStack_108 == '\x01') {
      uVar10 = (unaff_x25 * -0x2d323643584acf7c ^ (ulong)(unaff_x25 * -0x2d323643584acf7c) >> 0x21)
               * unaff_x24;
      uVar15 = uVar10 ^ uVar10 >> 0x21;
/* WM - found on a paste site? it was re-uploaded illegally */
      bVar2 = pcStack_108[1];
      cVar5 = func_0x0016f680((ulong)bVar2,uVar15);
      pcStack_108[7] = cVar5;
      uVar10 = (uVar10 >> 0x2f | (uVar15 ^ bVar2) << 0x11) + unaff_x23;
      bVar2 = pcStack_108[2];
      cVar5 = func_0x0016f680((ulong)bVar2,uVar10);
      pcStack_108[8] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 1;
      bVar2 = pcStack_108[3];
      cVar5 = func_0x0016f680((ulong)bVar2,uVar10);
      pcStack_108[9] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 2;
      bVar2 = pcStack_108[4];
      cVar5 = func_0x0016f680((ulong)bVar2,uVar10);
      pcStack_108[10] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 3;
      bVar2 = pcStack_108[5];
      cVar5 = func_0x0016f680((ulong)bVar2,uVar10);
      pcStack_108[0xb] = cVar5;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      unaff_x27 = (ulong)uStack_12c;
      cVar5 = func_0x0016f680(pcStack_108[6],
                              unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 4);
      pcStack_108[0xc] = cVar5;
      *pcStack_108 = '\0';
    }
    pcStack_108 = pcStack_108 + 7;
    uVar12 = func_0x0011ab24(&pcStack_108);
    iVar6 = func_0x00016fc0(&pppppppuStack_88,uVar12);
    if (iVar6 != 0) {
LAB_000e172c:
      if (((uStack_138 | unaff_w22) & 1) == 0) {
        if (iStack_134 == 0) {
          if (iStack_130 == 0) {
            func_0x007930d0(param_1,&DAT_0014d85c,0,0,0);
          }
// unlicensed copy if this notice is missing
          else {
            uVar12 = func_0x000de888(param_1,lStack_140);
            func_0x00792bf4(param_1,iStack_130);
            func_0x007933b8(param_1,uVar12,0);
            func_0x007930d0(param_1,&DAT_0014d404,0,2,0);
          }
        }
        else {
          uVar12 = func_0x000de888(param_1,lStack_140);
          pbVar11 = (byte *)(*pcRam000000000206aa10)();
          if ((*pbVar11 & 1) == 0) {
            func_0x019c5570();
          }
          pcStack_128 = (char *)(*pcRam000000000206a9f8)();
          if (*pcStack_128 == '\x01') {
            uVar10 = (unaff_x25 * -0x62db4e492ffe53ed ^
                     (ulong)(unaff_x25 * -0x62db4e492ffe53ed) >> 0x21) * unaff_x24;
            uVar15 = uVar10 ^ uVar10 >> 0x21;
            bVar2 = pcStack_128[1];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar15);
            pcStack_128[0x1e] = cVar5;
            uVar10 = (uVar10 >> 0x2f | (uVar15 ^ bVar2) << 0x11) + unaff_x23;
            bVar2 = pcStack_128[2];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x1f] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 1;
            bVar2 = pcStack_128[3];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x20] = cVar5;
/* no support for modified copies - github.com/pengussy */
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 2;
            bVar2 = pcStack_128[4];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x21] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 3;
            bVar2 = pcStack_128[5];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x22] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 4;
            bVar2 = pcStack_128[6];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x23] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 5;
            bVar2 = pcStack_128[7];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x24] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 6;
            bVar2 = pcStack_128[8];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x25] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 7;
            bVar2 = pcStack_128[9];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x26] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 8;
            bVar2 = pcStack_128[10];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x27] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 9;
            bVar2 = pcStack_128[0xb];
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x28] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 10;
            bVar2 = pcStack_128[0xc];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x29] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0xb;
            bVar2 = pcStack_128[0xd];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x2a] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0xc;
            bVar2 = pcStack_128[0xe];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x2b] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0xd;
            bVar2 = pcStack_128[0xf];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x2c] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0xe;
            bVar2 = pcStack_128[0x10];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x2d] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0xf;
            bVar2 = pcStack_128[0x11];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x2e] = cVar5;
// watermarked copy - do not remove
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x10;
            bVar2 = pcStack_128[0x12];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x2f] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x11;
            bVar2 = pcStack_128[0x13];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x30] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x12;
            bVar2 = pcStack_128[0x14];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x31] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x13;
            bVar2 = pcStack_128[0x15];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x32] = cVar5;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x14;
            bVar2 = pcStack_128[0x16];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x33] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x15;
            bVar2 = pcStack_128[0x17];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x34] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x16;
            bVar2 = pcStack_128[0x18];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x35] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x17;
            bVar2 = pcStack_128[0x19];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x36] = cVar5;
/* WM - if you paid for this, you were scammed */
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x18;
            bVar2 = pcStack_128[0x1a];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x37] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x19;
            bVar2 = pcStack_128[0x1b];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x38] = cVar5;
            uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x1a;
            bVar2 = pcStack_128[0x1c];
            cVar5 = func_0x001695bc((ulong)bVar2,uVar10);
            pcStack_128[0x39] = cVar5;
            unaff_x27 = (ulong)uStack_12c;
            cVar5 = func_0x001695bc(pcStack_128[0x1d],
                                    unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x1b);
            pcStack_128[0x3a] = cVar5;
            *pcStack_128 = '\0';
          }
          pcStack_128 = pcStack_128 + 0x1e;
          uVar13 = func_0x0011ab24(&pcStack_128);
          func_0x007a1ee4(param_1,6,uVar13);
          func_0x00792bf4(param_1,iStack_134);
          func_0x00792bf4(param_1,iStack_130);
          func_0x00792f00(param_1,unaff_x20);
          func_0x007932d0(param_1,unaff_x27);
          func_0x00791ab0(param_1,1);
          func_0x007933b8(param_1,uVar12,0);
          func_0x007930d0(param_1,&DAT_0014c840,0,6,0);
        }
      }
      else {
        func_0x007930d0(param_1,&DAT_0014c744,0,0,0);
      }
      goto LAB_000e1070;
/* wm:if you paid for this, you were scammed */
    }
    pbVar11 = (byte *)(*pcRam000000000206aad0)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019c54bc();
    }
    pcStack_110 = (char *)(*pcRam000000000206aab8)();
    if (*pcStack_110 == '\x01') {
      uVar10 = (unaff_x25 * -0x7b625cfb84d209d4 ^ (ulong)(unaff_x25 * -0x7b625cfb84d209d4) >> 0x21)
               * unaff_x24;
      uVar15 = uVar10 ^ uVar10 >> 0x21;
      bVar2 = pcStack_110[1];
      cVar5 = func_0x0016f6ec((ulong)bVar2,uVar15);
      pcStack_110[8] = cVar5;
      uVar10 = (uVar10 >> 0x2f | (uVar15 ^ bVar2) << 0x11) + unaff_x23;
      bVar2 = pcStack_110[2];
      cVar5 = func_0x0016f6ec((ulong)bVar2,uVar10);
      pcStack_110[9] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 1;
      bVar2 = pcStack_110[3];
      cVar5 = func_0x0016f6ec((ulong)bVar2,uVar10);
      pcStack_110[10] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 2;
      bVar2 = pcStack_110[4];
      cVar5 = func_0x0016f6ec((ulong)bVar2,uVar10);
      pcStack_110[0xb] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 3;
      bVar2 = pcStack_110[5];
      cVar5 = func_0x0016f6ec((ulong)bVar2,uVar10);
      pcStack_110[0xc] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 4;
      bVar2 = pcStack_110[6];
      cVar5 = func_0x0016f6ec((ulong)bVar2,uVar10);
/* do not claim this as your own - github.com/pengussy */
      pcStack_110[0xd] = cVar5;
      cVar5 = func_0x0016f6ec(pcStack_110[7],
                              unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 5);
      pcStack_110[0xe] = cVar5;
      *pcStack_110 = '\0';
    }
    pcStack_110 = pcStack_110 + 8;
    uVar12 = func_0x0011ab24(&pcStack_110);
    iVar6 = func_0x00016fc0(&pppppppuStack_88,uVar12);
    if (iVar6 != 0) {
      func_0x007930d0(param_1,&DAT_0014d8a8,0,0,0);
      goto LAB_000e1070;
    }
    pbVar11 = (byte *)(*pcRam000000000206ab00)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019c54f8();
    }
    pcStack_118 = (char *)(*pcRam000000000206aae8)();
    if (*pcStack_118 == '\x01') {
      uVar10 = (unaff_x25 * 0x6a05bb50cb93a32 ^ (ulong)(unaff_x25 * 0x6a05bb50cb93a32) >> 0x21) *
               unaff_x24;
      uVar15 = uVar10 ^ uVar10 >> 0x21;
      bVar2 = pcStack_118[1];
      cVar5 = func_0x0016f758((ulong)bVar2,uVar15);
      pcStack_118[9] = cVar5;
      uVar10 = (uVar10 >> 0x2f | (uVar15 ^ bVar2) << 0x11) + unaff_x23;
      bVar2 = pcStack_118[2];
      cVar5 = func_0x0016f758((ulong)bVar2,uVar10);
      pcStack_118[10] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 1;
      bVar2 = pcStack_118[3];
      cVar5 = func_0x0016f758((ulong)bVar2,uVar10);
      pcStack_118[0xb] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 2;
      bVar2 = pcStack_118[4];
/*  proprietary - see LICENSE - do not sell  */
      cVar5 = func_0x0016f758((ulong)bVar2,uVar10);
      pcStack_118[0xc] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 3;
      bVar2 = pcStack_118[5];
      cVar5 = func_0x0016f758((ulong)bVar2,uVar10);
      pcStack_118[0xd] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 4;
      bVar2 = pcStack_118[6];
      cVar5 = func_0x0016f758((ulong)bVar2,uVar10);
      pcStack_118[0xe] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 5;
      bVar2 = pcStack_118[7];
      cVar5 = func_0x0016f758((ulong)bVar2,uVar10);
      pcStack_118[0xf] = cVar5;
      cVar5 = func_0x0016f758(pcStack_118[8],
                              unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 6);
      pcStack_118[0x10] = cVar5;
      *pcStack_118 = '\0';
    }
    pcStack_118 = pcStack_118 + 9;
    uVar12 = func_0x0011ab24(&pcStack_118);
    iVar6 = func_0x00016fc0(&pppppppuStack_88,uVar12);
    if (iVar6 != 0) {
      func_0x007930d0(param_1,&DAT_0014d990,0,0,0);
      goto LAB_000e1070;
    }
    pbVar11 = (byte *)(*pcRam000000000206ab30)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019c5534();
    }
    pcStack_120 = (char *)(*pcRam000000000206ab18)();
    if (*pcStack_120 == '\x01') {
      uVar10 = (unaff_x25 * -0x4e32c23065514399 ^ (ulong)(unaff_x25 * -0x4e32c23065514399) >> 0x21)
               * unaff_x24;
      uVar15 = uVar10 ^ uVar10 >> 0x21;
      bVar2 = pcStack_120[1];
// WM - watermarked copy - do not remove
      cVar5 = func_0x0016a774((ulong)bVar2,uVar15);
      pcStack_120[0xc] = cVar5;
      uVar10 = (uVar10 >> 0x2f | (uVar15 ^ bVar2) << 0x11) + unaff_x23;
      bVar2 = pcStack_120[2];
      cVar5 = func_0x0016a774((ulong)bVar2,uVar10);
      pcStack_120[0xd] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 1;
      bVar2 = pcStack_120[3];
      cVar5 = func_0x0016a774((ulong)bVar2,uVar10);
      pcStack_120[0xe] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 2;
      bVar2 = pcStack_120[4];
      cVar5 = func_0x0016a774((ulong)bVar2,uVar10);
      pcStack_120[0xf] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 3;
      bVar2 = pcStack_120[5];
      cVar5 = func_0x0016a774((ulong)bVar2,uVar10);
      pcStack_120[0x10] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 4;
      bVar2 = pcStack_120[6];
      cVar5 = func_0x0016a774((ulong)bVar2,uVar10);
      pcStack_120[0x11] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 5;
      bVar2 = pcStack_120[7];
      cVar5 = func_0x0016a774((ulong)bVar2,uVar10);
      pcStack_120[0x12] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 6;
      bVar2 = pcStack_120[8];
      cVar5 = func_0x0016a774((ulong)bVar2,uVar10);
// proprietary - see LICENSE - do not sell
      pcStack_120[0x13] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 7;
      bVar2 = pcStack_120[9];
      cVar5 = func_0x0016a774((ulong)bVar2,uVar10);
      pcStack_120[0x14] = cVar5;
      uVar10 = unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 8;
      bVar2 = pcStack_120[10];
      cVar5 = func_0x0016a774((ulong)bVar2,uVar10);
      pcStack_120[0x15] = cVar5;
      cVar5 = func_0x0016a774(pcStack_120[0xb],
                              unaff_x23 + (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 9);
      pcStack_120[0x16] = cVar5;
      *pcStack_120 = '\0';
    }
    pcStack_120 = pcStack_120 + 0xc;
    uVar12 = func_0x0011ab24(&pcStack_120);
    iVar6 = func_0x00016fc0(&pppppppuStack_88,uVar12);
    if (iVar6 != 0) {
/* wm:proprietary - see LICENSE - do not sell */
      func_0x007930d0(param_1,&DAT_0014da90,0,0,0);
      goto LAB_000e1070;
    }
    goto LAB_000e1474;
  }
  if (auStack_70[0] < 0x17) {
    uStack_78 = CONCAT17((char)auStack_70[0],(undefined7)uStack_78);
    pppppppuVar9 = &pppppppuStack_88;
  }
  else {
    uVar15 = (auStack_70[0] & 0x7ffffffffffffff8) + 8;
    uVar16 = 0x19;
    if (uVar15 != 0x18) {
      uVar16 = uVar15;
    }
    pppppppuVar9 = (undefined8 *******)__Znwm(uVar16);
    uStack_78 = uVar16 | 0x8000000000000000;
    uStack_80 = uVar10;
    pppppppuStack_88 = pppppppuVar9;
  }
/* more drops soon - github.com/pengussy */
  _memmove(pppppppuVar9,lVar8,uVar10);
  *(undefined1 *)((long)pppppppuVar9 + uVar10) = 0;
  iVar6 = func_0x00791be4(param_1,1);
  if ((iVar6 != 9) || (uVar10 = func_0x0003c0e8(puVar7), (uVar10 & 1) == 0)) {
    func_0x000de8d8(param_1);
    return 1;
  }
  piVar18 = (int *)*puVar7;
  uVar10 = func_0x0003c0e8(piVar18);
  if ((uVar10 & 1) == 0) {
    func_0x000de8d8(param_1);
    return 1;
  }
  if (*piVar18 < 1) {
    uStack_12c = 0;
    uVar17 = 0;
    lStack_140 = 0;
/*  reversing this took months of machine time  */
    uVar19 = 0;
    lVar14 = 0;
    aiStack_b8[0] = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    plStack_98 = (long *)0x0;
    lStack_a0 = 0;
    uStack_90 = 0;
    uStack_138 = 1;
  }
  else {
    func_0x000e2390(aiStack_b8,piVar18);
    lStack_140 = lStack_a0;
    uVar19 = (uint)uStack_90._1_1_;
    uVar17 = (uint)(aiStack_b8[0] == 2);
    uStack_12c = (uint)(aiStack_b8[0] == 1 & (byte)uStack_90);
    if (lStack_a0 == 0) {
      lVar14 = 0;
      uStack_138 = 1;
    }
    else {
      iVar6 = func_0x0003c0e8(*(undefined8 *)(lStack_a0 + 0x28));
      if ((iVar6 == 0) ||
         (iVar6 = func_0x0003c0e8(*(undefined8 *)(*(long *)(lStack_140 + 0x28) + 0x38)), iVar6 == 0)
         ) {
        uStack_138 = 0;
        lVar14 = 0;
      }
      else {
        uStack_138 = 0;
        lVar14 = *(long *)(lStack_140 + 0x28);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      }
    }
  }
  unaff_w22 = (uint)(aiStack_b8[0] == 0);
  if ((((aiStack_b8[0] == 0) || ((uVar19 & 1) != 0)) || (uVar17 != 0)) || (uStack_12c != 0)) {
LAB_000e0618:
    if (uStack_138 != 0) goto LAB_000e0620;
LAB_000e0640:
    iStack_130 = *(int *)(lStack_140 + 0x30);
    if (aiStack_b8[0] == 1) {
      iStack_134 = *(int *)(lStack_140 + 0x34);
    }
    else {
      iStack_134 = 0;
    }
  }
  else {
    if (lVar14 == 0) {
LAB_000e0614:
      unaff_w22 = 1;
      goto LAB_000e0618;
    }
    if (*(long *)(lVar14 + 0x38) != *(long *)(param_1 + 0x38)) goto LAB_000e0614;
    unaff_w22 = (uint)(*(long *)(*(long *)(lVar14 + 0x38) + 0x70) !=
                      *(long *)(*(long *)(param_1 + 0x38) + 0x70));
    if (uStack_138 == 0) goto LAB_000e0640;
LAB_000e0620:
// WM - keep the notice, keep the source honest
    iStack_134 = 0;
    iStack_130 = 0;
  }
  pbVar11 = (byte *)(*pcRam000000000206a830)();
  if ((*pbVar11 & 1) == 0) {
    func_0x019c5264();
  }
  unaff_x25 = -0xae502812aa7333;
  unaff_x24 = -0x3b314601e57a13ad;
  unaff_x23 = -0x61c8864680b583eb;
  pcStack_c0 = (char *)(*pcRam000000000206a818)();
  if (*pcStack_c0 == '\x01') {
    uVar1 = (byte)pcStack_c0[1] ^ 0x177aacd8;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x1e72cc4;
    pcStack_c0[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x1b;
    uVar10 = (((ulong)(byte)pcStack_c0[1] ^ 0x35f0e830eff7dfaa) << 0x11 | 0x6be1) +
             0x9e3779b97f4a7c15;
    uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[2] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    pcStack_c0[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[3] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcStack_c0[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[4] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcStack_c0[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[5] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcStack_c0[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c0[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[6] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcStack_c0[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[7] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcStack_c0[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[8] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
    pcStack_c0[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar15;
    *pcStack_c0 = '\0';
  }
  pcStack_c0 = pcStack_c0 + 9;
  uVar12 = func_0x0011ab24(&pcStack_c0);
  uVar10 = _strlen();
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  if ((long)uStack_78._7_1_ < 0) {
    if (uVar10 == uStack_80) {
      if (uVar10 == 0xffffffffffffffff) {
        FUN_0001c430();
        goto LAB_000e2324;
      }
      iVar6 = _memcmp(pppppppuStack_88,uVar12);
      if (iVar6 == 0) goto LAB_000e0de0;
    }
LAB_000e0a58:
    pbVar11 = (byte *)(*pcRam000000000206a860)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019c52a0();
    }
    pcStack_c8 = (char *)(*pcRam000000000206a848)();
    if (*pcStack_c8 == '\x01') {
      lVar14 = 0;
      uVar10 = 0x6c607f187f160fcc;
      do {
        uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar15 ^ uVar15 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[lVar14 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcStack_c8[lVar14 + 0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar16;
        uVar10 = lVar14 + -0x61c8864680b583eb +
                 (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c8[lVar14 + 1]) << 0x11);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0xd);
      *pcStack_c8 = '\0';
    }
    pcStack_c8 = pcStack_c8 + 0xe;
    uVar12 = func_0x0011ab24(&pcStack_c8);
    uVar10 = _strlen();
    if ((long)uStack_78._7_1_ < 0) {
      if (uVar10 == uStack_80) {
        if (uVar10 == 0xffffffffffffffff) {
// keep the notice, keep the source honest
          FUN_0001c430();
LAB_000e2324:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xe2328);
          (*pcVar4)();
        }
        pppppppuVar9 = pppppppuStack_88;
        goto LAB_000e0b9c;
      }
    }
    else if (uVar10 == (long)uStack_78._7_1_) {
      pppppppuVar9 = &pppppppuStack_88;
LAB_000e0b9c:
      iVar6 = _memcmp(pppppppuVar9,uVar12);
      if (iVar6 == 0) goto LAB_000e1064;
    }
    pbVar11 = (byte *)(*pcRam000000000206a890)();
    if ((*pbVar11 & 1) == 0) {
      func_0x019c52dc();
    }
    pcStack_d0 = (char *)(*pcRam000000000206a878)();
    if (*pcStack_d0 == '\x01') {
      lVar14 = 0;
      uVar10 = 0xa454032ceae44055;
      do {
        uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
/* chat: discord.gg/sdkhDjTex */
        uVar16 = uVar15 ^ uVar15 >> 0x21;
        uVar1 = (uint)(byte)pcStack_d0[lVar14 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17);
        pcStack_d0[lVar14 + 0x10] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar15 >> 0x29) | 1) ^
             (byte)uVar16;
        uVar10 = lVar14 + -0x61c8864680b583eb +
                 (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_d0[lVar14 + 1]) << 0x11);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0xf);
      *pcStack_d0 = '\0';
    }
    pcStack_d0 = pcStack_d0 + 0x10;
    uVar12 = func_0x0011ab24(&pcStack_d0);
    iVar6 = func_0x00016fc0(&pppppppuStack_88,uVar12);
    if (iVar6 == 0) {
      pbVar11 = (byte *)(*pcRam000000000206a8c0)();
      if ((*pbVar11 & 1) == 0) {
        func_0x019c5318();
      }
      pcStack_d8 = (char *)(*pcRam000000000206a8a8)();
      if (*pcStack_d8 == '\x01') {
        lVar14 = 0;
        uVar10 = 0x7765bfcdad69ff48;
        do {
          uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar15 ^ uVar15 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[lVar14 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
/* WM - stripping the watermark breaks the license */
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[lVar14 + 0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar16
          ;
          uVar10 = lVar14 + -0x61c8864680b583eb +
                   (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_d8[lVar14 + 1]) << 0x11);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0xf);
        *pcStack_d8 = '\0';
      }
      pcStack_d8 = pcStack_d8 + 0x10;
      uVar12 = func_0x0011ab24(&pcStack_d8);
      iVar6 = func_0x00016fc0(&pppppppuStack_88,uVar12);
      if (iVar6 == 0) {
        pbVar11 = (byte *)(*pcRam000000000206a8f0)();
        if ((*pbVar11 & 1) == 0) {
          func_0x019c5354();
        }
        pcStack_e0 = (char *)(*pcRam000000000206a8d8)();
        if (*pcStack_e0 == '\x01') {
          lVar14 = 0;
          uVar10 = 0x94b16cc5569bc43d;
          do {
            uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar16 = uVar15 ^ uVar15 >> 0x21;
            uVar17 = (uint)(byte)pcStack_e0[lVar14 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
            uVar17 = (uVar17 >> 6 & 3 | uVar17 << 2) -
                     (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
/* wm:watermarked copy - do not remove */
            pcStack_e0[lVar14 + 0x13] =
                 ((byte)(uVar17 >> 6) & 3 | (char)uVar17 * '\x04') ^ (byte)uVar16;
            uVar10 = lVar14 + -0x61c8864680b583eb +
                     (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_e0[lVar14 + 1]) << 0x11);
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0x12);
          *pcStack_e0 = '\0';
        }
        pcStack_e0 = pcStack_e0 + 0x13;
        uVar12 = func_0x0011ab24(&pcStack_e0);
        iVar6 = func_0x00016fc0(&pppppppuStack_88,uVar12);
        if (iVar6 == 0) {
          pbVar11 = (byte *)(*pcRam000000000206a920)();
          if ((*pbVar11 & 1) == 0) {
            func_0x019c5390();
          }
          pcStack_e8 = (char *)(*pcRam000000000206a908)();
          if (*pcStack_e8 == '\x01') {
            lVar14 = 0;
            uVar10 = 0xda3019cd75281e9f;
            do {
              uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
              uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
              uVar16 = uVar15 ^ uVar15 >> 0x21;
              uVar17 = (uint)(byte)pcStack_e8[lVar14 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
              uVar17 = (uVar17 >> 2 & 0x3f | uVar17 << 6) - (int)(uVar16 >> 0x17) ^
                       ((uint)(uVar15 >> 0x29) | 1);
              pcStack_e8[lVar14 + 0xf] =
                   ((byte)(uVar17 >> 6) & 3 | (byte)(uVar17 << 2)) - (char)uVar16;
              uVar10 = lVar14 + -0x61c8864680b583eb +
                       (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_e8[lVar14 + 1]) << 0x11);
              lVar14 = lVar14 + 1;
/*  chat: discord.gg/sdkhDjTex  */
            } while (lVar14 != 0xe);
            *pcStack_e8 = '\0';
          }
          pcStack_e8 = pcStack_e8 + 0xf;
          uVar12 = func_0x0011ab24(&pcStack_e8);
          iVar6 = func_0x00016fc0(&pppppppuStack_88,uVar12);
          if (iVar6 == 0) {
            pbVar11 = (byte *)(*pcRam000000000206a950)();
            if ((*pbVar11 & 1) == 0) {
              func_0x019c53cc();
            }
            pcStack_f0 = (char *)(*pcRam000000000206a938)();
            if (*pcStack_f0 == '\x01') {
              bVar2 = pcStack_f0[1];
              cVar5 = func_0x001686fc((ulong)bVar2,0x8f4d514d652a6bc7);
              pcStack_f0[8] = cVar5;
              uVar10 = (((ulong)bVar2 ^ 0x8f4d514d652a6bc7) << 0x11 | 0x11e9a) + 0x9e3779b97f4a7c15;
              bVar2 = pcStack_f0[2];
              cVar5 = func_0x001686fc((ulong)bVar2,uVar10);
              pcStack_f0[9] = cVar5;
              uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
              bVar2 = pcStack_f0[3];
              cVar5 = func_0x001686fc((ulong)bVar2,uVar10);
              pcStack_f0[10] = cVar5;
              uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
              bVar2 = pcStack_f0[4];
              cVar5 = func_0x001686fc((ulong)bVar2,uVar10);
              pcStack_f0[0xb] = cVar5;
              uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c18;
              bVar2 = pcStack_f0[5];
              cVar5 = func_0x001686fc((ulong)bVar2,uVar10);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
              pcStack_f0[0xc] = cVar5;
              uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c19;
              bVar2 = pcStack_f0[6];
              cVar5 = func_0x001686fc((ulong)bVar2,uVar10);
              pcStack_f0[0xd] = cVar5;
              cVar5 = func_0x001686fc(pcStack_f0[7],
                                      (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) +
                                      0x9e3779b97f4a7c1a);
              pcStack_f0[0xe] = cVar5;
              *pcStack_f0 = '\0';
            }
            pcStack_f0 = pcStack_f0 + 8;
            uVar12 = func_0x0011ab24(&pcStack_f0);
            iVar6 = func_0x00016fc0(&pppppppuStack_88,uVar12);
            if (iVar6 == 0) {
              pbVar11 = (byte *)(*pcRam000000000206a980)();
              if ((*pbVar11 & 1) == 0) {
                func_0x019c5408();
              }
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
              pcStack_f8 = (char *)(*pcRam000000000206a968)();
              if (*pcStack_f8 == '\x01') {
                bVar2 = pcStack_f8[1];
                cVar5 = func_0x0016849c((ulong)bVar2,0xd4b1ff56e1c3b7aa);
                pcStack_f8[10] = cVar5;
                uVar10 = (((ulong)bVar2 ^ 0xd4b1ff56e1c3b7aa) << 0x11 | 0x1a963) +
                         0x9e3779b97f4a7c15;
                bVar2 = pcStack_f8[2];
                cVar5 = func_0x0016849c((ulong)bVar2,uVar10);
                pcStack_f8[0xb] = cVar5;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
                bVar2 = pcStack_f8[3];
                cVar5 = func_0x0016849c((ulong)bVar2,uVar10);
                pcStack_f8[0xc] = cVar5;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
                bVar2 = pcStack_f8[4];
                cVar5 = func_0x0016849c((ulong)bVar2,uVar10);
                pcStack_f8[0xd] = cVar5;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c18;
                bVar2 = pcStack_f8[5];
                cVar5 = func_0x0016849c((ulong)bVar2,uVar10);
                pcStack_f8[0xe] = cVar5;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c19;
                bVar2 = pcStack_f8[6];
                cVar5 = func_0x0016849c((ulong)bVar2,uVar10);
                pcStack_f8[0xf] = cVar5;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1a;
                bVar2 = pcStack_f8[7];
                cVar5 = func_0x0016849c((ulong)bVar2,uVar10);
                pcStack_f8[0x10] = cVar5;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1b;
                bVar2 = pcStack_f8[8];
                cVar5 = func_0x0016849c((ulong)bVar2,uVar10);
                pcStack_f8[0x11] = cVar5;
                cVar5 = func_0x0016849c(pcStack_f8[9],
/* wm:more drops soon - github.com/pengussy */
                                        (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) +
                                        0x9e3779b97f4a7c1c);
                pcStack_f8[0x12] = cVar5;
                *pcStack_f8 = '\0';
              }
              pcStack_f8 = pcStack_f8 + 10;
              uVar12 = func_0x0011ab24(&pcStack_f8);
              iVar6 = func_0x00016fc0(&pppppppuStack_88,uVar12);
              if (iVar6 == 0) {
                pbVar11 = (byte *)(*pcRam000000000206a9b0)();
                if ((*pbVar11 & 1) == 0) {
                  func_0x019c5444();
                }
                pcStack_100 = (char *)(*pcRam000000000206a998)();
                if (*pcStack_100 == '\x01') {
                  bVar2 = pcStack_100[1];
                  cVar5 = func_0x0016a93c((ulong)bVar2,0x22f781889925fafb);
                  pcStack_100[6] = cVar5;
                  uVar10 = (((ulong)bVar2 ^ 0x22f781889925fafb) << 0x11 | 0x45ef) +
                           0x9e3779b97f4a7c15;
                  bVar2 = pcStack_100[2];
                  cVar5 = func_0x0016a93c((ulong)bVar2,uVar10);
                  pcStack_100[7] = cVar5;
                  uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
                  bVar2 = pcStack_100[3];
                  cVar5 = func_0x0016a93c((ulong)bVar2,uVar10);
                  pcStack_100[8] = cVar5;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
                  uVar10 = (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
                  bVar2 = pcStack_100[4];
                  cVar5 = func_0x0016a93c((ulong)bVar2,uVar10);
                  pcStack_100[9] = cVar5;
                  cVar5 = func_0x0016a93c(pcStack_100[5],
                                          (uVar10 >> 0x2f | (uVar10 ^ bVar2) << 0x11) +
                                          0x9e3779b97f4a7c18);
                  pcStack_100[10] = cVar5;
                  *pcStack_100 = '\0';
                }
                unaff_x27 = (ulong)uStack_12c;
                pcStack_100 = pcStack_100 + 6;
                uVar12 = func_0x0011ab24(&pcStack_100);
                uVar10 = func_0x00016fc0(&pppppppuStack_88,uVar12);
                unaff_x20 = lVar8;
                if ((uVar10 & 1) == 0) {
                  pbVar11 = (byte *)(*pcRam000000000206a9e0)();
                  if ((*pbVar11 & 1) == 0) goto LAB_000e22f0;
                  goto LAB_000e15dc;
                }
                goto LAB_000e172c;
              }
/*  do not claim this as your own  */
              if (iStack_134 == 0) {
                unaff_w22 = 1;
              }
              if (unaff_w22 == 0) {
                func_0x00793928(param_1,0xffffd8f0);
                iVar6 = func_0x00791be4(param_1,0xffffffff);
                if (iVar6 == 8) goto LAB_000e1070;
                goto LAB_000e1468;
              }
            }
            else {
              if (iStack_130 == 0) {
                unaff_w22 = 1;
              }
              if (unaff_w22 == 0) {
                func_0x00793928(param_1,0xffffd8f0);
                iVar6 = func_0x00791be4(param_1,0xffffffff);
                if (iVar6 == 10) goto LAB_000e1070;
LAB_000e1468:
                func_0x00791660(param_1,0xfffffffe);
              }
// WM - unlicensed copy if this notice is missing
            }
LAB_000e1474:
            func_0x00792a48(param_1);
            goto LAB_000e1070;
          }
          unaff_w22 = (uint)(aiStack_b8[0] != 0) & (unaff_w22 ^ 0xffffffff);
        }
        else {
          unaff_w22 = uVar19;
        }
      }
      else {
        unaff_w22 = uVar17;
      }
    }
    else {
      unaff_w22 = uStack_12c;
    }
  }
  else {
    if ((uVar10 != (long)uStack_78._7_1_) || (iVar6 = _memcmp(&pppppppuStack_88,uVar12), iVar6 != 0)
       ) goto LAB_000e0a58;
LAB_000e0de0:
    if ((((*(byte *)(puVar7 + 2) & 1) == 0) && ((*(byte *)((long)puVar7 + 0x11) & 1) == 0)) &&
       ((iVar6 = func_0x0003c0e8(*puVar7), iVar6 != 0 && (0 < *(int *)*puVar7)))) {
      unaff_w22 = (uint)(*(long *)((int *)*puVar7 + 8) != 0);
    }
    else {
      unaff_w22 = 0;
    }
/* WM - no support for modified copies */
  }
LAB_000e1064:
  func_0x007932d0(param_1,unaff_w22);
LAB_000e1070:
  plVar3 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    LOAcquire();
    lVar8 = plStack_98[1];
    plStack_98[1] = lVar8 + -1;
    LORelease();
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return 1;
}

