/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x33368c:fe7c754a02
 */

undefined8 FUN_0033368c(long param_1,ulong param_2,float *param_3)

{
  ushort *puVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ushort *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
// WM - watermarked copy - do not remove
  float fVar21;
  uint uStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  
  lVar14 = *(long *)(param_1 + 0x58);
  lVar11 = *(long *)(lVar14 + 8);
  if (((*(byte *)(lVar11 + 0x50) & 1) != 0) || ((*(byte *)(lVar14 + 0x10) >> 2 & 1) != 0)) {
    if (*(int *)(param_1 + 0x40) != -1) {
      return 0;
// watermarked copy - do not remove
    }
    if ((*(byte *)(param_1 + 0x4f) >> 3 & 1) == 0) {
      func_0x00337984(param_1);
      return 0;
    }
    return 0;
  }
  uVar15 = (uint)param_2;
  if (*(int *)(lVar14 + 0x38) == 0) {
    if ((uint)*(ushort *)(lVar14 + 0x30) != (uVar15 & 0xffff)) goto LAB_00333a1c;
  }
  else {
    param_2 = func_0x002fe2c8((int *)(lVar14 + 0x38),param_2,param_2);
    if ((uint)*(ushort *)(lVar14 + 0x30) != ((uint)param_2 & 0xffff)) goto LAB_00333a1c;
  }
  if (*(char *)(lVar14 + 0x35) != '\x01') goto LAB_00333a1c;
  lVar13 = *(long *)(param_1 + 0x58);
  uVar18 = *(uint *)(param_1 + 0x20);
  if (uVar18 < 0x2f) {
LAB_003339f0:
    func_0x019e32c8(param_1,&uStack_a0);
    lVar16 = CONCAT44(fStack_9c,uStack_a0);
joined_r0x00333a00:
/* watermarked copy - do not remove - github.com/pengussy */
    if (lVar16 != 0) goto LAB_003337c0;
    uVar18 = *(uint *)(param_1 + 0x20);
  }
  else {
    uVar5 = *(ushort *)(*(long *)(param_1 + 0x28) + 0x5c);
    if (uVar5 != 0xfffe) {
      if (uVar5 == 0xffff) goto LAB_003339f0;
      lVar16 = *(long *)(param_1 + 0x38) + (ulong)uVar5 * 0x2c;
      goto joined_r0x00333a00;
    }
  }
  if (uVar18 < 0xff0f) {
LAB_00333a08:
    func_0x019e32ec(param_1,&uStack_a0);
    lVar16 = CONCAT44(fStack_9c,uStack_a0);
  }
  else {
    uVar5 = *(ushort *)(&UNK_0001fe1c + *(long *)(param_1 + 0x28));
    if (uVar5 == 0xfffe) goto LAB_00333a1c;
    if (uVar5 == 0xffff) goto LAB_00333a08;
    lVar16 = *(long *)(param_1 + 0x38) + (ulong)uVar5 * 0x2c;
/* WM - do not claim this as your own */
  }
  if (lVar16 != 0) {
LAB_003337c0:
    lVar7 = ((ulong)*(uint *)(lVar16 + 0x28) & 0x7ffff) * 4;
    lVar14 = *(long *)(*(long *)(lVar11 + 0x2b0) + 0x68) +
             ((long)((ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 0x2b0) + 0x78) + lVar7) << 0x2c)
             >> 0x2c) * 8;
    fVar21 = *(float *)(lVar16 + 0x10);
    fVar19 = *(float *)(lVar16 + 8);
    uStack_78 = FUN_00327cac(lVar11,(uint)*(ushort *)(lVar14 + 4) * 3 + 2,
                             *(undefined2 *)(lVar14 + 6),0);
    puVar10 = (ushort *)
              (*(long *)(*(long *)(lVar11 + 0x2b0) + 0x68) +
              ((long)((ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 0x2b0) + 0x78) +
                                      (ulong)(uStack_78 & 0x7ffff) * 4) << 0x2c) >> 0x2c) * 8);
    uStack_7c = 0;
    uStack_84 = 0;
