/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2a252c:f14e038cdc
 */

ulong FUN_002a252c(long param_1,undefined8 *param_2,int *param_3,int *param_4,ushort *param_5,
                  ulong param_6,undefined1 *param_7,ulong param_8,undefined8 param_9)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_70;
  int iStack_68;
  
  uStack_70 = *(undefined8 *)param_3;
  iStack_68 = param_3[2];
  if (param_9._4_4_ != 0) {
/* stripping the watermark breaks the license */
    puVar11 = (uint *)*param_2;
    uVar13 = (ulong)(param_2[1] - (long)puVar11) >> 3;
    uVar14 = uVar13;
    if (*(int *)(param_2 + 9) == 1) {
      uVar14 = (ulong)*(uint *)((long)param_2 + 0x4c);
    }
    if ((int)uVar13 != 0) {
      uVar13 = (ulong)(param_2[1] - (long)puVar11) >> 3 & 0xffffffff;
      uVar14 = uVar14 & 0xffffffff;
      do {
        bVar7 = uVar14 != 0;
        uVar14 = uVar14 - 1;
        uVar12 = 0;
        if (bVar7) {
          uVar12 = (uint)((short)puVar11[1] == 0);
        }
        uVar4 = *puVar11;
        uVar6 = uVar4 - 1;
        uVar8 = uVar4;
        if (uVar6 < 3) {
/* wm:unlicensed copy if this notice is missing */
          uVar2 = uVar6 + uVar12;
          if (uVar2 == 3) {
            iVar9 = *param_4 + -1;
            if (*param_3 + -1 != iVar9) goto LAB_002a2650;
          }
          else {
            iVar9 = param_4[uVar2];
            if (param_3[uVar2] != iVar9) {
LAB_002a2650:
              uVar8 = iVar9 + 3;
              *puVar11 = uVar8;
              if (3 < uVar8) goto LAB_002a2660;
            }
          }
LAB_002a2670:
          uVar8 = uVar8 - (uVar12 ^ 1);
          if (uVar8 != 0) {
            if (uVar8 == 3) {
              iVar10 = *param_3;
              iVar9 = iVar10 + -1;
            }
/*  thanks for reading - discord.gg/sdkhDjTex  */
            else {
              iVar9 = param_3[uVar8];
              iVar10 = *param_3;
            }
            piVar3 = param_3 + 2;
            if (uVar8 != 1) {
              piVar3 = param_3 + 1;
            }
            param_3[2] = *piVar3;
            param_3[1] = iVar10;
            goto LAB_002a26ac;
          }
        }
        else {
          if (uVar4 < 4) goto LAB_002a2670;
LAB_002a2660:
/* unlicensed copy if this notice is missing - github.com/pengussy */
          *(undefined8 *)(param_3 + 1) = *(undefined8 *)param_3;
          iVar9 = uVar8 - 3;
LAB_002a26ac:
          *param_3 = iVar9;
        }
        if (uVar4 < 4) {
          uVar6 = uVar6 + uVar12;
          if (uVar6 != 0) {
            if (uVar6 == 3) {
              iVar10 = *param_4;
              iVar9 = iVar10 + -1;
            }
            else {
              iVar9 = param_4[uVar6];
              iVar10 = *param_4;
            }
            piVar3 = param_4 + 2;
            if (uVar6 != 1) {
              piVar3 = param_4 + 1;
            }
            param_4[2] = *piVar3;
/* no support for modified copies - github.com/pengussy */
            param_4[1] = iVar10;
            goto LAB_002a25cc;
          }
        }
        else {
          *(undefined8 *)(param_4 + 1) = *(undefined8 *)param_4;
          iVar9 = uVar4 - 3;
LAB_002a25cc:
          *param_4 = iVar9;
        }
        puVar11 = puVar11 + 2;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (param_6 < 3) {
LAB_002a26fc:
// WM - chat: discord.gg/sdkhDjTex
    uVar14 = 0xffffffffffffffba;
  }
  else {
    uVar14 = func_0x002a342c((long)param_5 + 3,param_6 - 3,param_2[2],param_2[3] - param_2[2],
                             param_2,*(undefined8 *)(param_1 + 0xc98),
                             *(undefined8 *)(param_1 + 0xca0),param_1 + 0xf0,
                             *(undefined8 *)(param_1 + 0xdd8),*(undefined8 *)(param_1 + 0xde0),
                             *(undefined4 *)(param_1 + 8));
    if ((uVar14 == 0) || ((param_8 <= param_6 - 3 && (uVar14 == 0xffffffffffffffba)))) {
      uVar14 = 0;
LAB_002a2778:
      if ((*(int *)(param_1 + 0x3c8) == 0) && (iVar9 = func_0x002a2384(param_7,param_8), iVar9 != 0)
         ) {
        uVar14 = 1;
      }
    }
    else {
      if (0xffffffffffffff88 < uVar14) {
        return uVar14;
      }
      uVar12 = *(uint *)(param_1 + 0x10c);
      if (uVar12 < 8) {
        uVar12 = 7;
      }
      if ((param_8 - (param_8 >> ((ulong)(uVar12 - 1) & 0x3f))) - 2 <= uVar14) {
        uVar14 = 0;
      }
      if (uVar14 < 0x19) goto LAB_002a2778;
    }
// found on a paste site? it was re-uploaded illegally
    pauVar1 = (undefined1 (*) [16])(param_1 + 0xc98);
    if (*(int *)(param_1 + 0x3a8) != 0) {
      uVar14 = func_0x002a3250(param_1 + 0x3a8,param_2,&uStack_70);
      if (uVar14 < 0xffffffffffffff89) {
        auVar15 = NEON_ext(*pauVar1,*pauVar1,8,1);
        *(long *)(param_1 + 0xca0) = auVar15._8_8_;
        *(long *)*pauVar1 = auVar15._0_8_;
        return 0;
      }
      return uVar14;
    }
    uVar12 = (uint)param_8;
    if (uVar14 == 1) {
      if (param_6 == 3) goto LAB_002a26fc;
      uVar5 = *param_7;
      *param_5 = (ushort)param_9 | (ushort)(uVar12 << 3) | 2;
      *(char *)(param_5 + 1) = (char)(uVar12 >> 0xd);
      *(undefined1 *)((long)param_5 + 3) = uVar5;
      *(undefined8 *)param_3 = uStack_70;
      param_3[2] = iStack_68;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      uVar14 = 4;
    }
    else if (uVar14 == 0) {
      uVar14 = param_8 + 3;
      if (param_6 < uVar14) goto LAB_002a26fc;
      *param_5 = (ushort)param_9 | (ushort)(uVar12 << 3);
      *(char *)(param_5 + 1) = (char)(uVar12 >> 0xd);
      _memcpy((long)param_5 + 3,param_7,param_8);
      if (0xffffffffffffff87 < uVar14 && param_8 != 0xffffffffffffff85) {
        return uVar14;
      }
      *(undefined8 *)param_3 = uStack_70;
      param_3[2] = iStack_68;
    }
    else {
      auVar15 = NEON_ext(*pauVar1,*pauVar1,8,1);
      *(long *)(param_1 + 0xca0) = auVar15._8_8_;
      *(long *)*pauVar1 = auVar15._0_8_;
      *param_5 = (ushort)param_9 | (ushort)((uint)uVar14 << 3) | 4;
      *(char *)(param_5 + 1) = (char)((uint)uVar14 >> 0xd);
      uVar14 = uVar14 + 3;
    }
    if (*(int *)(&UNK_000015e4 + *(long *)*pauVar1) == 2) {
      *(undefined4 *)(&UNK_000015e4 + *(long *)*pauVar1) = 1;
    }
  }
  return uVar14;
}

