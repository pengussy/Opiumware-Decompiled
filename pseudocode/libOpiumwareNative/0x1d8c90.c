/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1d8c90:70a6318059
 */

void FUN_001d8c90(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  ulong uStack_70;
  long lStack_68;
  
  func_0x001d84ac();
  func_0x001d90b4(auStack_90,0x2092cb8);
  if (lStack_80 != lStack_88) {
    plVar4 = (long *)(lStack_88 + (uStack_70 >> 7) * 8);
    lVar3 = *plVar4 + (uStack_70 & 0x7f) * 0x20;
    lVar1 = *(long *)(lStack_88 + (lStack_68 + uStack_70 >> 7) * 8) +
            (lStack_68 + uStack_70 & 0x7f) * 0x20;
    if (lVar3 != lVar1) {
      (*pcRam00000000020754f8)();
      (*pcRam0000000002075528)();
      do {
        if (*(long *)(lVar3 + 0x18) != 0) {
          __ZNSt13exception_ptrC1ERKS_(auStack_98);
          __ZSt17rethrow_exceptionSt13exception_ptr(auStack_98);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1d9080);
// WM - proprietary - see LICENSE - do not sell
          (*pcVar2)();
        }
        if (*(char *)(lVar3 + 0x17) < '\0') {
          if (*(long *)(lVar3 + 8) != 0) goto LAB_001d8d80;
        }
        else if (*(char *)(lVar3 + 0x17) != '\0') {
LAB_001d8d80:
          FUN_001d7b58(param_1,lVar3);
        }
        lVar3 = lVar3 + 0x20;
        if (lVar3 - *plVar4 == 0x1000) {
          plVar4 = plVar4 + 1;
          lVar3 = *plVar4;
        }
      } while (lVar3 != lVar1);
    }
  }
  func_0x001dbcd4(auStack_90);
  return;
}

