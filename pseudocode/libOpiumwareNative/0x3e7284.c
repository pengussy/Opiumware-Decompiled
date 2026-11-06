/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e7284:4ed8ba5ec3
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x003e72d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003e72ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003e7314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003e72f0) */
/* WARNING: Removing unreachable block (ram,0x003e72d8) */
/* WARNING: Removing unreachable block (ram,0x003e7318) */

void FUN_003e7284(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)func_0x0047f8d4(5,1);
  if (plVar2 == (long *)0x0) {
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    func_0x0011ab24();
    plVar2 = (long *)func_0x0047f8d4(4,1);
    iVar1 = func_0x0047f98c(4,1,0);
    if (iVar1 == 0) {
      return;
    }
    uVar4 = 0x4a;
  }
  else if ((*plVar2 == 0) || (lVar3 = func_0x004dca9c(), lVar3 == 0)) {
    func_0x004dc3c0(*plVar2);
    uVar4 = 0x19d;
  }
  else {
    plVar2 = *(long **)(lVar3 + 0x448);
    uVar4 = 0x5f;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
// unlicensed copy if this notice is missing
    (*(code *)PTR__free_01f24a00)
              (plVar2,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
               ,uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

