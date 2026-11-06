/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xad52c:b95891dea5
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_000ad52c(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *******pppppppuVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  char *pcStack_c0;
  char *pcStack_b8;
  undefined8 *******pppppppuStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
  undefined7 uStack_88;
  byte bStack_81;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
/* WM - chat: discord.gg/sdkhDjTex */
    return;
  }
  if (param_3 < 0x7ffffffffffffff7) {
    if (param_3 < 0x17) {
      uStack_70 = CONCAT17((char)param_3,(undefined7)uStack_70);
      pppppppuVar5 = &pppppppuStack_80;
    }
    else {
      uVar12 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar13 = 0x19;
      if (uVar12 != 0x18) {
        uVar13 = uVar12;
      }
      pppppppuVar5 = (undefined8 *******)__Znwm(uVar13);
      uStack_70 = uVar13 | 0x8000000000000000;
      pppppppuStack_80 = pppppppuVar5;
      uStack_78 = param_3;
    }
    _memcpy(pppppppuVar5,param_2,param_3);
    *(undefined1 *)((long)pppppppuVar5 + param_3) = 0;
    FUN_000a37f0(&pppppppuStack_98,&pppppppuStack_80,1);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppppuStack_80);
      uVar12 = uStack_90;
      if (-1 < (char)bStack_81) {
/*  keep the notice, keep the source honest  */
        uVar12 = (ulong)bStack_81;
      }
    }
    else {
      uVar12 = uStack_90;
      if (-1 < (char)bStack_81) {
        uVar12 = (ulong)bStack_81;
      }
    }
    if (uVar12 == 0) goto LAB_000adf64;
    plVar11 = *(long **)(param_1 + 8);
    if (plVar11 < *(long **)(param_1 + 0x10)) {
      if ((char)bStack_81 < '\0') {
        func_0x00017ae8(plVar11,pppppppuStack_98);
      }
      else {
        plVar11[2] = CONCAT17(bStack_81,uStack_88);
        plVar11[1] = uStack_90;
        *plVar11 = (long)pppppppuStack_98;
      }
      plVar11 = plVar11 + 3;
      *(long **)(param_1 + 8) = plVar11;
    }
    else {
      plVar11 = (long *)func_0x00143044(param_1,&pppppppuStack_98);
    }
    *(long **)(param_1 + 8) = plVar11;
    auVar15 = __ZNKSt3__14__fs10filesystem4path11__extensionEv(&pppppppuStack_98);
    uVar12 = auVar15._8_8_;
    if (uVar12 < 0x7ffffffffffffff7) {
      if (uVar12 < 0x17) {
        uStack_70 = CONCAT17(auVar15[8],(undefined7)uStack_70);
        pppppppuVar5 = &pppppppuStack_80;
/* no support for modified copies - github.com/pengussy */
      }
      else {
        uVar13 = (uVar12 & 0x7ffffffffffffff8) + 8;
        uVar14 = 0x19;
        if (uVar13 != 0x18) {
          uVar14 = uVar13;
        }
        pppppppuVar5 = (undefined8 *******)__Znwm(uVar14);
        uStack_70 = uVar14 | 0x8000000000000000;
        pppppppuStack_80 = pppppppuVar5;
        uStack_78 = uVar12;
      }
      _memmove(pppppppuVar5,auVar15._0_8_,uVar12);
      *(undefined1 *)((long)pppppppuVar5 + uVar12) = 0;
      uVar12 = uStack_78;
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppppuStack_80);
        if (uVar12 != 0) goto LAB_000adf64;
      }
      else if (uStack_70._7_1_ != '\0') goto LAB_000adf64;
      if ((char)bStack_81 < '\0') {
        func_0x00017ae8(&pppppppuStack_80,pppppppuStack_98,uStack_90);
      }
      else {
        uStack_78 = uStack_90;
        pppppppuStack_80 = pppppppuStack_98;
        uStack_70 = CONCAT17(bStack_81,uStack_88);
      }
      pbVar6 = (byte *)(*pcRam0000000002067770)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c1790();
      }
      pcStack_b8 = (char *)(*pcRam0000000002067758)();
      if (*pcStack_b8 == '\x01') {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        uVar3 = (byte)pcStack_b8[1] ^ 0x7dd8a728;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) + 0x3708fcfc;
        pcStack_b8[8] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - 0x3d ^ 0xeb;
        uVar12 = (((ulong)(byte)pcStack_b8[1] ^ 0x427feaff0c206532) << 0x11 | 0x84ff) +
                 0x9e3779b97f4a7c15;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar3 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar14 >> 0x17);
        pcStack_b8[9] =
             ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar3 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar14 >> 0x17);
        pcStack_b8[10] =
             ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar3 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar14 ^ 0xffffffc3;