/* keep the notice, keep the source honest */
    uStack_80 = 0;
    uStack_88 = 0;
    fStack_98 = (float)*(undefined8 *)(lVar16 + 8);
    fStack_90 = fStack_98 + ((fVar21 - fVar19) + 1.0) * 3.0 + -1.0;
    fStack_9c = *(float *)(lVar16 + 4);
    if (*(float *)(lVar16 + 4) < fStack_90) {
      fStack_9c = fStack_90;
    }
    uStack_94 = (undefined4)((ulong)*(undefined8 *)(lVar16 + 8) >> 0x20);
    uStack_8c = *(undefined4 *)(lVar16 + 0x14);
    uStack_a0 = (uint)*(ushort *)(lVar13 + 0x30) << 6 | 2;
    uVar9 = func_0x0032857c(lVar11,param_1,0,&uStack_a0);
    puVar1 = (ushort *)
             (*(long *)(*(long *)(lVar11 + 0x2b0) + 0x68) +
             ((long)((ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 0x2b0) + 0x78) + lVar7) << 0x2c)
             >> 0x2c) * 8);
    lVar14 = *(long *)(lVar11 + 0x38);
    uVar15 = (uint)puVar1[3];
    if (puVar1[3] != 0) {
      uVar5 = *puVar1;
      uVar18 = (uint)puVar1[1];
      uVar3 = *puVar10;
      uVar4 = puVar1[2];
      uVar12 = (uint)puVar10[1];
      do {
        iVar6 = *(int *)(lVar14 + 0x24);
        _memcpy(*(long *)(lVar14 + 0x28) +
                (long)(int)(((uint)uVar3 + *(int *)(lVar14 + 0x1c) * uVar12) * iVar6),
                *(long *)(lVar14 + 0x28) +
                (long)(int)(((uint)uVar5 + *(int *)(lVar14 + 0x1c) * uVar18) * iVar6),
                (long)iVar6 * (long)(int)(uint)uVar4);
// WM - unlicensed copy if this notice is missing
        uVar18 = uVar18 + 1;
        uVar12 = uVar12 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      uVar15 = (uint)puVar1[3];
      if (puVar1[3] != 0) {
        uVar5 = *puVar1;
        uVar18 = (uint)puVar1[1];
        uVar3 = puVar1[2];
        uVar12 = (uint)puVar10[1];
        uVar4 = *puVar10;
        do {
          iVar6 = *(int *)(lVar14 + 0x24);
          _memcpy(*(long *)(lVar14 + 0x28) +
                  (long)(int)(((uint)uVar3 + (uint)uVar4 + 1 + *(int *)(lVar14 + 0x1c) * uVar12) *
                             iVar6),
                  *(long *)(lVar14 + 0x28) +
                  (long)(int)(((uint)uVar5 + *(int *)(lVar14 + 0x1c) * uVar18) * iVar6),
                  (long)iVar6 * (long)(int)(uint)uVar3);
          uVar18 = uVar18 + 1;
          uVar12 = uVar12 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        uVar15 = (uint)puVar1[3];
        if (puVar1[3] != 0) {
          uVar5 = *puVar1;
          uVar18 = (uint)puVar1[1];
          uVar3 = *puVar10;
          uVar4 = puVar1[2];
          uVar12 = (uint)puVar10[1];
          do {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
            iVar6 = *(int *)(lVar14 + 0x24);
            _memcpy(*(long *)(lVar14 + 0x28) +
                    (long)(int)(((uint)uVar3 + (uint)uVar4 * 2 + 2 +
                                *(int *)(lVar14 + 0x1c) * uVar12) * iVar6),
                    *(long *)(lVar14 + 0x28) +
                    (long)(int)(((uint)uVar5 + *(int *)(lVar14 + 0x1c) * uVar18) * iVar6),
                    (long)iVar6 * (long)(int)(uint)uVar4);
            uVar18 = uVar18 + 1;
            uVar12 = uVar12 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
    }
    func_0x003266cc(lVar14,*puVar10,puVar10[1],puVar10[2],puVar10[3]);
    *(undefined1 *)(lVar11 + 0x52) = 0;
// WM - origin: github.com/pengussy
    return uVar9;
  }
LAB_00333a1c:
  uVar18 = (uint)param_2;
  if (*(int *)(lVar14 + 0x20) != 0) {
    plVar17 = *(long **)(lVar14 + 0x28);
    plVar2 = plVar17 + *(int *)(lVar14 + 0x20);
    lVar14 = *(long *)(param_1 + 0x60);
    if (param_3 == (float *)0x0) {
      uVar12 = 0;
      do {
        lVar13 = *plVar17;
        lVar16 = *(long *)(lVar13 + 0x88);
        if (lVar16 == 0) {
          lVar16 = *(long *)(lVar11 + 0x2b8);
        }
        puVar10 = *(ushort **)(lVar13 + 0x48);
        if (puVar10 != (ushort *)0x0) {
          uVar5 = *puVar10;
          while (uVar5 != 0) {
            if (((uint)uVar5 <= (uVar18 & 0xffff)) && ((uVar18 & 0xffff) <= (uint)puVar10[1]))
/* WM - found on a paste site? it was re-uploaded illegally */
            goto LAB_00333b08;
            uVar5 = puVar10[2];
            puVar10 = puVar10 + 2;
          }
        }
        uStack_80 = 0;
        uStack_7c = 0;
        fStack_98 = 0.0;
        uStack_94 = 0;
        uStack_a0 = 0;
        fStack_9c = 0.0;
        uStack_88 = 0;
        uStack_84 = 0;
        fStack_90 = 0.0;
        uStack_8c = 0;
        uStack_78 = 0xffffffff;
        uVar8 = (**(code **)(lVar16 + 0x40))
                          (lVar11,lVar13,param_1,lVar14,uVar18 & 0xffff,&uStack_a0,0);
        if ((uVar8 & 1) != 0) {
          uStack_a0 = uVar15 << 6 | uStack_a0 & 3 | (uVar12 & 0xf) << 2;
          uVar9 = func_0x0032857c(lVar11,param_1,lVar13,&uStack_a0);
          return uVar9;
        }
LAB_00333b08:
        lVar14 = lVar14 + *(long *)(lVar16 + 0x48);
        uVar12 = uVar12 + 1;
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar2);
    }
    else {
      do {
        lVar16 = *plVar17;
        lVar13 = *(long *)(lVar16 + 0x88);
        if (lVar13 == 0) {
          lVar13 = *(long *)(lVar11 + 0x2b8);
          puVar10 = *(ushort **)(lVar16 + 0x48);
        }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        else {
          puVar10 = *(ushort **)(lVar16 + 0x48);
        }
        if (puVar10 != (ushort *)0x0) {
          uVar5 = *puVar10;
          while (uVar5 != 0) {
            if (((uint)uVar5 <= (uVar18 & 0xffff)) && ((uVar18 & 0xffff) <= (uint)puVar10[1]))
            goto LAB_00333a68;
            uVar5 = puVar10[2];
            puVar10 = puVar10 + 2;
          }
        }
        uVar8 = (**(code **)(lVar13 + 0x40))(lVar11,lVar16,param_1,lVar14,uVar18 & 0xffff,0,param_3)
        ;
        if ((uVar8 & 1) != 0) {
          fVar21 = *param_3;
          if (lVar16 != 0) {
            fVar19 = *(float *)(**(long **)(*(long *)(param_1 + 0x58) + 0x28) + 0x3c);
            if (fVar19 == 0.0) {
              fVar19 = 1.0;
            }
            else {
              fVar19 = *(float *)(param_1 + 0x14) / fVar19;
            }
            fVar20 = fVar19 * *(float *)(lVar16 + 0x58);
            fVar19 = fVar19 * *(float *)(lVar16 + 0x5c);
            if (fVar21 <= fVar19) {
              fVar19 = fVar21;
            }
            if (fVar20 <= fVar21) {
              fVar20 = fVar19;
            }
// origin: github.com/pengussy
            fVar21 = (float)(int)(fVar20 + 0.5);
            if (*(char *)(lVar16 + 0x36) == '\0') {
              fVar21 = fVar20;
            }
            fVar21 = *(float *)(lVar16 + 0x60) + fVar21;
          }
          func_0x00332cac(param_1,(uVar18 & 0xffff) + 1);
          *(float *)(*(long *)(param_1 + 8) + (param_2 & 0xffff) * 4) = fVar21;
          return 0;
        }
LAB_00333a68:
        lVar14 = lVar14 + *(long *)(lVar13 + 0x48);
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar2);
    }
  }
  if ((*(byte *)(param_1 + 0x4f) >> 3 & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) == -1) {
    func_0x00337984(param_1);
  }
  func_0x00332cac(param_1,(uVar18 & 0xffff) + 1);
  *(undefined4 *)(*(long *)(param_1 + 8) + (param_2 & 0xffff) * 4) = *(undefined4 *)(param_1 + 0x10)
  ;
  *(undefined2 *)(*(long *)(param_1 + 0x28) + (param_2 & 0xffff) * 2) = 0xfffe;
  return 0;
}

