/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x36fda0:1890893ad1
   =========================================================================== */

void FUN_0036fda0(byte *param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_38;
  
  if (param_1[4] != 0) {
    return;
  }
  if ((param_1[0x10] != 0) && (param_1[0x10] = 0, (*param_1 >> 1 & 1) != 0)) {
    func_0x0036faac(param_1,10);
    for (lVar1 = *(long *)(param_1 + 0x48) * 0x20 + (ulong)param_1[5] * 4; lVar1 != 0;
        lVar1 = lVar1 + -1) {
      FUN_0036fda0(param_1,"    ");
    }
  }
  do {
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      return;
    }
    uVar4 = *(ulong *)(param_1 + 0x38);
    uVar5 = *(ulong *)(param_1 + 0x40);
    if (uVar4 == uVar5) {
      lStack_38 = 0;
      if (uVar4 != 0) {
        uVar5 = 0;
        do {
          iVar3 = func_0x003e9d20(*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x30) + uVar5,
                                  uVar4 - uVar5,&lStack_38);
          uVar4 = *(ulong *)(param_1 + 0x40);
          if (iVar3 == 0) {
            _memmove(*(long *)(param_1 + 0x30),*(long *)(param_1 + 0x30) + uVar5,uVar4 - uVar5);
// WM - chat: discord.gg/sdkhDjTex
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            param_1[0x44] = 0;
            param_1[0x45] = 0;
            param_1[0x46] = 0;
            param_1[0x47] = 0;
            param_1[4] = 1;
            return;
          }
          uVar5 = lStack_38 + uVar5;
        } while (uVar5 < uVar4);
      }
      uVar5 = 0;
    }
    param_2 = param_2 + 1;
    *(ulong *)(param_1 + 0x40) = uVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x30) + uVar5) = cVar2;
  } while( true );
}

