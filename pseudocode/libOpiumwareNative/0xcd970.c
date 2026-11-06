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
 *  file-id: 0xcd970:899e1d4587
 *  --------------------------------------------------------------------------*/

void FUN_000cd970(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  long lStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined1 uStack_7f;
  ulong *puStack_78;
  ulong *puStack_70;
  
  if ((long *)*param_2 == (long *)0x0) {
    return;
  }
  if (((*(long *)*param_2 != lRam0000000001f270e0) || (cRam0000000002097053 != '\x01')) ||
     (cRam0000000001f270e8 != '\x01' || lRam0000000001f26f88 == 0)) {
LAB_000cda04:
    *(undefined1 *)(*param_2 + 0x39) = 1;
/*  more drops soon - github.com/pengussy  */
    return;
  }
  lVar5 = func_0x00791618();
  lVar6 = func_0x00791618(param_1);
  if (lVar5 != lVar6) goto LAB_000cda04;
  func_0x000cd42c(&puStack_78,*(undefined8 *)(*param_2 + 8));
  puVar11 = puStack_78;
  if (puStack_78 == puStack_70) {
    bVar2 = 0;
  }
  else {
    puVar7 = (undefined1 *)(*pcRam000000000205de10)();
    plVar8 = (long *)(*pcRam000000000205dde0)();
    bVar2 = 0;
LAB_000cda78:
    do {
      uVar12 = *puVar11;
      if (((*(long *)*param_2 != lRam0000000001f270e0) || (cRam0000000002097053 != '\x01')) ||
         (cRam0000000001f270e8 != '\x01' || lRam0000000001f26f88 == 0)) {
LAB_000cdc64:
        *(undefined1 *)(*param_2 + 0x39) = 1;
        break;
      }
      lVar5 = func_0x00791618();
      lVar6 = func_0x00791618(param_1);
      if (lVar5 != lVar6) goto LAB_000cdc64;
      __ZNSt3__15mutex4lockEv(0x1f26f20);
      puVar10 = puRam0000000001f26f68;
/* wm:donate: donate/README.md */
      if (puRam0000000001f26f68 == puRam0000000001f26f70) {
LAB_000cdb04:
        if ((puVar10 != puRam0000000001f26f70) && (*puVar10 <= *(ulong *)(*param_2 + 8))) {
          uVar12 = puVar10[1];
          __ZNSt3__15mutex6unlockEv(0x1f26f20);
          uVar9 = func_0x00791650(param_1);
          uVar1 = *puVar7;
          *puVar7 = 1;
          func_0x00793928(param_1,0xffffd8f0,(int)uVar12);
          iVar4 = func_0x00791be4(param_1,0xffffffff);
          if (iVar4 == 8) {
            FUN_000cbb1c(param_1,*param_2 + 0x20,*param_2 + 0x10);
            bStack_80 = 0;
            uStack_88 = 0;
            uStack_7f = 1;
            lStack_90 = *param_2 + 0x20;
            uStack_88 = func_0x007929a0(param_1,0xffffffff);
            uStack_7f = 0;
            lVar5 = *plVar8;
            *plVar8 = (long)&lStack_90;
            func_0x00794a14(param_1,1,0,0);
            bVar3 = bStack_80;
            func_0x00791660(param_1,uVar9);
            bVar2 = bVar3 | bVar2 & 1;
            *plVar8 = lVar5;
          }
          else {
            func_0x00791660(param_1,uVar9);
// WM - more drops soon - github.com/pengussy
          }
          *puVar7 = uVar1;
          puVar11 = puVar11 + 1;
          if (puVar11 == puStack_70) break;
          goto LAB_000cda78;
        }
      }
      else {
        do {
          if (*puVar10 == uVar12) goto LAB_000cdb04;
          puVar10 = puVar10 + 2;
        } while (puVar10 != puRam0000000001f26f70);
      }
      __ZNSt3__15mutex6unlockEv(0x1f26f20);
      puVar11 = puVar11 + 1;
    } while (puVar11 != puStack_70);
  }
  if (((*(long *)*param_2 == lRam0000000001f270e0) && (cRam0000000002097053 == '\x01')) &&
     (cRam0000000001f270e8 == '\x01' && lRam0000000001f26f88 != 0)) {
    lVar5 = func_0x00791618();
    lVar6 = func_0x00791618(param_1);
    if (lVar5 == lVar6) {
      *(byte *)(*param_2 + 0x38) = bVar2 & 1;
      goto joined_r0x000cdcd4;
    }
  }
  *(undefined1 *)(*param_2 + 0x39) = 1;
joined_r0x000cdcd4:
  if (puStack_78 == (ulong *)0x0) {
    return;
  }
  __ZdlPv();
  return;
}

