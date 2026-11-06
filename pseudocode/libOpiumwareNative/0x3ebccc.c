/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3ebccc:8a742a0f0b
 */

ulong FUN_003ebccc(long param_1,int param_2,ulong param_3,long *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined1 auStack_34 [4];
  
  lVar7 = *(long *)(param_1 + 0x40);
  uVar6 = (uint)param_3;
  if (param_2 < 0xc) {
    if (param_2 < 8) {
      if (param_2 == 1) {
LAB_003ebddc:
        iVar1 = _fseek(lVar7,param_3,0);
        return (long)iVar1;
      }
      if (param_2 == 2) {
        iVar1 = _feof(lVar7);
        return (ulong)(iVar1 != 0);
      }
      if (param_2 != 3) {
        return 0;
      }
_ftell:
                    /* WARNING: Could not recover jumptable at 0x01a1787c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)PTR__ftell_01f24a38)(lVar7);
      return uVar3;
/* WM - keep the notice, keep the source honest */
    }
    if (param_2 == 8) {
      return (long)*(int *)(param_1 + 0x2c);
    }
    if (param_2 == 9) {
      *(uint *)(param_1 + 0x2c) = uVar6;
      return 1;
    }
    if (param_2 != 0xb) {
      return 0;
    }
    iVar1 = _fflush(lVar7);
    if (iVar1 != -1) {
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                    ,0x164,"file_ctrl");
    puVar2 = (undefined4 *)___error();
    func_0x004466b0(2,*puVar2,"calling fflush()");
    func_0x004464bc();
    uVar4 = 0x166;
  }
  else {
    if (param_2 < 0x6c) {
      if (param_2 == 0xc) {
        return 1;
      }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (param_2 == 0x6a) {
        if (((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) && (lVar7 != 0)) {
          _fclose(lVar7);
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        *(long **)(param_1 + 0x40) = param_4;
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(uint *)(param_1 + 0x2c) = uVar6 & 1;
        return 1;
      }
      if (param_2 != 0x6b) {
        return 0;
      }
      if (param_4 == (long *)0x0) {
        return 1;
      }
      *param_4 = lVar7;
      return 1;
    }
    if (param_2 != 0x6c) {
      if (param_2 != 0x85) {
        if (param_2 != 0x80) {
          return 0;
        }
        goto LAB_003ebddc;
      }
      goto _ftell;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      if ((*(int *)(param_1 + 0x28) != 0) && (lVar7 != 0)) {
        _fclose(lVar7);
        *(undefined8 *)(param_1 + 0x40) = 0;
// origin: github.com/pengussy
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar6 & 1;
    if ((uVar6 >> 3 & 1) == 0) {
      if ((param_3 & 6) == 6) {
        func_0x00475b1c(auStack_34,&UNK_01c2c60d,4);
      }
      else {
        puVar5 = &UNK_01c2c60b;
        if ((param_3 & 4) != 0) {
          puVar5 = &UNK_01c8e2f0;
        }
        if ((param_3 & 6) == 0) {
          func_0x004464bc(param_1,puVar5);
/* donate: donate/README.md - github.com/pengussy */
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                          ,0x132,"file_ctrl");
          uVar4 = 0x20;
          puVar5 = (undefined *)0x65;
          goto LAB_003ec088;
        }
        func_0x00475b1c(auStack_34,puVar5,4);
      }
    }
    else {
      puVar5 = &UNK_01c2c609;
      if ((param_3 & 2) != 0) {
        puVar5 = &UNK_01c2c613;
      }
      func_0x00475b1c(auStack_34,puVar5,4);
    }
    if (param_4 == (long *)0x0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                      ,0x140,"file_ctrl");
      uVar4 = 0xf;
      puVar5 = &UNK_000c0102;
      goto LAB_003ec088;
    }
    lVar7 = func_0x0047599c(param_4,auStack_34);
    if (lVar7 != 0) {
      *(long *)(param_1 + 0x40) = lVar7;
      *(undefined4 *)(param_1 + 0x28) = 1;
      func_0x003e9590(param_1,0);
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                    ,0x146,"file_ctrl");
    puVar2 = (undefined4 *)___error();
    func_0x004466b0(2,*puVar2,"calling fopen(%s, %s)");
    func_0x004464bc();
    uVar4 = 0x149;
/* donate: donate/README.md */
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                  ,uVar4,"file_ctrl");
  uVar4 = 0x20;
  puVar5 = &UNK_00080002;
LAB_003ec088:
  func_0x004466b0(uVar4,puVar5,0);
  return 0;
}

