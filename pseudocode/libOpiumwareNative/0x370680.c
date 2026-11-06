/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x370680:03d246e849
 */

/* WARNING: Possible PIC construction at 0x003706c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0037089c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003706c4) */
/* WARNING: Removing unreachable block (ram,0x003706c8) */
/* WARNING: Removing unreachable block (ram,0x003706d4) */
/* WARNING: Removing unreachable block (ram,0x003706d8) */
/* WARNING: Removing unreachable block (ram,0x003708a0) */
/* WARNING: Removing unreachable block (ram,0x0037071c) */
/* WARNING: Removing unreachable block (ram,0x0037075c) */
/* WARNING: Removing unreachable block (ram,0x003707bc) */
/* WARNING: Removing unreachable block (ram,0x003707d4) */
/* WARNING: Removing unreachable block (ram,0x00370764) */
/* WARNING: Removing unreachable block (ram,0x00370868) */
/* WARNING: Removing unreachable block (ram,0x00370880) */
/* WARNING: Removing unreachable block (ram,0x0037076c) */
/* WARNING: Removing unreachable block (ram,0x00370774) */
/* WARNING: Removing unreachable block (ram,0x0037078c) */
/* WARNING: Removing unreachable block (ram,0x00370728) */
/* WARNING: Removing unreachable block (ram,0x00370790) */
/* WARNING: Removing unreachable block (ram,0x0037084c) */
/* WARNING: Removing unreachable block (ram,0x00370864) */
/* WARNING: Removing unreachable block (ram,0x00370798) */
/* WARNING: Removing unreachable block (ram,0x003707a0) */
/* WARNING: Removing unreachable block (ram,0x003707b8) */
/* WARNING: Removing unreachable block (ram,0x00370730) */
/* WARNING: Removing unreachable block (ram,0x00370830) */
/* WARNING: Removing unreachable block (ram,0x00370848) */
/* WARNING: Removing unreachable block (ram,0x00370738) */
/* WARNING: Removing unreachable block (ram,0x003707d8) */
/* WARNING: Removing unreachable block (ram,0x00370884) */
/* WARNING: Removing unreachable block (ram,0x00370894) */
/* WARNING: Removing unreachable block (ram,0x003707e0) */
/* WARNING: Removing unreachable block (ram,0x003707e8) */
/* WARNING: Removing unreachable block (ram,0x003708b0) */
/* WARNING: Removing unreachable block (ram,0x003708b8) */
// WM - origin: github.com/pengussy
/* WARNING: Removing unreachable block (ram,0x003708c0) */
/* WARNING: Removing unreachable block (ram,0x00370940) */
/* WARNING: Removing unreachable block (ram,0x00370948) */
/* WARNING: Removing unreachable block (ram,0x00370950) */
/* WARNING: Removing unreachable block (ram,0x00370958) */
/* WARNING: Removing unreachable block (ram,0x00370964) */
/* WARNING: Removing unreachable block (ram,0x00370970) */
/* WARNING: Removing unreachable block (ram,0x00370980) */
/* WARNING: Removing unreachable block (ram,0x0037098c) */
/* WARNING: Removing unreachable block (ram,0x00370994) */
/* WARNING: Removing unreachable block (ram,0x0037099c) */
/* WARNING: Removing unreachable block (ram,0x00370a04) */
/* WARNING: Removing unreachable block (ram,0x003708c8) */
/* WARNING: Removing unreachable block (ram,0x003708d4) */
/* WARNING: Removing unreachable block (ram,0x003708e4) */
/* WARNING: Removing unreachable block (ram,0x003708f0) */
/* WARNING: Removing unreachable block (ram,0x003708f8) */
/* WARNING: Removing unreachable block (ram,0x00370900) */
/* WARNING: Removing unreachable block (ram,0x00370908) */
/* WARNING: Removing unreachable block (ram,0x0037093c) */
/* WARNING: Removing unreachable block (ram,0x003707f0) */
/* WARNING: Removing unreachable block (ram,0x003709a4) */
/* WARNING: Removing unreachable block (ram,0x003709c0) */
/* WARNING: Removing unreachable block (ram,0x003709e0) */
/* WARNING: Removing unreachable block (ram,0x00370a00) */
/* WARNING: Removing unreachable block (ram,0x00370800) */
/* WARNING: Removing unreachable block (ram,0x0037082c) */
/* WARNING: Removing unreachable block (ram,0x00370740) */
/* WARNING: Removing unreachable block (ram,0x00370758) */
/* WARNING: Removing unreachable block (ram,0x003708ac) */
/* WARNING: Removing unreachable block (ram,0x00370a30) */

void FUN_00370680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
// if you paid for this, you were scammed

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  puStack_90 = auStack_80 + 0x70;
  if (*(char *)(param_1 + 4) != '\0') {
    return;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  }
  uStack_88 = 0x3706c4;
  uStack_b0 = param_4;
  uStack_a8 = param_3;
  uStack_a0 = param_2;
  lStack_98 = param_1;
  if (*(char *)(param_1 + 0x10) != '\0') {
    func_0x0036fb80(param_1);
  }
  uVar2 = *(ulong *)(param_1 + 0x38);
  uVar3 = *(ulong *)(param_1 + 0x40);
  if (uVar2 == uVar3) {
    lStack_b8 = 0;
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
/* WM - donate: donate/README.md */
        iVar1 = func_0x003e9d20(*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x30) + uVar3,
                                uVar2 - uVar3,&lStack_b8);
        uVar2 = *(ulong *)(param_1 + 0x40);
        if (iVar1 == 0) {
          _memmove(*(long *)(param_1 + 0x30),*(long *)(param_1 + 0x30) + uVar3,uVar2 - uVar3);
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined1 *)(param_1 + 4) = 1;
          return;
        }
        uVar3 = lStack_b8 + uVar3;
      } while (uVar3 < uVar2);
    }
    uVar3 = 0;
  }
  *(ulong *)(param_1 + 0x40) = uVar3 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar3) = 0x22;
  return;
}

