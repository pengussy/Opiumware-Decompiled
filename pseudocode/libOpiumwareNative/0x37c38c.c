/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37c38c:83283bb6a0
   =========================================================================== */

uint * FUN_0037c38c(uint *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint **ppuVar9;
  uint extraout_w1;
  uint uVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined *puVar13;
  uint uVar14;
  code *pcVar15;
  uint *puVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_c0 [16];
  uint *puStack_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  undefined1 auStack_98 [36];
  int iStack_74;
  uint *puStack_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint *puStack_58;
  uint *puStack_50;
  long lStack_48;
  
  puStack_58 = (uint *)0x0;
  puStack_60 = (uint *)0x0;
  lStack_48 = 0;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  puStack_50 = (uint *)0x0;
  uStack_68 = 0;
  puStack_70 = (uint *)0x0;
  if (param_1 == (uint *)0x0) {
    pcVar12 = "expect_quic_as";
    uVar11 = 0x115;
    puVar13 = &UNK_000c0102;
    ppuVar9 = (uint **)0x0;
    goto LAB_0037c490;
  }
  uVar4 = *param_1;
  iVar5 = (int)param_2;
  uVar10 = (uint)param_3;
  if (0x81 < (int)uVar4) {
    if (uVar4 == 0x82) {
      bVar2 = false;
      uStack_68 = *(undefined8 *)(param_1 + 0x1e);
      bVar3 = true;
      lStack_48 = 0x100000000;
      puStack_60 = param_1;
      goto joined_r0x0037c50c;
    }
    if (uVar4 != 0x83) goto LAB_0037c474;
    pcVar12 = "wrong_type";
    ppuVar9 = (uint **)0x0;
    uVar11 = 0xe1;
    goto LAB_0037c468;
  }
  if (uVar4 == 0x80) {
/* keep the notice, keep the source honest */
    auVar17 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x20),*(undefined1 (*) [16])(param_1 + 0x20)
                       ,8,1);
    puStack_60 = auVar17._8_8_;
    uStack_68 = auVar17._0_8_;
    puStack_50 = *(uint **)(param_1 + 0x2c);
    bVar3 = true;
    bVar2 = true;
    puStack_58 = param_1;
    if (0x48 < iVar5) goto LAB_0037c510;
LAB_0037c404:
    puVar6 = puStack_58;
    if (0x27 < iVar5) {
      if (iVar5 - 0x28U < 2) {
        return (uint *)0x0;
      }
      if (iVar5 == 0x34) {
        return (uint *)0x0;
      }
      goto LAB_0037c5e0;
    }
    if (iVar5 != 0x10) {
      if (iVar5 != 0x21) goto LAB_0037c5e0;
      if (bVar2) {
        if (bVar3) {
          puStack_58[0x56] = puStack_58[0x56] | uVar10;
        }
        if (puStack_50 != (uint *)0x0) {
          if ((puStack_50[0x22] & 4) != 0) {
/*  proprietary - see LICENSE - do not sell  */
            uVar10 = uVar10 & 0xfffffffe;
          }
          uVar4 = puStack_50[0x2a];
          puStack_50[0x2a] = uVar4 | uVar10;
          return (uint *)(ulong)(uVar4 | uVar10);
        }
LAB_0037c6dc:
        return (uint *)(ulong)puStack_58[0x56];
      }
      pcVar12 = "ossl_quic_ctrl";
      ppuVar9 = &puStack_70;
      uVar11 = 0x686;
      puStack_70 = param_1;
      goto LAB_0037c468;
    }
    if (!bVar2) {
      pcVar12 = "ossl_quic_ctrl";
      ppuVar9 = &puStack_70;
      uVar11 = 0x6aa;
      puStack_70 = param_1;
      goto LAB_0037c468;
    }