/* no support for modified copies */
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar14 >> 0x17);
        pcStack_b8[0xb] =
             ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar3 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar14 >> 0x17);
        pcStack_b8[0xc] =
             ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b8[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar3 = (uint)(byte)pcStack_b8[6] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar14 >> 0x17);
        pcStack_b8[0xd] =
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
             ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar3 = (uint)(byte)pcStack_b8[7] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar13 >> 0x17);
        pcStack_b8[0xe] =
             ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        *pcStack_b8 = '\0';
      }
      pcStack_b8 = pcStack_b8 + 8;
      uVar7 = func_0x0011ab24(&pcStack_b8);
      uVar13 = uStack_70;
      pppppppuVar5 = pppppppuStack_80;
      uVar12 = uStack_78;
      if (-1 < (long)uStack_70) {
        uVar12 = uStack_70 >> 0x38;
      }
      lVar8 = _strlen();
      uVar14 = lVar8 + uVar12;
      if (uVar14 < 0x7ffffffffffffff7) {
        if (uVar14 < 0x17) {
          uStack_a0 = CONCAT17((char)uVar14,(undefined7)uStack_a0);
          pppppppuVar9 = &pppppppuStack_b0;
/* WM - keep the notice, keep the source honest */
        }
        else {
          uVar1 = (uVar14 & 0x7ffffffffffffff8) + 8;
          uVar2 = 0x19;
          if (uVar1 != 0x18) {
            uVar2 = uVar1;
          }
          pppppppuVar9 = (undefined8 *******)__Znwm(uVar2);
          uStack_a0 = uVar2 | 0x8000000000000000;
          pppppppuStack_b0 = pppppppuVar9;
          uStack_a8 = uVar14;
        }
        if (-1 < (long)uVar13) {
          pppppppuVar5 = &pppppppuStack_80;
        }
        _memmove(pppppppuVar9,pppppppuVar5,uVar12);
        _memmove((long)pppppppuVar9 + uVar12,uVar7,lVar8);
// WM - origin: github.com/pengussy
        *(undefined1 *)((long)pppppppuVar9 + uVar12 + lVar8) = 0;
        puVar10 = *(undefined8 **)(param_1 + 8);
        if (puVar10 < *(undefined8 **)(param_1 + 0x10)) {
          puVar10[2] = uStack_a0;
          puVar10[1] = uStack_a8;
          *puVar10 = pppppppuStack_b0;
          uStack_a8 = 0;
          uStack_a0 = 0;
          pppppppuStack_b0 = (undefined8 *******)0x0;
          puVar10 = puVar10 + 3;
        }
        else {
          puVar10 = (undefined8 *)func_0x001431ec(param_1,&pppppppuStack_b0);
        }
        *(undefined8 **)(param_1 + 8) = puVar10;
        if ((long)uStack_a0 < 0) {
          __ZdlPv(pppppppuStack_b0);
        }
        pbVar6 = (byte *)(*pcRam00000000020677a0)();
        if ((*pbVar6 & 1) == 0) {
          func_0x019c17cc();
        }
        pcStack_c0 = (char *)(*pcRam0000000002067788)();
        if (*pcStack_c0 == '\x01') {
          uVar3 = (byte)pcStack_c0[1] ^ 0xc716299f;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) + 0xc33e98f;
          pcStack_c0[8] = ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') + 0xd ^ 0x5c;
          uVar12 = (((ulong)(byte)pcStack_c0[1] ^ 0xed9092d385117c93) << 0x11 | 0x1db21) +
                   0x9e3779b97f4a7c15;
          uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcStack_c0[2] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar14 >> 0x17);
          pcStack_c0[9] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar13 >> 0x29) | 1) ^
