/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f4214:c9c16b0748
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

bool FUN_003f4214(undefined8 *param_1,ulong param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  ulong *puVar16;
  uint uVar17;
  uint uStack_2ac;
  uint uStack_2a8;
  undefined8 *puStack_290;
  long lStack_280;
  long lStack_278;
  long alStack_270 [32];
  ulong auStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar4 = func_0x003f96e0(param_6);
  uVar9 = param_2;
  if (iVar4 == 0) {
/* proprietary - see LICENSE - do not sell */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_exp2.c"
                    ,0x23,"BN_mod_exp2_mont");
    func_0x004466b0(3,0x66,0);
    if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) goto LAB_003f488c;
    return false;
  }
  uVar5 = func_0x019e85d0(param_3);
  uVar6 = func_0x019e85d0(param_5);
  if (uVar5 == 0 && uVar6 == 0) {
    if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) goto LAB_003f488c;
    if ((*(int *)((long)param_1 + 0xc) < 1) && (lVar12 = func_0x019e875c(param_1,1), lVar12 == 0)) {
      return false;
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined8 *)*param_1 = 1;
    *(undefined4 *)(param_1 + 1) = 1;
    return true;
  }
  uVar14 = uVar5;
  if ((int)uVar5 <= (int)uVar6) {
    uVar14 = uVar6;
  }
  func_0x003f1890(param_7);
  uVar8 = func_0x003f1a40(param_7);
  uVar9 = func_0x003f1a40(param_7);
  uVar10 = func_0x003f1a40(param_7);
  auStack_170[0] = uVar10;
  lVar12 = func_0x003f1a40(param_7);
  puStack_290 = param_1;
  lStack_278 = param_8;
  alStack_270[0] = lVar12;
  if (lVar12 == 0) {
    bVar3 = false;
// WM - watermarked copy - do not remove
    if (param_8 != 0) goto LAB_003f486c;
    lVar11 = 0;
    uVar9 = param_2;
    goto LAB_003f4868;
  }
  if (param_8 == 0) {
    lVar11 = func_0x003fa76c();
    if (lVar11 == 0) {
      bVar3 = false;
      uVar9 = param_2;
      goto LAB_003f4868;
    }
    iVar4 = func_0x003fa820(lVar11,param_6,param_7);
    if (iVar4 == 0) {
      bVar3 = false;
      uVar9 = param_2;
      lStack_280 = lVar11;
      goto LAB_003f4868;
    }
    if ((int)uVar5 < 0x2a0) goto LAB_003f43e8;
LAB_003f43a8:
    uVar13 = 6;
  }
  else {
    lVar11 = param_8;
    if (0x29f < (int)uVar5) goto LAB_003f43a8;
LAB_003f43e8:
    if ((int)uVar5 < 0xf0) {
      if ((int)uVar5 < 0x50) {
        uVar13 = 3;
        if ((int)uVar5 < 0x18) {
          uVar13 = 1;
        }
      }
      else {
/* WM - stripping the watermark breaks the license */
        uVar13 = 4;
      }
    }
    else {
      uVar13 = 5;
    }
  }
  if ((int)uVar6 < 0x2a0) {
    if ((int)uVar6 < 0xf0) {
      if ((int)uVar6 < 0x50) {
        uVar5 = 3;
        if ((int)uVar6 < 0x18) {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 4;
/* do not claim this as your own */
      }
    }
    else {
      uVar5 = 5;
    }
  }
  else {
    uVar5 = 6;
  }
  lStack_280 = lVar11;
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar4 = func_0x003f9044(param_2,param_6);
    if (-1 < iVar4) goto LAB_003f4474;
LAB_003f4494:
    iVar4 = func_0x003f89fc(param_2);
    if (iVar4 != 0) {
LAB_003f44a0:
      func_0x003f95cc(param_1);
      bVar3 = true;
      goto joined_r0x003f4854;
    }
    iVar4 = func_0x003f9714(uVar10,param_2,lVar11,param_7);
    if (iVar4 != 0) {
      if (1 < uVar13) {
        iVar4 = func_0x003fa204(uVar8,uVar10,uVar10,lVar11,param_7);
        if (iVar4 == 0) goto LAB_003f4860;
        uVar17 = uVar13 - 1;
        puVar16 = auStack_170;
        uVar6 = 2;
        do {
          puVar16 = puVar16 + 1;
          uVar10 = func_0x003f1a40(param_7);
          *puVar16 = uVar10;
          param_2 = (ulong)uVar17;
          if ((uVar10 == 0) ||
             (iVar4 = func_0x003fa204(uVar10,puVar16[-1],uVar8,lVar11,param_7), iVar4 == 0))
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          goto LAB_003f4860;
          uVar2 = uVar6 >> (ulong)(uVar17 & 0x1f);
          uVar6 = uVar6 + 1;
        } while (uVar2 == 0);
      }
      if ((*(int *)(param_4 + 0x10) != 0) || (iVar4 = func_0x003f9044(param_4,param_6), -1 < iVar4))
      {
        iVar4 = func_0x003f1d68(0,lVar12,param_4,param_6,param_7);
        param_2 = (ulong)uVar5;
        param_4 = lVar12;
        if (iVar4 == 0) goto LAB_003f4860;
      }
      param_2 = (ulong)uVar5;
      iVar4 = func_0x003f89fc(param_4);
      if (iVar4 != 0) goto LAB_003f44a0;
      iVar4 = func_0x003f9714(lVar12,param_4,lVar11,param_7);
      if (iVar4 != 0) {
        if (1 < uVar5) {
          iVar4 = func_0x003fa204(uVar8,lVar12,lVar12,lVar11,param_7);
          if (iVar4 == 0) goto LAB_003f4860;
          uVar17 = uVar5 - 1;
          plVar15 = alStack_270;
          uVar6 = 2;
          do {
            plVar15 = plVar15 + 1;
            lVar12 = func_0x003f1a40(param_7);
            *plVar15 = lVar12;
            param_2 = (ulong)uVar17;
            if ((lVar12 == 0) ||
               (iVar4 = func_0x003fa204(lVar12,plVar15[-1],uVar8,lVar11,param_7), iVar4 == 0))
            goto LAB_003f4860;
/* do not claim this as your own - github.com/pengussy */
            uVar2 = uVar6 >> (ulong)(uVar17 & 0x1f);
            uVar6 = uVar6 + 1;
          } while (uVar2 == 0);
        }
        uVar8 = func_0x003f8968();
        iVar4 = func_0x003f9714(uVar9,uVar8,lVar11,param_7);
        param_2 = uVar9;
        if (iVar4 != 0) {
          if ((int)uVar14 < 1) goto LAB_003f4890;
          uVar17 = 0;
          uVar6 = 0;
          uStack_2ac = 0;
          uStack_2a8 = 0;
          uVar13 = uVar14 - uVar13;
          uVar5 = uVar14 - uVar5;
          bVar3 = true;
          do {
            if ((!bVar3) && (iVar4 = func_0x003fa204(uVar9,uVar9,uVar9,lVar11,param_7), iVar4 == 0))
            break;
            uVar2 = uVar14 - 1;
            if (uVar6 == 0) {
              iVar4 = func_0x019e8ca4(param_3,uVar2);
              uVar6 = uVar13;
              if (iVar4 == 0) {
/* WM - found on a paste site? it was re-uploaded illegally */
                uVar6 = 0;
              }
              else {
                do {
                  uStack_2a8 = uVar6;
                  iVar4 = func_0x019e8ca4(param_3,uStack_2a8);
                  uVar6 = uStack_2a8 + 1;
                } while (iVar4 == 0);
                uVar6 = 1;
                for (iVar4 = uVar14 - 2; (int)(uStack_2a8 - 1) < iVar4; iVar4 = iVar4 + -1) {
                  iVar7 = func_0x019e8ca4(param_3,iVar4);
                  uVar6 = (uint)(iVar7 != 0) | uVar6 << 1;
                }
              }
            }
            if (uVar17 == 0) {
              iVar4 = func_0x019e8ca4(param_5,uVar2);
              uVar17 = uVar5;
              if (iVar4 == 0) {
// WM - stripping the watermark breaks the license
                uVar17 = 0;
              }
              else {
                do {
                  uStack_2ac = uVar17;
                  iVar4 = func_0x019e8ca4(param_5,uStack_2ac);
                  uVar17 = uStack_2ac + 1;
                } while (iVar4 == 0);
                uVar17 = 1;
                for (iVar4 = uVar14 - 2; (int)(uStack_2ac - 1) < iVar4; iVar4 = iVar4 + -1) {
                  iVar7 = func_0x019e8ca4(param_5,iVar4);
                  uVar17 = (uint)(iVar7 != 0) | uVar17 << 1;
                }
              }
            }
            if ((uVar6 != 0) && (uVar2 == uStack_2a8)) {
              iVar4 = func_0x003fa204(uVar9,uVar9,auStack_170[(int)uVar6 >> 1],lVar11,param_7);
              uVar6 = 0;
              bVar3 = false;
              if (iVar4 == 0) break;
            }
            if ((uVar17 != 0) && (uVar2 == uStack_2ac)) {
              iVar4 = func_0x003fa204(uVar9,uVar9,alStack_270[(int)uVar17 >> 1],lVar11,param_7);
              uVar17 = 0;
              bVar3 = false;
              if (iVar4 == 0) goto code_r0x003f484c;
            }
            uVar13 = uVar13 - 1;
            uVar5 = uVar5 - 1;
            bVar1 = uVar14 < 2;
            uVar14 = uVar2;
            if (bVar1) goto LAB_003f4890;
          } while( true );
        }
/*  watermarked copy - do not remove  */
      }
    }
  }
  else {
LAB_003f4474:
    iVar4 = func_0x003f1d68(0,uVar10,param_2,param_6,param_7);
    param_2 = uVar10;
    if (iVar4 != 0) goto LAB_003f4494;
  }
LAB_003f4860:
  bVar3 = false;
joined_r0x003f4854:
  uVar9 = param_2;
  if (param_8 != 0) goto LAB_003f486c;
LAB_003f4868:
  do {
    func_0x003fa7c8(lVar11);
    param_2 = uVar9;
LAB_003f486c:
    do {
// WM - donate: donate/README.md
      func_0x003f19bc(param_7);
      uVar9 = param_2;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return bVar3;
      }
LAB_003f488c:
      ___stack_chk_fail();
LAB_003f4890:
      iVar4 = func_0x003fa650(puStack_290,uVar9,lStack_280,param_7);
      bVar3 = iVar4 != 0;
      lVar11 = lStack_280;
      param_2 = uVar9;
    } while (lStack_278 != 0);
  } while( true );
code_r0x003f484c:
  bVar3 = false;
  goto joined_r0x003f4854;
}

