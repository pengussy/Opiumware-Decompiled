/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x359df4:ecc5bab512
 */

uint * FUN_00359df4(uint *param_1,uint *param_2,uint *param_3)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_x19;
  uint *puVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 uStack0000000000000000;
  
  puVar8 = param_1;
  if (param_1 == (uint *)0x0) {
    if (param_2 == (uint *)0x0) {
LAB_00359e6c:
/* wm:no support for modified copies */
      if (param_3 == (uint *)0x0) {
        return (uint *)0x0;
      }
    }
  }
  else {
    puVar2 = param_1;
    if (*param_1 == 0) {
LAB_00359e50:
      puVar4 = *(uint **)(puVar2 + 0x14);
joined_r0x00359e58:
      if (param_2 != puVar4) goto LAB_00359ecc;
    }
    else {
      if ((*param_1 >> 7 & 1) != 0) {
        puVar2 = (uint *)func_0x00380678(param_1);
        if ((char)*param_1 < '\0') {
          puVar4 = (uint *)FUN_0037bc44(param_1);
        }
        else {
          puVar4 = (uint *)0x0;
          if (puVar2 != (uint *)0x0) goto LAB_00359e50;
        }
        goto joined_r0x00359e58;
      }
      if (param_2 != (uint *)0x0) goto LAB_00359ecc;
    }
    puVar2 = param_1;
    if (*param_1 == 0) {
// do not claim this as your own
LAB_00359ea4:
      if (*(long *)(puVar2 + 0x18) == 0) {
        puVar4 = *(uint **)(puVar2 + 0x16);
      }
      else {
        puVar4 = (uint *)func_0x003eaa8c(*(long *)(puVar2 + 0x18));
      }
    }
    else {
      if ((*param_1 >> 7 & 1) == 0) goto LAB_00359e6c;
      puVar2 = (uint *)func_0x00380678(param_1);
      if ((char)*param_1 < '\0') {
        puVar4 = (uint *)FUN_0037bcf8(param_1);
      }
      else {
        puVar4 = (uint *)0x0;
        if (puVar2 != (uint *)0x0) goto LAB_00359ea4;
      }
    }
    if (param_3 == puVar4) {
      return puVar4;
    }
  }
