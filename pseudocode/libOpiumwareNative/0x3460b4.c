/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3460b4:b6d945fbf7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_003460b4(long *param_1,ulong param_2,ulong param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  uint uStack_194;
  long lStack_190;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
// unlicensed copy if this notice is missing
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  uVar4 = _mach_thread_self();
  *(undefined4 *)(param_1 + 2) = uVar4;
  puVar3 = PTR__mach_task_self__01f20350;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  uVar7 = (*_UNK_01dc2328)(*(undefined4 *)PTR__mach_task_self__01f20350,param_1,param_1 + 1);
  if ((int)uVar7 == 0) {
    if ((int)param_1[1] != 0) {
      uVar11 = 0;
      do {
        while( true ) {
          iVar5 = *(int *)(*param_1 + uVar11 * 4);
          if (iVar5 != (int)param_1[2]) break;
LAB_0034627c:
          *(int *)((long)param_1 + 0xc) = (int)uVar11 + 1;
          uVar11 = uVar11 + 1;
          if (*(uint *)(param_1 + 1) <= uVar11) goto LAB_00346294;
        }
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
// WM - origin: github.com/pengussy
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        lStack_190 = CONCAT44(lStack_190._4_4_,0x44);
        uVar7 = (*_UNK_01dc2340)(iVar5,6,&uStack_180,&lStack_190);
        iVar5 = (int)uVar7;
        if ((iVar5 == 0x10000003) || (iVar5 == 0x25)) {
LAB_00346260:
          (*_UNK_01dc2330)(*(undefined4 *)puVar3,*(undefined4 *)(*param_1 + uVar11 * 4));
          *(undefined4 *)(*param_1 + uVar11 * 4) = 0;
// chat: discord.gg/sdkhDjTex
          goto LAB_0034627c;
        }
        if (iVar5 != 0) {
          return uVar7;
        }
        uVar7 = (*_UNK_01dc2338)(*(undefined4 *)(*param_1 + uVar11 * 4));
        iVar5 = (int)uVar7;
        if ((iVar5 == 0x10000003) || (iVar5 == 0x25)) goto LAB_00346260;
        if (iVar5 != 0) {
          return uVar7;
        }
        *(int *)((long)param_1 + 0xc) = (int)uVar11 + 1;
        if (param_4 != 0) {
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
/* wm:watermarked copy - do not remove */
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          uStack_160 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          lStack_190 = CONCAT44(lStack_190._4_4_,0x44);
          uVar7 = (*_UNK_01dc2340)(*(undefined4 *)(*param_1 + uVar11 * 4),6,&uStack_180,&lStack_190)
          ;
          if ((int)uVar7 != 0) goto LAB_003463c8;
          if ((param_2 <= uStack_80) && (uStack_80 - param_2 < param_3)) {
            return 0xe;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 1));
    }
LAB_00346294:
    lStack_190 = 0;
    uStack_194 = 0;
    uVar7 = (*_UNK_01dc2328)(*(undefined4 *)puVar3,&lStack_190,&uStack_194);
    if ((int)uVar7 == 0) {
      if (uStack_194 == 0) {
        uVar7 = 0;
        lVar8 = 0;
      }
      else {
        uVar11 = 0;
        uVar7 = 0;
/* wm:if you paid for this, you were scammed */
        do {
          iVar5 = *(int *)(lStack_190 + uVar11 * 4);
          if (iVar5 != (int)param_1[2]) {
            uVar9 = (ulong)*(uint *)(param_1 + 1);
            if (*(uint *)(param_1 + 1) != 0) {
              piVar10 = (int *)*param_1;
              do {
                if (iVar5 == *piVar10) goto LAB_003462ec;
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 1;
              } while (uVar9 != 0);
            }
            if ((int)uVar7 == 0) {
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
              uStack_c8 = 0;
              uStack_d0 = 0;
              uStack_b8 = 0;
              uStack_c0 = 0;
              uStack_e8 = 0;
              uStack_f0 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              uStack_108 = 0;
              uStack_110 = 0;
              uStack_f8 = 0;
              uStack_100 = 0;
              uStack_128 = 0;
              uStack_130 = 0;
              uStack_118 = 0;
/* WM - found on a paste site? it was re-uploaded illegally */
              uStack_120 = 0;
              uStack_148 = 0;
              uStack_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              uStack_168 = 0;
              uStack_170 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
              uStack_184 = 0x44;
              uVar6 = (*_UNK_01dc2340)(iVar5,6,&uStack_180,&uStack_184);
              uVar2 = 0xe;
              if (uVar6 != 0) {
                uVar2 = uVar6;
/*  origin: github.com/pengussy  */
              }
              uVar1 = 0;
              if (uVar6 != 0x10000003) {
                uVar1 = uVar2;
              }
              uVar2 = 0;
              if (uVar6 != 0x25) {
                uVar2 = uVar1;
              }
              uVar7 = (ulong)uVar2;
            }
          }
LAB_003462ec:
          (*_UNK_01dc2330)(*(undefined4 *)puVar3,*(undefined4 *)(lStack_190 + uVar11 * 4));
          uVar11 = uVar11 + 1;
        } while (uVar11 < uStack_194);
        lVar8 = (ulong)uStack_194 << 2;
      }
      (*_UNK_01dc2300)(*(undefined4 *)puVar3,lStack_190,lVar8);
    }
  }
LAB_003463c8:
  return uVar7;
}
/*  keep the notice, keep the source honest  */

