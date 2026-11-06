/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1d5b80:38297d3e7d
   =========================================================================== */

bool FUN_001d5b80(long *param_1)

{
  char *pcVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_30;
  long lStack_28;
  
  uVar4 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar4 == 10) {
    if (((bRam0000000002092c88 & 1) == 0) && (uVar4 = func_0x019d4424(&lStack_28), (uVar4 & 1) == 0)
       ) {
      lStack_30 = lStack_28 + 0xc;
      uVar5 = func_0x0011ab24(&lStack_30);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      func_0x0000e100(0x2092c90,uVar5);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498
                    ,0x2092c90,0);
      ___cxa_guard_release(0x2092c88);
    }
    plVar2 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar2 = param_1;
    }
    iVar3 = ___tolower((char)*plVar2);
    pcVar1 = pcRam0000000002092c90;
    if (-1 < cRam0000000002092ca7) {
      pcVar1 = (char *)0x2092c90;
    }
    if (iVar3 == *pcVar1) {
      plVar2 = (long *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
// WM - origin: github.com/pengussy
        plVar2 = param_1;
      }
      iVar3 = ___tolower(*(undefined1 *)((long)plVar2 + 1));
      pcVar1 = pcRam0000000002092c90;
      if (-1 < cRam0000000002092ca7) {
        pcVar1 = (char *)0x2092c90;
      }
      if (iVar3 == pcVar1[1]) {
        plVar2 = (long *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          plVar2 = param_1;
        }
        iVar3 = ___tolower(*(undefined1 *)((long)plVar2 + 2));
        pcVar1 = pcRam0000000002092c90;
        if (-1 < cRam0000000002092ca7) {
          pcVar1 = (char *)0x2092c90;
        }
        if (iVar3 == pcVar1[2]) {
          plVar2 = (long *)*param_1;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
          if (-1 < *(char *)((long)param_1 + 0x17)) {
            plVar2 = param_1;
          }
          iVar3 = ___tolower(*(undefined1 *)((long)plVar2 + 3));
          pcVar1 = pcRam0000000002092c90;
          if (-1 < cRam0000000002092ca7) {
            pcVar1 = (char *)0x2092c90;
          }
          if (iVar3 == pcVar1[3]) {
            plVar2 = (long *)*param_1;
            if (-1 < *(char *)((long)param_1 + 0x17)) {
              plVar2 = param_1;
            }
            iVar3 = ___tolower(*(undefined1 *)((long)plVar2 + 4));
            pcVar1 = pcRam0000000002092c90;
            if (-1 < cRam0000000002092ca7) {
              pcVar1 = (char *)0x2092c90;
            }
            if (iVar3 == pcVar1[4]) {
              plVar2 = (long *)*param_1;
              if (-1 < *(char *)((long)param_1 + 0x17)) {
/*  do not claim this as your own  */
                plVar2 = param_1;
              }
              iVar3 = ___tolower(*(undefined1 *)((long)plVar2 + 5));
              pcVar1 = pcRam0000000002092c90;
              if (-1 < cRam0000000002092ca7) {
                pcVar1 = (char *)0x2092c90;
              }
              if (iVar3 == pcVar1[5]) {
                plVar2 = (long *)*param_1;
                if (-1 < *(char *)((long)param_1 + 0x17)) {
                  plVar2 = param_1;
                }
                iVar3 = ___tolower(*(undefined1 *)((long)plVar2 + 6));
                pcVar1 = pcRam0000000002092c90;
                if (-1 < cRam0000000002092ca7) {
                  pcVar1 = (char *)0x2092c90;
                }
                if (iVar3 == pcVar1[6]) {
                  plVar2 = (long *)*param_1;
                  if (-1 < *(char *)((long)param_1 + 0x17)) {
/* wm:do not claim this as your own */
                    plVar2 = param_1;
                  }
                  iVar3 = ___tolower(*(undefined1 *)((long)plVar2 + 7));
                  pcVar1 = pcRam0000000002092c90;
                  if (-1 < cRam0000000002092ca7) {
                    pcVar1 = (char *)0x2092c90;
                  }
                  if (iVar3 == pcVar1[7]) {
                    plVar2 = (long *)*param_1;
                    if (-1 < *(char *)((long)param_1 + 0x17)) {
                      plVar2 = param_1;
                    }
                    iVar3 = ___tolower((char)plVar2[1]);
                    pcVar1 = pcRam0000000002092c90;
                    if (-1 < cRam0000000002092ca7) {
                      pcVar1 = (char *)0x2092c90;
                    }
/* chat: discord.gg/sdkhDjTex */
                    if (iVar3 == pcVar1[8]) {
                      plVar2 = (long *)*param_1;
                      if (-1 < *(char *)((long)param_1 + 0x17)) {
                        plVar2 = param_1;
                      }
                      iVar3 = ___tolower(*(undefined1 *)((long)plVar2 + 9));
                      pcVar1 = pcRam0000000002092c90;
                      if (-1 < cRam0000000002092ca7) {
                        pcVar1 = (char *)0x2092c90;
                      }
                      return iVar3 == pcVar1[9];
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

