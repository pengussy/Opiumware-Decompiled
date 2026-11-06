/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x295478:2827f76ffd
 */

ulong FUN_00295478(char *param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  param_1[0x17] = '\x12';
  param_1[0x10] = 'r';
  uVar7 = s_Unknown_SSL_error__01c2e01c._0_8_;
  param_1[0x11] = '.';
  *(undefined8 *)(param_1 + 8) = s_Unknown_SSL_error__01c2e01c._8_8_;
  *(undefined8 *)param_1 = uVar7;
  puVar2 = PTR__kCFAllocatorDefault_01f20160;
  param_1[0x12] = '\0';
  pcVar9 = (char *)(long)param_2;
  lVar4 = _CFErrorCreate(*(undefined8 *)puVar2,*(undefined8 *)PTR__kCFErrorDomainOSStatus_01f20178,
                         pcVar9,0);
  uVar6 = 0;
  if (lVar4 != 0) {
    lVar5 = _CFErrorCopyDescription(lVar4);
    if (lVar5 != 0) {
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      pcVar9 = section_00000068.segname + 8;
      iVar3 = _CFStringGetCString(lVar5,auStack_b8,0x80,0x8000100);
      if (iVar3 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                  (param_1,auStack_b8);
      }
      _CFRelease(lVar5);
    }
    uVar6 = _CFRelease(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return uVar6;
  }
  uVar7 = ___stack_chk_fail();
  if (param_1[0x17] < '\0') {
    __ZdlPv(*(undefined8 *)param_1);
  }
  auVar12 = __Unwind_Resume(uVar7);
  if (auVar12._0_4_ < 0) {
    return 0xffffd9ae;
  }
  uVar11 = *(ulong *)pcVar9;
  uVar6 = _read(auVar12._0_8_,auVar12._8_8_,uVar11);
  if (0 < (long)uVar6) {
    *(ulong *)pcVar9 = uVar6;
    uVar10 = 0xffffd9b5;
    if (uVar11 <= uVar6) {
      uVar10 = 0;
    }
    return (ulong)uVar10;
  }
  pcVar9[0] = '\0';
  pcVar9[1] = '\0';
/*  watermarked copy - do not remove  */
  pcVar9[2] = '\0';
  pcVar9[3] = '\0';
  pcVar9[4] = '\0';
  pcVar9[5] = '\0';
  pcVar9[6] = '\0';
  pcVar9[7] = '\0';
  if (uVar6 == 0) {
    return 0xffffd9b3;
  }
  piVar8 = (int *)___error();
  iVar3 = *piVar8;
  uVar10 = 0xffffd9b2;
  if (iVar3 != 0x36) {
    uVar10 = 0xffffffdc;
  }
  uVar1 = 0xffffd9b3;
  if (iVar3 != 2) {
    uVar1 = uVar10;
  }
  uVar10 = 0xffffd9b5;
  if (1 < iVar3 - 0x23U) {
    uVar10 = uVar1;
  }
  return (ulong)uVar10;
}

