/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x32964c:ed704bfa4e
 */

void FUN_0032964c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  
  lVar12 = *(long *)(param_1 + 0x2b0);
  if ((lRam00000000020973e0 != 0) && (((&UNK_0000286d)[lRam00000000020973e0] & 1) != 0)) {
    func_0x002fd6a4("[font] Discard baked %.2f for \"%s\"\n");
  }
  if (*(int *)(param_3 + 6) != 0) {
    lVar5 = (long)*(int *)(param_3 + 6) * 0x2c;
    puVar7 = (uint *)(param_3[7] + 0x28);
    do {
      if (*puVar7 != 0xffffffff) {
        uVar8 = (ulong)*puVar7 & 0x7ffff;
        lVar9 = *(long *)(param_1 + 0x2b0);
        lVar10 = *(long *)(lVar9 + 0x78);
        uVar4 = *(uint *)(lVar10 + uVar8 * 4);
        lVar11 = *(long *)(lVar9 + 0x68);
        *(uint *)(lVar10 + uVar8 * 4) = uVar4 & 0xbfffffff;
        lVar11 = lVar11 + ((long)((ulong)uVar4 << 0x2c) >> 0x2c) * 8;
        uVar1 = uVar4 + 0x100000 & 0x3ff00000;
        uVar2 = 0x100000;
        if (uVar1 != 0) {
          uVar2 = uVar1;
        }
/*  stripping the watermark breaks the license  */
        *(uint *)(lVar10 + uVar8 * 4) =
             uVar4 & 0x80000000 | *(uint *)(lVar9 + 0x90) & 0xfffff | uVar2;
        iVar3 = *(int *)(param_1 + 8);
        *(int *)(lVar9 + 0x90) = (int)uVar8;
        *(ulong *)(lVar9 + 0x9c) =
             CONCAT44((iVar3 + (uint)*(ushort *)(lVar11 + 6)) *
                      (iVar3 + (uint)*(ushort *)(lVar11 + 4)) +
                      (int)((ulong)*(undefined8 *)(lVar9 + 0x9c) >> 0x20),
                      (int)*(undefined8 *)(lVar9 + 0x9c) + 1);
        *(undefined4 *)(lVar11 + 4) = 0;
      }
      lVar5 = lVar5 + -0x2c;
      puVar7 = puVar7 + 0xb;
    } while (lVar5 != 0);
  }
  lVar5 = param_3[0xc];
  if (*(int *)(param_2 + 4) != 0) {
    plVar13 = (long *)param_2[5];
    lVar11 = (long)*(int *)(param_2 + 4) << 3;
/* watermarked copy - do not remove */
    do {
      lVar9 = *(long *)(*plVar13 + 0x88);
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_1 + 0x2b8);
        pcVar6 = *(code **)(lVar9 + 0x38);
      }
      else {
        pcVar6 = *(code **)(lVar9 + 0x38);
      }
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(param_1,*plVar13,param_3,lVar5);
      }
      lVar5 = lVar5 + *(long *)(lVar9 + 0x48);
      plVar13 = plVar13 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
    lVar5 = param_3[0xc];
  }
  if (lVar5 != 0) {
    func_0x002fda6c(lVar5);
    param_3[0xc] = 0;
  }
  func_0x002fe598(lVar12 + 0xd8,*(undefined4 *)((long)param_3 + 0x54),0);
  *(int *)(lVar12 + 0xe8) = *(int *)(lVar12 + 0xe8) + 1;
  *(undefined4 *)(param_3 + 2) = 0;
  if (param_3[7] != 0) {
    param_3[6] = 0;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    func_0x002fda6c();
    param_3[7] = 0;
  }
  if (param_3[1] != 0) {
    *param_3 = 0;
    func_0x002fda6c();
    param_3[1] = 0;
  }
  if (param_3[5] != 0) {
    param_3[4] = 0;
    func_0x002fda6c();
    param_3[5] = 0;
  }
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  *(undefined4 *)((long)param_3 + 0x44) = 0;
  *(undefined4 *)(param_3 + 9) = 0;
  *(uint *)((long)param_3 + 0x4c) = *(uint *)((long)param_3 + 0x4c) & 0xf8000000 | 0x4000000;
  *param_2 = 0;
/* keep the notice, keep the source honest */
  return;
}

