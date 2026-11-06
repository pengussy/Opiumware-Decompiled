/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x215b0:b14f9e266b
   =========================================================================== */

undefined8 FUN_000215b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  int iStack_70;
  uint uStack_6c;
/*  more drops soon - github.com/pengussy  */
  long *plStack_68;
  
  plStack_68 = (long *)0x0;
  iVar3 = func_0x00006280(&UNK_01ad7f9c,&UNK_01ad7fb0,&plStack_68);
  if (iVar3 < 0) {
    puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar10 = &UNK_01dbcdf0;
    *(int *)(puVar10 + 1) = iVar3;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[2] = 0;
    ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
  }
  else {
    iVar3 = (**(code **)(*plStack_68 + 0x18))(plStack_68,*param_2);
    if (iVar3 < 0) {
      puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
      *puVar10 = &UNK_01dbcdf0;
      *(int *)(puVar10 + 1) = iVar3;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[2] = 0;
      ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
    }
    else {
      iVar3 = (**(code **)(*plStack_68 + 0x20))(plStack_68,&uStack_6c);
      if (-1 < iVar3) {
        if (uStack_6c != 0) {
          uVar15 = 0;
          do {
            iVar3 = (**(code **)(*plStack_68 + 0x28))(plStack_68,uVar15,&iStack_70);
            if (iVar3 < 0) {
              puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
              *puVar10 = &UNK_01dbcdf0;
              *(int *)(puVar10 + 1) = iVar3;
              puVar10[3] = 0;
              puVar10[4] = 0;
              puVar10[2] = 0;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
              ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
              goto LAB_00021a0c;
            }
            if (iStack_70 == 0x30535452) {
              plStack_78 = (long *)0x0;
              iVar3 = (**(code **)(*plStack_68 + 0x30))(plStack_68,uVar15,&plStack_78);
              if (iVar3 < 0) {
                puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
                *puVar10 = &UNK_01dbcdf0;
                *(int *)(puVar10 + 1) = iVar3;
                puVar10[3] = 0;
                puVar10[4] = 0;
                puVar10[2] = 0;
                ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
                goto LAB_00021a0c;
              }
              uVar4 = (**(code **)(*plStack_78 + 0x18))();
              uVar5 = (**(code **)(*plStack_78 + 0x20))();
              uStack_88 = 0;
              uStack_80 = 0;
              func_0x011e4f74(&uStack_88,uVar4,uVar5);
              puStack_a0 = (undefined1 *)0x0;
              puStack_98 = (undefined1 *)0x0;
              puStack_90 = (undefined1 *)0x0;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              puVar6 = (undefined1 *)func_0x011e4e34(&uStack_88);
              lVar7 = func_0x011e4e34(&uStack_88);
              uVar8 = func_0x011e4e44(&uStack_88);
              puVar12 = puStack_98;
              puVar14 = puStack_a0;
              puVar1 = (undefined1 *)(lVar7 + (uVar8 & 0xffffffff));
              uVar16 = (long)puVar1 - (long)puVar6;
              if ((ulong)((long)puStack_90 - (long)puStack_a0) < uVar16) {
                if (puStack_a0 != (undefined1 *)0x0) {
                  puStack_98 = puStack_a0;
                  __ZdlPv(puStack_a0);
                  puStack_a0 = (undefined1 *)0x0;
                  puStack_98 = (undefined1 *)0x0;
                  puStack_90 = (undefined1 *)0x0;
                }
                if ((long)uVar16 < 0) {
                  FUN_0000abb4();
                  goto LAB_00021a0c;
/* watermarked copy - do not remove - github.com/pengussy */
                }
                uVar8 = (long)puStack_90 * 2;
                if ((ulong)((long)puStack_90 * 2) <= uVar16) {
                  uVar8 = uVar16;
                }
                if ((undefined1 *)0x3ffffffffffffffe < puStack_90) {
                  uVar8 = 0x7fffffffffffffff;
                }
                puVar9 = (undefined1 *)__Znwm(uVar8);
                puStack_90 = puVar9 + uVar8;
                puStack_a0 = puVar9;
                if (puVar6 != puVar1) {
                  puStack_98 = puVar9;
                  _memcpy(puVar9,puVar6,uVar16);
                  puVar9 = puVar9 + uVar16;
                }
              }
              else {
                uVar18 = (long)puStack_98 - (long)puStack_a0;
                if (uVar18 < uVar16) {
                  puVar17 = puVar6 + uVar18;
                  _memmove(puStack_a0,puVar6,uVar18);
                  puVar9 = puStack_98;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                  if (puVar17 != puVar1) {
                    puVar11 = puVar14 + (((uVar8 & 0xffffffff) + lVar7) -
                                        (long)(puVar12 + (long)puVar6));
                    if (((undefined1 *)0x3f < puVar11) &&
                       (0x3f < (ulong)((long)(puVar14 + (long)puStack_98) -
                                      (long)(puVar12 + (long)puVar6)))) {
                      puVar12 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffffc0);
                      puVar17 = puVar17 + (long)puVar12;
                      puVar9 = puStack_98 + (long)puVar12;
                      puVar10 = (undefined8 *)(puStack_98 + 0x20);
                      puVar13 = (undefined8 *)(puVar6 + uVar18 + 0x20);
                      puVar14 = puVar12;
                      do {
                        uVar4 = puVar13[-4];
                        uVar19 = puVar13[-1];
                        uVar5 = puVar13[-2];
                        uVar21 = puVar13[1];
                        uVar20 = *puVar13;
                        uVar23 = puVar13[3];
                        uVar22 = puVar13[2];
                        puVar10[-3] = puVar13[-3];
/*  watermarked copy - do not remove  */
                        puVar10[-4] = uVar4;
                        puVar10[-1] = uVar19;
                        puVar10[-2] = uVar5;
                        puVar10[1] = uVar21;
                        *puVar10 = uVar20;
                        puVar10[3] = uVar23;
                        puVar10[2] = uVar22;
                        puVar14 = puVar14 + -0x40;
                        puVar10 = puVar10 + 8;
                        puVar13 = puVar13 + 8;
                      } while (puVar14 != (undefined1 *)0x0);
                      if (puVar11 == puVar12) goto LAB_00021860;
                    }
                    puVar14 = puVar9;
                    do {
                      puVar12 = puVar17 + 1;
                      puVar9 = puVar14 + 1;
                      *puVar14 = *puVar17;
                      puVar14 = puVar9;
                      puVar17 = puVar12;
                    } while (puVar12 != puVar1);
                  }
                }
                else {
                  _memmove(puStack_a0,puVar6,uVar16);
                  puVar9 = puVar14 + uVar16;
                }
              }
/* stripping the watermark breaks the license */
LAB_00021860:
              puStack_98 = puVar9;
              func_0x015b0660(param_1,&puStack_a0);
              if (puStack_a0 != (undefined1 *)0x0) {
                puStack_98 = puStack_a0;
                __ZdlPv();
              }
              func_0x011e4d14(&uStack_88);
              if (plStack_78 != (long *)0x0) {
                (**(code **)(*plStack_78 + 0x10))();
              }
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uStack_6c);
        }
        if (plStack_68 != (long *)0x0) {
          (**(code **)(*plStack_68 + 0x10))();
        }
        return 0;
      }
      puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
      *puVar10 = &UNK_01dbcdf0;
      *(int *)(puVar10 + 1) = iVar3;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[2] = 0;
      ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
    }
  }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
LAB_00021a0c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x21a10);
  (*pcVar2)();
}