// WM - keep the notice, keep the source honest
    puStack_70 = param_1;
    func_0x0037863c(*(undefined8 *)(puStack_58 + 0x28),param_4);
    puVar6 = *(uint **)(puVar6 + 0x1e);
    param_2 = 0x10;
    bVar3 = false;
  }
  else {
    if (uVar4 != 0x81) {
LAB_0037c474:
      pcVar12 = "expect_quic_as";
      puVar13 = &UNK_000c0103;
      ppuVar9 = (uint **)0x0;
      uVar11 = 0x170;
      goto LAB_0037c490;
    }
    bVar3 = false;
    puStack_58 = *(uint **)(param_1 + 0x1e);
    auVar17 = NEON_ext(*(undefined1 (*) [16])(puStack_58 + 0x20),
                       *(undefined1 (*) [16])(puStack_58 + 0x20),8,1);
    puStack_60 = auVar17._8_8_;
    uStack_68 = auVar17._0_8_;
    bVar2 = true;
    lStack_48 = 1;
    puStack_50 = param_1;
joined_r0x0037c50c:
    if (iVar5 < 0x49) goto LAB_0037c404;
LAB_0037c510:
    if (iVar5 < 0x7d) {
      if (iVar5 == 0x49) {
        puStack_70 = param_1;
        uVar4 = func_0x0037be6c(param_1,param_4,&iStack_74);
        uVar10 = 0;
        if (iStack_74 == 0) {
          uVar10 = uVar4;
        }
        return (uint *)(ulong)uVar10;
// WM - reversing this took months of machine time
      }
      if (iVar5 == 0x4a) {
        puStack_70 = param_1;
        iVar5 = func_0x0037bdac();
        puVar6 = (uint *)((long)&MACH_HEADER.magic + 1);
        if (iVar5 == 0) {
          puVar6 = (uint *)0xffffffffffffffff;
        }
        return puVar6;
      }
      if (iVar5 == 0x4e) {
        if (bVar2) {
          if (bVar3) {
            puStack_58[0x56] = puStack_58[0x56] & (uVar10 ^ 0xffffffff);
          }
          if (puStack_50 != (uint *)0x0) {
            uVar10 = puStack_50[0x2a] & (uVar10 ^ 0xffffffff);
            puStack_50[0x2a] = uVar10;
            return (uint *)(ulong)uVar10;
          }
          goto LAB_0037c6dc;
        }
        pcVar12 = "ossl_quic_ctrl";
        ppuVar9 = &puStack_70;
        uVar11 = 0x69c;
        puStack_70 = param_1;
        goto LAB_0037c468;
      }
    }
    else if (iVar5 - 0x7dU < 2) {
      return (uint *)0x0;
    }
LAB_0037c5e0:
    if (!bVar2) {
      pcVar12 = "ossl_quic_ctrl";
      ppuVar9 = &puStack_70;
/* watermarked copy - do not remove */
      uVar11 = 0x6cf;
      puStack_70 = param_1;
LAB_0037c468:
      puVar13 = &UNK_0008010c;
LAB_0037c490:
      func_0x0037b358(ppuVar9,param_2,uVar11,pcVar12,puVar13,0);
      return (uint *)0x0;
    }
    bVar3 = true;
    puVar6 = puStack_58;
    puStack_70 = param_1;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar16 = puVar6;
  if (puVar6 == (uint *)0x0) goto code_r0x0035bbc4;
  if (*puVar6 == 0) {
code_r0x0035b804:
    if (bVar3) goto code_r0x0035b848;
code_r0x0035b840:
    puVar8 = puVar6;
    if (-1 < (char)*puVar6) goto code_r0x0035b848;
code_r0x0035bc08:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0035bc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar6 = (uint *)(**(code **)(*(long *)(puVar8 + 6) + 0x98))(puVar8,param_2);
      return puVar6;
    }
    goto code_r0x0035bc50;
  }
  if ((*puVar6 >> 7 & 1) == 0) {
/* WM - keep the notice, keep the source honest */
    puVar16 = (uint *)0x0;
    goto code_r0x0035b804;
  }
  puVar16 = (uint *)func_0x00380678();
  if (!bVar3) goto code_r0x0035b840;
