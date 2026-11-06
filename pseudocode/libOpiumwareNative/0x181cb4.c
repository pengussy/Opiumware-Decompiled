/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x181cb4:e30bfc92b3
 */

undefined8 FUN_00181cb4(long param_1,ulong param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  long *plVar14;
  ulong unaff_x21;
  undefined1 auVar15 [16];
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  char cStack_189;
  ulong uStack_188;
  undefined8 *puStack_180;
  undefined1 uStack_171;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined1 auStack_130 [32];
  byte *pbStack_110;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
/* origin: github.com/pengussy */
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 *apuStack_78 [2];
  char cStack_61;
  undefined1 auStack_60 [16];
  undefined1 uStack_49;
  undefined8 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  plVar14 = (long *)(param_1 + 8);
  ppuStack_48 = (undefined8 **)
                CONCAT44(ppuStack_48._4_4_,(int)((ulong)(*(long *)(param_1 + 0x10) - *plVar14) >> 3)
                        );
  apuStack_78[0] = (undefined8 *)((ulong)apuStack_78[0] & 0xffffffffffffff00);
  plVar4 = *(long **)(param_1 + 0x78);
  if (plVar4 != (long *)0x0) {
    uStack_49 = (**(code **)(*plVar4 + 0x30))(plVar4,&ppuStack_48,apuStack_78,param_1 + 0x88);
    func_0x00181b98(param_1 + 0x20,&uStack_49);
    ppuStack_48 = (undefined8 **)CONCAT71(ppuStack_48._1_7_,1);
    auStack_60 = func_0x0018292c(param_1,&ppuStack_48,1);
    puStack_40 = auStack_60 + 8;
    apuStack_78[0] = *(undefined8 **)(param_1 + 0x10);
    ppuStack_48 = apuStack_78;
    uStack_38 = plVar14;
    if (apuStack_78[0] < *(undefined8 **)(param_1 + 0x18)) {
/* donate: donate/README.md */
      puVar8 = apuStack_78[0] + 1;
      *apuStack_78[0] = auStack_60._8_8_;
      *(undefined8 **)(param_1 + 0x10) = puVar8;
    }
    else {
      func_0x0000aad8(&ppuStack_48);
      *(undefined8 **)(param_1 + 0x10) = apuStack_78[0];
      puVar8 = apuStack_78[0];
    }
    if ((param_2 != 0xffffffffffffffff) && ((byte *)puVar8[-1] != (byte *)0x0)) {
      uVar11 = (ulong)*(byte *)puVar8[-1];
      if (uVar11 < 3) {
        uVar11 = *(ulong *)(&UNK_01ad9ce8 + uVar11 * 8);
      }
      else {
        uVar11 = 1;
      }
      if (uVar11 < param_2) {
        uVar5 = ___cxa_allocate_exception(0x20);
        __ZNSt3__19to_stringEm(apuStack_78,param_2);
        func_0x00182d08(&ppuStack_48,"excessive object size: ",apuStack_78);
        FUN_00182b38(uVar5,0x198,&ppuStack_48,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
/* wm:no support for modified copies */
        ___cxa_throw(uVar5,&UNK_01dbfdb0,&DAT_001828fc);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x181e34);
        (*pcVar2)();
      }
    }
    return 1;
  }
  uVar5 = func_0x001717b4();
  if (uStack_38._7_1_ < '\0') goto LAB_00181e58;
  if (cStack_61 < '\0') goto LAB_00181e68;
  do {
    while( true ) {
      if ((unaff_x21 & 1) != 0) {
        ___cxa_free_exception(plVar14);
        lVar6 = __Unwind_Resume(uVar5);
/* origin: github.com/pengussy - github.com/pengussy */
        if (*(long *)(*(long *)(lVar6 + 0x10) + -8) != 0) {
          uStack_f0 = (byte *)CONCAT44(uStack_f0._4_4_,
                                       (int)((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8))
                                            >> 3) + -1);
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,1);
          plVar4 = *(long **)(lVar6 + 0x78);
          if (plVar4 == (long *)0x0) {
            func_0x001717b4();
            auVar15 = func_0x00006858();
            puVar10 = auVar15._8_8_;
            lVar6 = auVar15._0_8_;
            puStack_180 = (undefined8 *)0x0;
            uStack_188 = 3;
            puVar8 = (undefined8 *)__Znwm(0x18);
            if (*(char *)((long)puVar10 + 0x17) < '\0') {
              func_0x00017ae8(puVar8,*puVar10,puVar10[1]);
            }
            else {
              uVar5 = *puVar10;
              puVar8[1] = puVar10[1];
              *puVar8 = uVar5;
              puVar8[2] = puVar10[2];
            }
            uStack_168 = CONCAT44(uStack_168._4_4_,
                                  (int)((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8)) >> 3
// keep the notice, keep the source honest
                                       ));
            puStack_170 = (undefined8 *)CONCAT71(puStack_170._1_7_,4);
            plVar4 = *(long **)(lVar6 + 0x78);
            puStack_180 = puVar8;
            if (plVar4 == (long *)0x0) {
              func_0x001717b4();
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x182278);
              (*pcVar2)();
            }
            cStack_189 = (**(code **)(*plVar4 + 0x30))(plVar4,&uStack_168,&puStack_170,&uStack_188);
            func_0x00181b98(lVar6 + 0x38,&cStack_189);
            if ((cStack_189 == '\x01') && (*(long *)(*(long *)(lVar6 + 0x10) + -8) != 0)) {
              func_0x0018358c(auStack_1a0,lVar6 + 0x88);
              uStack_168 = *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x10) + -8) + 8);
              puStack_170 = puVar10;
              lVar9 = func_0x00184e14(&uStack_168,puVar10,&UNK_01bd2568,&puStack_170,&uStack_171);
              puVar12 = (undefined1 *)(lVar9 + 0x38);
              uVar1 = *puVar12;
              *puVar12 = auStack_1a0[0];
              uVar5 = *(undefined8 *)(lVar9 + 0x40);
              *(undefined8 *)(lVar9 + 0x40) = uStack_198;
              *(undefined1 **)(lVar6 + 0x50) = puVar12;
              auStack_1a0[0] = uVar1;
              uStack_198 = uVar5;
              func_0x00183bbc(&uStack_198);
            }
            func_0x00183bbc(&puStack_180,uStack_188 & 0xff);
            return 1;
          }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar11 = (**(code **)(*plVar4 + 0x30))(plVar4,&uStack_f0,&pbStack_110);
          if ((uVar11 & 1) == 0) {
            func_0x0018358c(auStack_d0,lVar6 + 0x88);
            puVar12 = *(undefined1 **)(*(long *)(lVar6 + 0x10) + -8);
            uVar1 = *puVar12;
            *puVar12 = auStack_d0[0];
            uVar5 = *(undefined8 *)(puVar12 + 8);
            *(undefined8 *)(puVar12 + 8) = uStack_c8;
            auStack_d0[0] = uVar1;
            uStack_c8 = uVar5;
            func_0x00183bbc(&uStack_c8);
          }
        }
        lVar9 = *(long *)(lVar6 + 0x10);
        lVar13 = lVar9 + -8;
        *(long *)(lVar6 + 0x10) = lVar13;
        *(long *)(lVar6 + 0x28) = *(long *)(lVar6 + 0x28) + -1;
        if (*(long *)(lVar6 + 8) == lVar13) {
          return 1;
        }
        uStack_f0 = *(byte **)(lVar9 + -0x10);
        if (uStack_f0 == (byte *)0x0) {
          return 1;
        }
        if (1 < *uStack_f0 - 1) {
          return 1;
        }
        plStack_e8 = (long *)0x0;
        plStack_e0 = (long *)0x0;
        lStack_d8 = -0x8000000000000000;
        if (*uStack_f0 == 1) {
          plStack_e8 = (long *)**(long **)(uStack_f0 + 8);
        }
        else {
          plStack_e0 = (long *)**(long **)(uStack_f0 + 8);
        }