LAB_00359ecc:
  if (((param_2 != (uint *)0x0) && (param_2 == param_3)) &&
     (puVar2 = (uint *)func_0x003e9578(param_2), (int)puVar2 == 0)) {
    return puVar2;
  }
  if (param_1 == (uint *)0x0) goto LAB_00359d40;
  puVar2 = param_1;
  if (*param_1 == 0) {
LAB_00359f1c:
    puVar4 = *(uint **)(puVar2 + 0x14);
LAB_00359f20:
    if (param_2 == puVar4) goto LAB_00359d40;
// if you paid for this, you were scammed
LAB_00359f28:
    puVar2 = param_1;
    if (*param_1 != 0) {
      if ((*param_1 >> 7 & 1) != 0) {
        puVar2 = (uint *)func_0x00380678(param_1);
        if (-1 < (char)*param_1) {
          puVar4 = (uint *)0x0;
          if (puVar2 != (uint *)0x0) goto LAB_00359f60;
          goto LAB_00359f98;
        }
        puVar4 = (uint *)FUN_0037bcf8(param_1);
        uVar7 = *param_1;
        goto joined_r0x00359f78;
      }
      uVar7 = *param_1;
      if (param_3 == (uint *)0x0) goto LAB_0035a02c;
LAB_00359fa4:
      puVar2 = param_1;
      if (uVar7 == 0) {
LAB_00359fe0:
        func_0x003eaa98(*(undefined8 *)(puVar2 + 0x14));
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
        *(uint **)(puVar2 + 0x14) = param_2;
        (**(code **)(*(long *)(puVar2 + 0x38a) + 0x58))(*(undefined8 *)(puVar2 + 0x38e),param_2);
      }
      else if ((uVar7 >> 7 & 1) != 0) {
        puVar2 = (uint *)func_0x00380678(param_1);
        if ((char)*param_1 < '\0') {
          FUN_0037ba14(param_1,param_2);
        }
        else if (puVar2 != (uint *)0x0) goto LAB_00359fe0;
      }
      goto LAB_00359d40;
    }
LAB_00359f60:
    if (*(long *)(puVar2 + 0x18) == 0) {
      puVar4 = *(uint **)(puVar2 + 0x16);
LAB_00359f98:
      uVar7 = *param_1;
    }
    else {
      puVar4 = (uint *)func_0x003eaa8c(*(long *)(puVar2 + 0x18));
      uVar7 = *param_1;
    }
joined_r0x00359f78:
    if (param_3 != puVar4) goto LAB_00359fa4;
LAB_0035a02c:
    if (uVar7 == 0) {
      puVar2 = param_1;
LAB_0035a090:
      puVar2 = *(uint **)(puVar2 + 0x14);
LAB_0035a0b0:
      puVar4 = param_1;
      if (uVar7 != 0) goto LAB_0035a0b8;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
LAB_0035a0d8:
      if (*(long *)(puVar4 + 0x18) == 0) {
        puVar3 = *(uint **)(puVar4 + 0x16);
      }
      else {
        puVar3 = (uint *)func_0x003eaa8c(*(long *)(puVar4 + 0x18));
      }
LAB_0035a0fc:
      uVar7 = *param_1;
    }
    else {
      if ((uVar7 >> 7 & 1) != 0) {
        puVar2 = (uint *)func_0x00380678(param_1);
        uVar7 = *param_1;
        if ((uVar7 >> 7 & 1) == 0) {
          if (puVar2 != (uint *)0x0) goto LAB_0035a090;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
          puVar2 = (uint *)0x0;
        }
        else {
          puVar2 = (uint *)FUN_0037bc44(param_1);
          uVar7 = *param_1;
        }
        goto LAB_0035a0b0;
      }
      puVar2 = (uint *)0x0;
LAB_0035a0b8:
      if ((uVar7 >> 7 & 1) == 0) {
        puVar3 = (uint *)0x0;
        goto LAB_0035a0fc;
      }
      puVar4 = (uint *)func_0x00380678(param_1);
      uVar7 = *param_1;
      if ((uVar7 >> 7 & 1) != 0) {
        puVar3 = (uint *)FUN_0037bcf8(param_1);
        goto LAB_0035a0fc;
      }
      puVar3 = (uint *)0x0;
      if (puVar4 != (uint *)0x0) goto LAB_0035a0d8;
    }
    if (puVar2 == puVar3) goto LAB_00359fa4;
    if (uVar7 == 0) {
LAB_0035a138:
      func_0x003eaa98(*(undefined8 *)(puVar8 + 0x14));
      *(uint **)(puVar8 + 0x14) = param_2;
/* WM - more drops soon - github.com/pengussy */
                    /* WARNING: Could not recover jumptable at 0x0035a160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (uint *)(**(code **)(*(long *)(puVar8 + 0x38a) + 0x58))
                                 (*(undefined8 *)(puVar8 + 0x38e),param_2);
      return puVar8;
    }
    if ((uVar7 >> 7 & 1) == 0) {
      return puVar3;
    }
    puVar8 = (uint *)func_0x00380678(param_1);
    if (-1 < (char)*param_1) {
      if (puVar8 == (uint *)0x0) {
        return (uint *)0x0;
      }
      goto LAB_0035a138;
    }
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    if (param_1 == (uint *)0x0) {
      pcVar5 = "expect_quic_as";
      uVar9 = 0x115;
      iVar6 = 0xc0102;
      goto FUN_0037b358;
    }
    if (2 < *param_1 - 0x80) {
      if (*param_1 == 0x83) {
        pcVar5 = "wrong_type";
        param_1 = (uint *)0x0;
        uVar9 = 0xe1;
        iVar6 = 0x8010c;
      }
      else {
        pcVar5 = "expect_quic_as";
        iVar6 = 0xc0103;
        param_1 = (uint *)0x0;
        uVar9 = 0x170;
/* proprietary - see LICENSE - do not sell */
      }
      goto FUN_0037b358;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = (uint *)func_0x003754d8(uVar9);
    puVar8 = puVar2;
    if (((puVar2 == param_2) || (puVar8 = (uint *)FUN_00380cbc(uVar9,param_2), (int)puVar8 == 0)) ||
       (puVar8 = (uint *)func_0x003eaa98(puVar2), param_2 == (uint *)0x0)) {
      return puVar8;
    }
  }
  else {
    if ((*param_1 >> 7 & 1) == 0) {
      if (param_2 != (uint *)0x0) goto LAB_00359f28;
    }
    else {
      puVar2 = (uint *)func_0x00380678(param_1);
      if (-1 < (char)*param_1) {
        puVar4 = (uint *)0x0;
        if (puVar2 != (uint *)0x0) goto LAB_00359f1c;
        goto LAB_00359f20;
      }
      puVar2 = (uint *)FUN_0037bc44(param_1);
      if (param_2 != puVar2) goto LAB_00359f28;
    }
LAB_00359d40:
    if (param_1 == (uint *)0x0) {
      return puVar8;
    }
    uVar7 = *param_1;
    if (uVar7 == 0) {
code_r0x00359d9c:
      if (*(long *)(param_1 + 0x18) != 0) {
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        uVar9 = func_0x003ea974(*(undefined8 *)(param_1 + 0x16));
        *(undefined8 *)(param_1 + 0x16) = uVar9;
      }
      func_0x003eaa98();
      *(uint **)(param_1 + 0x16) = param_3;
      if (*(long *)(param_1 + 0x18) != 0) {
        param_3 = (uint *)func_0x003ea920(*(long *)(param_1 + 0x18),param_3);
        *(uint **)(param_1 + 0x16) = param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x00359de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (uint *)(**(code **)(*(long *)(param_1 + 0x38c) + 0x58))
                                 (*(undefined8 *)(param_1 + 0x390),param_3);
      return puVar8;
    }
    if ((uVar7 >> 7 & 1) == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)func_0x00380678();
      uVar7 = *param_1;
    }
    if ((uVar7 >> 7 & 1) == 0) {
      param_1 = puVar2;
/*  more drops soon - github.com/pengussy  */
      if (puVar2 == (uint *)0x0) {
        return puVar8;
      }
      goto code_r0x00359d9c;
    }
    if (param_1 == (uint *)0x0) {
      pcVar5 = "expect_quic_as";
      uVar9 = 0x115;
      iVar6 = 0xc0102;
FUN_0037b358:
      if (param_1 != (uint *)0x0) {
        if (param_1[0xd] != 0) {
          if (param_1[10] == 0) {
            if (*(long *)(param_1 + 6) != 0) {
              *(undefined4 *)(*(long *)(param_1 + 6) + 0x178) = 1;
            }
          }
          else if (*(long *)(param_1 + 8) != 0) {
/*  no support for modified copies  */
            *(undefined4 *)(*(long *)(param_1 + 8) + 0xb8) = 1;
          }
        }
        if ((iVar6 == 0xcf) && (*(long *)(param_1 + 6) != 0)) {
          func_0x00378014(*(undefined8 *)(*(long *)(param_1 + 6) + 0xa0));
        }
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                      ,uVar9,pcVar5);
      puVar8 = (uint *)func_0x004466d8(0x14,iVar6,0,&uStack0000000000000000);
      return puVar8;
    }
    if (2 < *param_1 - 0x80) {
      if (*param_1 == 0x83) {
        pcVar5 = "wrong_type";
// WM - do not claim this as your own
        param_1 = (uint *)0x0;
        uVar9 = 0xe1;
        iVar6 = 0x8010c;
      }
      else {
        pcVar5 = "expect_quic_as";
        iVar6 = 0xc0103;
        param_1 = (uint *)0x0;
        uVar9 = 0x170;
      }
      goto FUN_0037b358;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = (uint *)func_0x00374134(uVar9);
    puVar8 = puVar2;
    if (((puVar2 == param_3) || (puVar8 = (uint *)FUN_00380e18(uVar9,param_3), (int)puVar8 == 0)) ||
       (puVar8 = (uint *)func_0x003eaa98(puVar2), param_3 == (uint *)0x0)) {
      return puVar8;
    }
    param_2 = param_3;
  }
  if (param_2 == (uint *)0x0) {
    return (uint *)0xffffffffffffffff;
  }
  if ((*(long *)(param_2 + 2) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 2) + 0x40),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x2a9,"BIO_ctrl");
    func_0x004466b0(0x20,0x79,0);
    return (uint *)0xfffffffffffffffe;
  }
  pcVar1 = *(code **)(param_2 + 6);
  if (*(code **)(param_2 + 4) == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_003e96d8;
LAB_003e9694:
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    puVar8 = (uint *)(*pcVar1)(param_2,6,0,0,0x66,1,1,0,unaff_x22,unaff_x21,unaff_x20,unaff_x19,
                               unaff_x29,unaff_x30);
  }
  else {
    if (pcVar1 != (code *)0x0) goto LAB_003e9694;
    puVar8 = (uint *)(**(code **)(param_2 + 4))(param_2,6,0,0x66,1,1);
  }
  if ((long)puVar8 < 1) {
    return puVar8;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 2) + 0x40);
LAB_003e96d8:
  puVar8 = (uint *)(*UNRECOVERED_JUMPTABLE)(param_2,0x66,1);
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 6);
  if (*(code **)(param_2 + 4) == (code *)0x0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return puVar8;
    }
  }
  else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e9720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar8 = (uint *)(**(code **)(param_2 + 4))(param_2,0x86,0,0x66,1,puVar8);
    return puVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x003e9750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar8 = (uint *)(*UNRECOVERED_JUMPTABLE)(param_2,0x86,0,0,0x66,1,puVar8,0);
  return puVar8;
}