code_r0x0035b848:
  puVar8 = puVar16;
  if (puVar8 == (uint *)0x0) {
code_r0x0035bbc0:
    puVar16 = (uint *)0x0;
  }
  else {
    iVar5 = (int)param_2 + -0x21;
    puVar7 = puVar8;
    switch(iVar5) {
    case 0:
code_r0x0035b874:
      puVar7[0x26e] = puVar7[0x26e] | uVar10;
      func_0x004784a8(auStack_98,"mode",puVar7 + 0x26e);
      func_0x00479f78(auStack_c0);
      uStack_68 = auStack_c0._8_8_;
      puStack_70 = auStack_c0._0_8_;
      puStack_58 = puStack_a8;
      puStack_60 = puStack_b0;
      puStack_50 = puStack_a0;
      (**(code **)(*(long *)(puVar7 + 0x38a) + 0x90))(*(undefined8 *)(puVar7 + 0x38e),auStack_98);
      puVar16 = (uint *)(ulong)puVar7[0x26e];
      break;
    default:
      if ((char)*puVar6 < '\0') {
        if (*puVar8 != 0) {
/* chat: discord.gg/sdkhDjTex */
          if ((*puVar8 >> 7 & 1) == 0) goto code_r0x0035bbc0;
          puVar7 = (uint *)func_0x00380678(puVar8);
        }
        if ((char)*puVar8 < '\0') goto code_r0x0035bc08;
        if (puVar7 == (uint *)0x0) goto code_r0x0035bbc0;
        puVar16 = puVar8;
        switch(iVar5) {
        case 0:
          goto code_r0x0035b874;
        case 0x11:
          goto code_r0x0035b98c;
        case 0x12:
          goto code_r0x0035ba6c;
        case 0x13:
          goto code_r0x0035ba84;
        case 0x2b:
          goto code_r0x0035ba24;
        case 0x2d:
          goto code_r0x0035bad0;
        case 0x42:
          goto code_r0x0035bb10;
        case 0x43:
/* WM - no support for modified copies */
          goto code_r0x0035babc;
        case 0x4d:
          goto code_r0x0035bba8;
        case 0x59:
          goto code_r0x0035ba48;
        case 0x5a:
          goto code_r0x0035bb24;
        case 0x5b:
          goto code_r0x0035b9ac;
        case 0x5c:
          goto code_r0x0035ba2c;
        case 0x5d:
          goto code_r0x0035bae0;
        case 0x61:
          goto code_r0x0035b9a4;
        case 0x62:
          goto code_r0x0035ba7c;
        case 0x67:
          goto code_r0x0035b994;
        }
      }
      else {
        puVar16 = puVar6;
      }
/* stripping the watermark breaks the license */
      puVar8 = puVar6;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0035b920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar6 = (uint *)(**(code **)(*(long *)(puVar16 + 6) + 0x98))(puVar16);
        return puVar6;
      }
      goto code_r0x0035bc50;
    case 7:
      puVar16 = (uint *)(long)(int)puVar8[0x396];
      break;
    case 8:
      puVar16 = (uint *)(long)(int)puVar8[0x396];
      puVar8[0x396] = uVar10;
      break;
    case 0x11:
code_r0x0035b98c:
      puVar16 = *(uint **)(puVar7 + 0x272);
      break;
    case 0x12:
code_r0x0035ba6c:
      if ((long)param_3 < 0) goto code_r0x0035bbc0;
// donate: donate/README.md
      puVar16 = *(uint **)(puVar7 + 0x272);
      *(ulong *)(puVar7 + 0x272) = param_3;
      break;
    case 0x13:
code_r0x0035ba84:
      if (param_3 - 0x4001 < 0xffffffffffffc1ff) goto code_r0x0035bbc0;
      *(ulong *)(puVar7 + 0x278) = param_3;
      if (param_3 < *(ulong *)(puVar7 + 0x276)) {
        *(ulong *)(puVar7 + 0x276) = param_3;
      }
      pcVar15 = *(code **)(*(long *)(puVar7 + 0x38c) + 0xa0);
      uVar11 = *(undefined8 *)(puVar7 + 0x390);
code_r0x0035bb00:
      (*pcVar15)(uVar11,param_3);
      puVar16 = (uint *)((long)&MACH_HEADER.magic + 1);
      break;
    case 0x2b:
code_r0x0035ba24:
      puVar16 = (uint *)(long)(int)puVar7[300];
      break;
    case 0x2d:
code_r0x0035bad0:
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      uVar10 = puVar7[0x26e] & (uVar10 ^ 0xffffffff);
      puVar16 = (uint *)(ulong)uVar10;
      puVar7[0x26e] = uVar10;
      break;
    case 0x42:
code_r0x0035bb10:
      uVar10 = *(uint *)(*(long *)(puVar7 + 0x220) + 0x1c) | uVar10;
      puVar16 = (uint *)(ulong)uVar10;
      *(uint *)(*(long *)(puVar7 + 0x220) + 0x1c) = uVar10;
      break;
    case 0x43:
code_r0x0035babc:
      uVar10 = *(uint *)(*(long *)(puVar7 + 0x220) + 0x1c) & (uVar10 ^ 0xffffffff);
      puVar16 = (uint *)(ulong)uVar10;
      *(uint *)(*(long *)(puVar7 + 0x220) + 0x1c) = uVar10;
      break;
    case 0x4d:
code_r0x0035bba8:
      if (param_4 == (long *)0x0) {
        puVar16 = (uint *)((long)&MACH_HEADER.magic + 2);
      }
      else {
        if (*(long *)(puVar7 + 0xe8) == 0) goto code_r0x0035bbc0;
        *param_4 = *(long *)(puVar7 + 0xe8);
        puVar16 = (uint *)(long)(int)puVar7[0xea];
      }
      break;
    case 0x59:
code_r0x0035ba48:
/* wm:if you paid for this, you were scammed */
      if (((*(long *)(puVar7 + 0x240) == 0) || (iVar5 = func_0x003a934c(), iVar5 != 0)) ||
         (iVar5 = func_0x003a9624(puVar7), iVar5 != 0)) {
        puVar16 = (uint *)0xffffffffffffffff;
      }
      else {
        puVar16 = (uint *)((ulong)*(uint *)(*(long *)(puVar7 + 0x240) + 0x378) & 1);
      }
      break;
    case 0x5a:
code_r0x0035bb24:
      puVar16 = (uint *)0x0;
      uVar4 = puVar7[0x270];
      uVar11 = nzcv;
      bVar3 = uVar4 >> 8 == 0xfe;
      nzcv = uVar11;
      if (((uVar4 == 0x100 || bVar3) || (uVar4 == 0 || uVar10 != 0x100 && uVar10 >> 8 != 0xfe)) &&
         (uVar10 == 0 || (uVar10 == 0 || uVar4 != 0x100 && !bVar3))) {
        uVar1 = **(undefined4 **)(puVar6 + 4);
        puVar7 = puVar7 + 0x26f;
code_r0x0035bb98:
        iVar5 = func_0x003b5fcc(uVar1,param_3,puVar7);
        puVar16 = (uint *)(ulong)(iVar5 != 0);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
      break;
    case 0x5b:
code_r0x0035b9ac:
      puVar16 = (uint *)0x0;
      uVar4 = puVar7[0x26f];
      uVar11 = nzcv;
      bVar3 = uVar10 >> 8 != 0xfe;
      nzcv = uVar11;
      if ((uVar4 == 0 || (uVar4 == 0 || uVar10 != 0x100 && bVar3)) &&
         ((uVar10 == 0x100 || !bVar3) || (uVar10 == 0 || uVar4 != 0x100 && uVar4 >> 8 != 0xfe))) {
        uVar1 = **(undefined4 **)(puVar6 + 4);
        puVar7 = puVar7 + 0x270;
        goto code_r0x0035bb98;
      }
      break;
    case 0x5c:
code_r0x0035ba2c:
      if (*(ulong *)(puVar7 + 0x278) <= param_3 - 1) goto code_r0x0035bbc0;
/* wm:stripping the watermark breaks the license */
      *(ulong *)(puVar7 + 0x276) = param_3;
      puVar16 = (uint *)((long)&MACH_HEADER.magic + 1);
      break;
    case 0x5d:
code_r0x0035bae0:
      if (param_3 - 0x21 < 0xffffffffffffffe0) goto code_r0x0035bbc0;
      *(ulong *)(puVar7 + 0x27a) = param_3;
      pcVar15 = *(code **)(*(long *)(puVar7 + 0x38a) + 0x78);
      if (pcVar15 != (code *)0x0) {
        uVar11 = *(undefined8 *)(puVar7 + 0x38e);
        goto code_r0x0035bb00;
      }
      puVar16 = (uint *)((long)&MACH_HEADER.magic + 1);
      break;
    case 0x61:
code_r0x0035b9a4:
      puVar16 = (uint *)(long)(int)puVar7[0x26f];
      break;
    case 0x62:
code_r0x0035ba7c:
      puVar16 = (uint *)(long)(int)puVar7[0x270];
      break;
    case 0x67:
code_r0x0035b994:
      puVar7[0x1a] = 8;
      puVar16 = (uint *)((long)&MACH_HEADER.magic + 1);
    }
/* WM - if you paid for this, you were scammed */
  }
code_r0x0035bbc4:
  puVar8 = puVar16;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return puVar16;
  }
code_r0x0035bc50:
  uVar4 = ___stack_chk_fail(puVar8);
  uVar14 = (uint)(extraout_w1 == 0x100 || extraout_w1 >> 8 == 0xfe);
  uVar10 = uVar14 ^ 1;
  if (uVar4 == 0) {
    uVar10 = 1;
  }
  bVar3 = uVar4 >> 8 == 0xfe;
  if (uVar4 == 0x100 || bVar3) {
    uVar10 = 1;
  }
  return (uint *)(ulong)(((uint)(extraout_w1 == 0) | (uVar4 == 0x100 || bVar3) ^ 0xffffffff | uVar14
                         ) & uVar10);
}
// WM - more drops soon - github.com/pengussy

