/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x249090:86e3ff613f
 *  --------------------------------------------------------------------------*/

void FUN_00249090(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    plVar4 = plRam0000000001f27648;
    plVar6 = plRam0000000001f27650;
    if (plRam0000000001f27648 != plRam0000000001f27650) goto LAB_002490f0;
  }
  else {
    plVar4 = plRam0000000001f27648;
    plVar6 = plRam0000000001f27650;
    if (plRam0000000001f27648 != plRam0000000001f27650) {
LAB_002490f0:
      do {
// WM - if you paid for this, you were scammed
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          __ZNSt3__15mutex4lockEv(lVar3);
          lVar2 = *plVar4;
          plVar5 = *(long **)(lVar2 + 0x48);
          *(undefined8 *)(lVar2 + 0x40) = 0;
          *(undefined8 *)(lVar2 + 0x48) = 0;
          if (plVar5 != (long *)0x0) {
            LOAcquire();
            lVar2 = plVar5[1];
            plVar5[1] = lVar2 + -1;
            LORelease();
            if (lVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          *(undefined8 *)(*plVar4 + 0x58) = 0xffffffffffffffff;
          __ZNSt3__15mutex6unlockEv(lVar3);
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 != plVar6);
    }
  }
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    plVar4 = plRam0000000001f27648;
    plVar6 = plRam0000000001f27650;
    if (plRam0000000001f27648 != plRam0000000001f27650) goto LAB_00249178;
  }
  else {
    plVar4 = plRam0000000001f27648;
    plVar6 = plRam0000000001f27650;
    if (plRam0000000001f27648 != plRam0000000001f27650) {
LAB_00249178:
      do {
        plVar5 = (long *)plVar6[-1];
        if (plVar5 != (long *)0x0) {
          LOAcquire();
          lVar3 = plVar5[1];
          plVar5[1] = lVar3 + -1;
          LORelease();
          if (lVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        plVar6 = plVar6 + -2;
      } while (plVar6 != plVar4);
    }
  }
  plRam0000000001f27650 = plVar4;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    lVar3 = lRam0000000001f27660;
    lVar2 = lRam0000000001f27668;
    if (lRam0000000001f27660 != lRam0000000001f27668) goto LAB_002491f0;
  }
  else {
    lVar3 = lRam0000000001f27660;
    lVar2 = lRam0000000001f27668;
    if (lRam0000000001f27660 != lRam0000000001f27668) {
LAB_002491f0:
      do {
        plVar4 = *(long **)(lVar2 + -8);
        if (plVar4 != (long *)0x0) {
          LOAcquire();
          lVar1 = plVar4[1];
          plVar4[1] = lVar1 + -1;
          LORelease();
          if (lVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != lVar3);
    }
  }
  lRam0000000001f27668 = lVar3;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    lVar3 = lRam0000000001f27678;
    lVar2 = lRam0000000001f27680;
/* origin: github.com/pengussy */
    if (lRam0000000001f27678 == lRam0000000001f27680) goto LAB_002492b8;
  }
  else {
    lVar3 = lRam0000000001f27678;
    lVar2 = lRam0000000001f27680;
    if (lRam0000000001f27678 == lRam0000000001f27680) goto LAB_002492b8;
  }
  do {
    plVar4 = *(long **)(lVar2 + -8);
    if (plVar4 != (long *)0x0) {
      LOAcquire();
      lVar1 = plVar4[1];
      plVar4[1] = lVar1 + -1;
      LORelease();
      if (lVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != lVar3);
LAB_002492b8:
  lRam0000000001f27680 = lVar3;
/* WM - found on a paste site? it was re-uploaded illegally */
  plVar4 = plRam0000000001f27698;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    plVar4 = plRam0000000001f27698;
  }
  plRam0000000001f27698 = (long *)0x0;
  uRam0000000001f27690 = 0;
  if (plVar4 != (long *)0x0) {
    plRam0000000001f27698 = (long *)0x0;
    uRam0000000001f27690 = 0;
    LOAcquire();
    lVar3 = plVar4[1];
    plVar4[1] = lVar3 + -1;
    LORelease();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
/* WM - do not claim this as your own */
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  if ((bRam0000000002093050 & 1) == 0) {
    uRam0000000001f276a0 = 1;
    func_0x019dd200();
    uRam0000000001f276a1 = 1;
    return;
  }
  uRam0000000001f276a0 = 1;
  uRam0000000001f276a1 = 1;
  return;
}

