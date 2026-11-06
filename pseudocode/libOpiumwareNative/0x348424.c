/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x348424:f5bc61eb50
 */

undefined8 FUN_00348424(long param_1,long *param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (long *)0x0)) && (param_3 != (ulong *)0x0)) {
    plVar8 = *(long **)(param_1 + 0xb60);
    if ((plVar8 == (long *)0x0) || (*plVar8 == 0)) {
      lVar4 = 0;
      uVar7 = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = func_0x004dcb7c();
/* wm:proprietary - see LICENSE - do not sell */
      if (iVar1 == 0) {
        lVar4 = 0;
        uVar7 = 0;
        uVar2 = 1;
      }
      else {
        uVar7 = 0;
        iVar6 = 0;
        lVar5 = 0;
        do {
          lVar3 = func_0x004dcb90(*plVar8,iVar6);
          lVar4 = lVar5;
          if ((lVar3 != 0) && (*(int *)(lVar3 + 0x50) == 1)) {
            if ((CARRY8(uVar7,*(ulong *)(lVar3 + 0x58))) ||
               (lVar4 = func_0x019eb634(lVar5,*(ulong *)(lVar3 + 0x58) + uVar7,
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                        ,0x103), lVar4 == 0)) {
              func_0x004743e4(lVar5,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                              ,0x10f);
              lVar4 = 0;
              uVar7 = 0;
              uVar2 = 0;
              goto LAB_00348550;
            }
            _memcpy(lVar4 + uVar7,*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x58));
            uVar7 = *(long *)(lVar3 + 0x58) + uVar7;
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar4;
        } while (iVar1 != iVar6);
        uVar2 = 1;
      }
    }
LAB_00348550:
    *param_2 = lVar4;
    *param_3 = uVar7;
  }
// WM - unlicensed copy if this notice is missing
  return uVar2;
}