/* wm:watermarked copy - do not remove */
               (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcStack_c0[3] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar14 >> 0x17);
          pcStack_c0[10] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar13 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_c0[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcStack_c0[4] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar14 >> 0x17);
          pcStack_c0[0xb] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar13 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_c0[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcStack_c0[5] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar14 >> 0x17);
          pcStack_c0[0xc] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar13 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_c0[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcStack_c0[6] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar14 >> 0x17);
          pcStack_c0[0xd] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar13 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_c0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar3 = (uint)(byte)pcStack_c0[7] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar13 >> 0x17);
          pcStack_c0[0xe] =
               ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar12 >> 0x29) | 1) ^
               (byte)uVar13;
          *pcStack_c0 = '\0';
        }
        pcStack_c0 = pcStack_c0 + 8;
        uVar7 = func_0x0011ab24(&pcStack_c0);
        uVar13 = uStack_70;
        pppppppuVar5 = pppppppuStack_80;
        uVar12 = uStack_78;
        if (-1 < (long)uStack_70) {
          uVar12 = uStack_70 >> 0x38;
        }
        lVar8 = _strlen();
        uVar14 = lVar8 + uVar12;
        if (uVar14 < 0x7ffffffffffffff7) {
          if (uVar14 < 0x17) {
            uStack_a0 = CONCAT17((char)uVar14,(undefined7)uStack_a0);
            pppppppuVar9 = &pppppppuStack_b0;
          }
          else {
            uVar1 = (uVar14 & 0x7ffffffffffffff8) + 8;
            uVar2 = 0x19;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
            if (uVar1 != 0x18) {
              uVar2 = uVar1;
            }
            pppppppuVar9 = (undefined8 *******)__Znwm(uVar2);
            uStack_a0 = uVar2 | 0x8000000000000000;
            pppppppuStack_b0 = pppppppuVar9;
            uStack_a8 = uVar14;
          }
          if (-1 < (long)uVar13) {
            pppppppuVar5 = &pppppppuStack_80;
          }
          _memmove(pppppppuVar9,pppppppuVar5,uVar12);
          _memmove((long)pppppppuVar9 + uVar12,uVar7,lVar8);
          *(undefined1 *)((long)pppppppuVar9 + uVar12 + lVar8) = 0;
          puVar10 = *(undefined8 **)(param_1 + 8);
          if (puVar10 < *(undefined8 **)(param_1 + 0x10)) {
            puVar10[2] = uStack_a0;
            puVar10[1] = uStack_a8;
            *puVar10 = pppppppuStack_b0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            pppppppuStack_b0 = (undefined8 *******)0x0;
            puVar10 = puVar10 + 3;
          }
          else {
            puVar10 = (undefined8 *)func_0x001431ec(param_1,&pppppppuStack_b0);
          }
          *(undefined8 **)(param_1 + 8) = puVar10;
          if ((long)uStack_a0 < 0) {
            __ZdlPv(pppppppuStack_b0);
          }
          if ((long)uStack_70 < 0) {
            __ZdlPv(pppppppuStack_80);
          }
LAB_000adf64:
          if ((char)bStack_81 < '\0') {
            __ZdlPv(pppppppuStack_98);
          }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          return;
        }
        FUN_0000aa50();
      }
      else {
        FUN_0000aa50();
      }
      goto LAB_000adfcc;
    }
  }
  else {
    FUN_0000aa50();
  }
  FUN_0000aa50();
LAB_000adfcc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0xadfd0);
  (*pcVar4)();
}

