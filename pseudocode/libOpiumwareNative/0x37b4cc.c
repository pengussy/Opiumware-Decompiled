/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37b4cc:b91d335299
 */

/* WARNING: Possible PIC construction at 0x0037b534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0037b57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004dfbe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0037b538) */
/* WARNING: Removing unreachable block (ram,0x004dfbe4) */
/* WARNING: Removing unreachable block (ram,0x0037b380) */
/* WARNING: Removing unreachable block (ram,0x0037b388) */
/* WARNING: Removing unreachable block (ram,0x0037b3a4) */
/* WARNING: Removing unreachable block (ram,0x0037b3ac) */
/* WARNING: Removing unreachable block (ram,0x0037b390) */
/* WARNING: Removing unreachable block (ram,0x0037b398) */
/* WARNING: Removing unreachable block (ram,0x0037b3b4) */
/* WARNING: Removing unreachable block (ram,0x0037b3bc) */
/* WARNING: Removing unreachable block (ram,0x0037b3c4) */

void FUN_0037b4cc(int *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *unaff_x19;
  int *unaff_x20;
  long lVar9;
  int *piVar10;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 uStack0000000000000000;
  undefined1 auStack_b8 [128];
  
  puVar2 = auStack_b8;
  if (param_1 == (int *)0x0) {
    uVar6 = 0x115;
    uVar1 = 0xc0102;
    goto SUB_0037b358;
  }
  iVar3 = *param_1;
  if (iVar3 < 0x82) {
/*  thanks for reading - discord.gg/sdkhDjTex  */
    if (iVar3 == 0x80) {
      func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
      func_0x004dfb50();
      lVar9 = *(long *)(param_1 + 0x2c);
      if (lVar9 == 0) {
        if (((*(ushort *)(param_1 + 0x54) ^ 0xffff) & 9) == 0) {
          func_0x00389fac(param_1 + 0x4a);
          func_0x019e59c4(param_1 + 0x4a);
        }
        func_0x0037b414(param_1,1);
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x22);
          if (lVar9 == 0) {
            return;
          }
        }
/* wm:no support for modified copies */
        else {
          unaff_x30 = 0x37b580;
          register0x00000008 = (BADSPACEBASE *)(auStack_b8 + 0x88);
          unaff_x19 = param_1;
          unaff_x20 = param_1;
          unaff_x29 = puVar2 + 0xa8;
        }
      }
      else {
        func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
        func_0x004dfb80();
        unaff_x30 = 0x37b538;
        register0x00000008 = (BADSPACEBASE *)(auStack_b8 + 0x88);
        unaff_x19 = param_1;
        unaff_x20 = param_1;
        unaff_x29 = puVar2 + 0xa8;
      }
    }
    else {
      if (iVar3 != 0x81) goto LAB_0037b5ec;
      lVar9 = *(long *)(param_1 + 0x1e);
      func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
/* wm:origin: github.com/pengussy */
      func_0x004dfb50();
      *(long *)(lVar9 + 0x148) = *(long *)(lVar9 + 0x148) + -1;
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x101) - 1 < 2) &&
         (iVar3 = func_0x00388dc4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70),0), iVar3 == 0))
      {
        uVar6 = func_0x003754c8(*(undefined8 *)(lVar9 + 0xa0));
        func_0x00389850(uVar6,*(undefined8 *)(param_1 + 0x20),0);
      }
      lVar7 = *(long *)(param_1 + 0x20);
      uVar8 = *(ulong *)(lVar7 + 0x100);
      if (((uint)uVar8 >> 0x10 & 0xff) - 1 < 2) {
        uVar6 = func_0x003754c8(*(undefined8 *)(lVar9 + 0xa0));
        func_0x00389b44(uVar6,*(undefined8 *)(param_1 + 0x20),0);
        lVar7 = *(long *)(param_1 + 0x20);
        uVar8 = *(ulong *)(lVar7 + 0x100);
      }
      *(ulong *)(lVar7 + 0x100) = uVar8 | 0x2000000000;
/*  chat: discord.gg/sdkhDjTex  */
      uVar6 = func_0x003754c8(*(undefined8 *)(lVar9 + 0xa0));
      func_0x003894ac(uVar6,*(undefined8 *)(param_1 + 0x20));
      piVar10 = *(int **)(lVar9 + 0xb0);
      func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
      func_0x004dfb80();
      if (param_1 == piVar10) {
        return;
      }
    }
code_r0x003595e8:
    *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (lVar9 == 0) {
      return;
    }
    iVar3 = *(int *)(lVar9 + 0x20);
    *(int *)(lVar9 + 0x20) = iVar3 + -1;
    LORelease();
    if (iVar3 == 1) {
      DataMemoryBarrier(2,1);
    }
    else if (1 < iVar3) {
      return;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
      (**(code **)(*(long *)(lVar9 + 0x18) + 0x18))(lVar9);
    }
    func_0x0047320c(0,lVar9,lVar9 + 0x30);
    FUN_00358680(*(undefined8 *)(lVar9 + 8));
    func_0x00480488(*(undefined8 *)(lVar9 + 0x28));
    pcVar5 = 
    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
    ;
    uVar6 = 0x5d1;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  }
  else {
    if (iVar3 == 0x82) {
      uVar6 = *(undefined8 *)(param_1 + 0x22);
      func_0x003754d8(uVar6);
      func_0x003eaa98();
      func_0x00374134(uVar6);
      func_0x003eaa98();
      func_0x00381164(*(undefined8 *)(param_1 + 0x22));
      func_0x00380a08(*(undefined8 *)(param_1 + 0x22));
      lVar9 = *(long *)(param_1 + 0x1e);
      if (lVar9 != 0) goto code_r0x003595e8;
      func_0x0037a440(*(undefined8 *)(param_1 + 0x20));
      plVar4 = (long *)(param_1 + 0x24);
    }
    else {
      if (iVar3 != 0x83) {
LAB_0037b5ec:
        uVar1 = 0xc0103;
        uVar6 = 0x170;
SUB_0037b358:
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                        ,uVar6,"expect_quic_as");
        func_0x004466d8(0x14,uVar1,0,&uStack0000000000000000);
        return;
      }
      func_0x0037a440(*(undefined8 *)(param_1 + 0x1e));
      plVar4 = (long *)(param_1 + 0x20);
    }
    if (plVar4 == (long *)0x0) {
      return;
    }
    lVar9 = 0;
// WM - do not claim this as your own
    if (*plVar4 != 0) {
      _pthread_mutex_destroy();
      lVar9 = *plVar4;
    }
    pcVar5 = 
    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/thread/arch/thread_posix.c"
    ;
    uVar6 = 0x97;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)(lVar9,pcVar5,uVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