// proprietary - see LICENSE - do not sell
        while( true ) {
          pbStack_110 = *(byte **)(lVar13 + -8);
          plStack_108 = (long *)0x0;
          plStack_100 = (long *)0x0;
          lStack_f8 = 0x8000000000000000;
          if (*pbStack_110 == 2) {
            plStack_100 = *(long **)(*(long *)(pbStack_110 + 8) + 8);
            uVar11 = func_0x00184138(&uStack_f0,&pbStack_110);
          }
          else if (*pbStack_110 == 1) {
            plStack_108 = (long *)(*(long *)(pbStack_110 + 8) + 8);
            uVar11 = func_0x00184138(&uStack_f0,&pbStack_110);
          }
          else {
            lStack_f8 = 1;
            uVar11 = func_0x00184138(&uStack_f0,&pbStack_110);
          }
          if ((uVar11 & 1) != 0) break;
          pcVar7 = (char *)func_0x00183168(&uStack_f0);
          if (*pcVar7 == '\t') {
            pbStack_110 = uStack_f0;
            plStack_100 = plStack_e0;
            plStack_108 = plStack_e8;
            lStack_f8 = lStack_d8;
            FUN_00183268(auStack_130,*(undefined8 *)(*(long *)(lVar6 + 0x10) + -8),&pbStack_110);
            return 1;
          }
          if (*uStack_f0 == 2) {
            lVar13 = *(long *)(lVar6 + 0x10);
            plStack_e0 = plStack_e0 + 2;
          }
          else if (*uStack_f0 == 1) {
            plVar4 = (long *)plStack_e8[1];
            if ((long *)plStack_e8[1] == (long *)0x0) {
              do {
                plVar14 = (long *)plStack_e8[2];
/* wm:reversing this took months of machine time */
                bVar3 = plStack_e8 != (long *)*plVar14;
                plStack_e8 = plVar14;
              } while (bVar3);
            }
            else {
              do {
                plVar14 = plVar4;
                plVar4 = (long *)*plVar14;
              } while ((long *)*plVar14 != (long *)0x0);
            }
            lVar13 = *(long *)(lVar6 + 0x10);
            plStack_e8 = plVar14;
          }
          else {
            lStack_d8 = lStack_d8 + 1;
            lVar13 = *(long *)(lVar6 + 0x10);
          }
        }
        return 1;
      }
      __Unwind_Resume(uVar5);
LAB_00181e58:
      __ZdlPv(ppuStack_48);
      if (-1 < cStack_61) break;
LAB_00181e68:
      __ZdlPv(apuStack_78[0]);
    }
  } while( true );
}

