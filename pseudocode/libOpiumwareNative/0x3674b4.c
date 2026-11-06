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
 *  file-id: 0x3674b4:0c8793616b
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x00367568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0036756c) */
/* WARNING: Removing unreachable block (ram,0x00367638) */
/* WARNING: Removing unreachable block (ram,0x00367654) */
/* WARNING: Removing unreachable block (ram,0x00367570) */
/* WARNING: Removing unreachable block (ram,0x00367688) */
/* WARNING: Removing unreachable block (ram,0x00367580) */
/* WARNING: Removing unreachable block (ram,0x00367694) */
/* WARNING: Removing unreachable block (ram,0x003676f8) */
/* WARNING: Removing unreachable block (ram,0x00367708) */
/* WARNING: Removing unreachable block (ram,0x0036770c) */
/* WARNING: Removing unreachable block (ram,0x00367710) */
/* WARNING: Removing unreachable block (ram,0x0036772c) */
/* WARNING: Removing unreachable block (ram,0x0036774c) */
/* WARNING: Removing unreachable block (ram,0x00367834) */
/* WARNING: Removing unreachable block (ram,0x00367770) */
/* WARNING: Removing unreachable block (ram,0x0036778c) */
/* WARNING: Removing unreachable block (ram,0x00367798) */
/* WARNING: Removing unreachable block (ram,0x0036779c) */
/* WARNING: Removing unreachable block (ram,0x0036769c) */
/* WARNING: Removing unreachable block (ram,0x00367588) */
/* WARNING: Removing unreachable block (ram,0x003676c8) */
/* WARNING: Removing unreachable block (ram,0x003676cc) */
/* WARNING: Removing unreachable block (ram,0x003676dc) */
/* WARNING: Removing unreachable block (ram,0x003676d4) */
/* WARNING: Removing unreachable block (ram,0x003676e0) */
/* WARNING: Removing unreachable block (ram,0x003677a4) */
/* WARNING: Removing unreachable block (ram,0x003677ac) */
/* WARNING: Removing unreachable block (ram,0x003676e8) */
/* WARNING: Removing unreachable block (ram,0x003677bc) */
/* reversing this took months of machine time - github.com/pengussy */
/* WARNING: Removing unreachable block (ram,0x003677c8) */
/* WARNING: Removing unreachable block (ram,0x003677d8) */
/* WARNING: Removing unreachable block (ram,0x003677f8) */
/* WARNING: Removing unreachable block (ram,0x00367814) */
/* WARNING: Removing unreachable block (ram,0x00367908) */
/* WARNING: Removing unreachable block (ram,0x00367938) */
/* WARNING: Removing unreachable block (ram,0x003679e4) */
/* WARNING: Removing unreachable block (ram,0x00367958) */
/* WARNING: Removing unreachable block (ram,0x003679fc) */
/* WARNING: Removing unreachable block (ram,0x00367978) */
/* WARNING: Removing unreachable block (ram,0x00367a14) */
/* WARNING: Removing unreachable block (ram,0x003679d0) */
/* WARNING: Removing unreachable block (ram,0x00367a1c) */
/* WARNING: Removing unreachable block (ram,0x00367a24) */
/* WARNING: Removing unreachable block (ram,0x003679d8) */
/* WARNING: Removing unreachable block (ram,0x00367828) */
/* WARNING: Removing unreachable block (ram,0x0036782c) */
/* WARNING: Removing unreachable block (ram,0x003676f4) */
/* WARNING: Removing unreachable block (ram,0x003675a8) */
/* WARNING: Removing unreachable block (ram,0x0036783c) */
/* WARNING: Removing unreachable block (ram,0x00367840) */
/* WARNING: Removing unreachable block (ram,0x00367844) */
/* WARNING: Removing unreachable block (ram,0x00367548) */

dword * FUN_003674b4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  int iVar2;
  dword *pdVar3;
  long lVar4;
  uint uVar5;
/* WM - found on a paste site? it was re-uploaded illegally */
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_3 == 0) {
    pdVar3 = (dword *)((long)&MACH_HEADER.magic + 3);
LAB_003675b0:
    func_0x00451f38(0);
    if ((int)pdVar3 - 3U < 4) goto LAB_003675c8;
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0xd40);
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
        (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000)) {
      pdVar3 = &MACH_HEADER.cputype;
      if ((0x1f < param_3) && (*(long *)(param_1 + 0xae8) == 0)) goto code_r0x00367a40;
      goto LAB_003675b0;
    }
    if (0x1f < param_3) goto code_r0x00367a40;
    pdVar3 = &MACH_HEADER.cputype;
    func_0x00451f38(0);
LAB_003675c8:
    pcVar7 = *(code **)(*(long *)(param_1 + 0xd40) + 0x448);
    if (pcVar7 != (code *)0x0) {
      if (0xf < param_3) {
        param_3 = 0x10;
      }
      iVar2 = (*pcVar7)(param_1,0,param_2,param_3,pdVar3,
                        *(undefined8 *)(*(long *)(param_1 + 0xd40) + 0x450));
/* if you paid for this, you were scammed - github.com/pengussy */
      uVar5 = (uint)pdVar3;
      if (iVar2 - 3U < 2) {
        if (uVar5 < 5) {
LAB_00367630:
          pdVar3 = (dword *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          uVar5 = 5;
          if (iVar2 != 3) {
            uVar5 = 6;
          }
          pdVar3 = (dword *)(ulong)uVar5;
        }
      }
      else if (iVar2 == 2) {
        uVar1 = 4;
        if (0xfffffffd < uVar5 - 5) {
          uVar1 = uVar5;
        }
        pdVar3 = (dword *)(ulong)uVar1;
        func_0x00361b60(0);
      }
      else {
        if (iVar2 != 1) goto LAB_00367630;
        func_0x00361b60(0);
        pdVar3 = (dword *)((long)&MACH_HEADER.magic + 2);
      }
    }
  }
/* wm:found on a paste site? it was re-uploaded illegally */
  if (((*(long *)(param_1 + 0xae8) == 0) ||
      ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0 &&
        (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)))) &&
     (((uint)pdVar3 < 7 && ((1 << (long)pdVar3 & 0x58U) != 0)))) {
    *(undefined4 *)(param_1 + 0xa68) = 1;
  }
  *param_6 = 0;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lVar6) {
    return pdVar3;
  }
  puVar8 = (undefined8 *)___stack_chk_fail();
code_r0x00367a40:
  pdVar3 = (dword *)func_0x019eb5a0(0x10,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                    ,0x1399);
  if (pdVar3 == (dword *)0x0) {
    return (dword *)0x0;
  }
  if ((puVar8[0x4b] == 0) && (puVar8[0x4a] != 0)) {
    iVar2 = func_0x0036dcf0(pdVar3);
    if (iVar2 != 0) {
      return pdVar3;
    }
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x0045cd38(*puVar8,"HMAC",puVar8[0x91]);
    if (lVar6 != 0) {
      lVar4 = func_0x0045c3d0(lVar6);
      *(long *)pdVar3 = lVar4;
/* proprietary - see LICENSE - do not sell */
      if (lVar4 != 0) {
        func_0x0045d0c0(lVar6);
        return pdVar3;
      }
    }
  }
  func_0x0045c4a8(*(long *)pdVar3);
  func_0x0045d0c0(lVar6);
  func_0x004743e4(pdVar3,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x13ae);
  return (dword *)0x0;
}

