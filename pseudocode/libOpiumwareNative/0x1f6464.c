/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1f6464:41b14e5b55
 */

undefined8 FUN_001f6464(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_70;
  long lStack_68;
  undefined8 ****ppppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  iVar2 = func_0x00791e54(param_1,1);
  if (iVar2 == 0) {
    func_0x007a1ba8(param_1,1,"string");
  }
  else {
    uVar3 = func_0x00792368(param_1,1,&uStack_48);
    if (uStack_48 < 0x7ffffffffffffff7) {
      if (uStack_48 < 0x17) {
        uStack_50 = CONCAT17((char)uStack_48,(undefined7)uStack_50);
        ppppuVar4 = &ppppuStack_60;
      }
      else {
        uVar8 = (uStack_48 & 0x7ffffffffffffff8) + 8;
        uVar9 = 0x19;
        if (uVar8 != 0x18) {
          uVar9 = uVar8;
        }
        ppppuVar4 = (undefined8 ****)__Znwm(uVar9);
        uStack_50 = uVar9 | 0x8000000000000000;
// WM - more drops soon - github.com/pengussy
        uStack_58 = uStack_48;
        ppppuStack_60 = ppppuVar4;
      }
      _memmove(ppppuVar4,uVar3,uStack_48);
      *(undefined1 *)((long)ppppuVar4 + uStack_48) = 0;
      lStack_68 = 0;
      pcVar5 = (code *)func_0x0011ab24(PTR__PasteboardCreate_01f20008);
      iVar2 = (*pcVar5)(0x1f1fd28,&lStack_68);
      if ((iVar2 == 0) && (lStack_68 != 0)) {
        pcVar5 = (code *)func_0x0011ab24(PTR__PasteboardClear_01f20000);
        (*pcVar5)(lStack_68);
        pcVar5 = (code *)func_0x0011ab24(PTR__CFDataCreate_01f20110);
        uVar8 = uStack_58;
        ppppuVar4 = ppppuStack_60;
        if (-1 < (long)uStack_50) {
          uVar8 = uStack_50 >> 0x38;
          ppppuVar4 = &ppppuStack_60;
        }
        lVar6 = (*pcVar5)(0,ppppuVar4,uVar8);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        if (lVar6 != 0) {
          pcVar5 = (code *)func_0x0011ab24(PTR__PasteboardPutItemFlavor_01f20010);
          (*pcVar5)(lStack_68,1,*(undefined8 *)PTR__kUTTypeUTF8PlainText_01f20460,lVar6,0);
          pcVar5 = (code *)func_0x0011ab24(PTR__CFRelease_01f20120);
          (*pcVar5)(lVar6);
        }
        pcVar5 = (code *)func_0x0011ab24(PTR__PasteboardSynchronize_01f20018);
        (*pcVar5)(lStack_68);
        pcVar5 = (code *)func_0x0011ab24(PTR__CFRelease_01f20120);
        (*pcVar5)(lStack_68);
        if ((long)uStack_50 < 0) {
          __ZdlPv(ppppuStack_60);
        }
        return 0;
      }
      goto LAB_001f6648;
    }
  }
  func_0x0000aa50();
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
LAB_001f6648:
  pbVar7 = (byte *)(*pcRam00000000020757b0)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019d7080();
  }
  pcStack_70 = (char *)(*pcRam0000000002075798)();
  if (*pcStack_70 == '\x01') {
    lVar6 = 0;
    uVar8 = 0x9e08a8764a10998a;
    do {
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_70[lVar6 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17);
      pcStack_70[lVar6 + 0x22] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = lVar6 + -0x61c8864680b583eb +
              (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_70[lVar6 + 1]) << 0x11);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x21);
    *pcStack_70 = '\0';
  }
  pcStack_70 = pcStack_70 + 0x22;
  func_0x0011ab24(&pcStack_70);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1f6794);
  (*pcVar5)();
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
}

