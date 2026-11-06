/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3fb9cc:13492fbb97
 */

undefined8
FUN_003fb9cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = *(int *)(param_3 + 1);
  if (iVar2 == 0 || iVar3 == 0) {
    func_0x003f95cc(param_1);
    return 1;
  }
  FUN_003f1890(param_4);
  if (((param_1 != param_2) && (puVar7 = param_1, param_1 != param_3)) ||
     (puVar7 = (undefined8 *)FUN_003f1a40(param_4), puVar7 != (undefined8 *)0x0)) {
    if ((iVar2 == 8) && (iVar3 == 8)) {
      lVar8 = func_0x003f8b8c(puVar7,0x10);
      if (lVar8 != 0) {
        *(undefined4 *)(puVar7 + 1) = 0x10;
        FUN_003ef6c4(*puVar7,*param_2,*param_3);
        *(uint *)(puVar7 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
joined_r0x003fbb8c:
/* do not claim this as your own */
        if ((param_1 == puVar7) || (lVar8 = func_0x019e8960(param_1,puVar7), lVar8 != 0)) {
          uVar10 = 1;
          goto LAB_003fbc14;
        }
      }
    }
    else {
      iVar1 = iVar3 + iVar2;
      if ((iVar2 < 0x10) || ((iVar3 < 0x10 || (2 < (iVar2 - iVar3) + 1U)))) {
        lVar8 = func_0x003f8b8c(puVar7,iVar1);
        if (lVar8 != 0) {
          *(int *)(puVar7 + 1) = iVar1;
          func_0x003fb3c8(*puVar7,*param_2,iVar2,*param_3,iVar3);
          *(uint *)(puVar7 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
          goto joined_r0x003fbb8c;
        }
      }
      else {
        iVar6 = iVar3;
        if (-1 < iVar2 - iVar3) {
          iVar6 = iVar2;
        }
        iVar6 = func_0x003f8974(iVar6);
        puVar9 = (undefined8 *)FUN_003f1a40(param_4);
        if (puVar9 != (undefined8 *)0x0) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          uVar4 = iVar6 - 1;
          iVar6 = 1 << (ulong)(uVar4 & 0x1f);
          iVar5 = iVar2 - iVar6;
          if ((iVar5 == 0 || iVar2 < iVar6) && iVar3 <= iVar6) {
            iVar2 = 4 << (ulong)(uVar4 & 0x1f);
            lVar8 = func_0x003f8b8c(puVar9,iVar2);
            if ((lVar8 != 0) && (lVar8 = func_0x003f8b8c(puVar7,iVar2), lVar8 != 0)) {
              FUN_003faf60(*puVar7,*param_2,*param_3,iVar6,iVar5,iVar3 - iVar6,*puVar9);
              goto LAB_003fbbdc;
            }
          }
          else {
            iVar2 = 8 << (ulong)(uVar4 & 0x1f);
            lVar8 = func_0x003f8b8c(puVar9,iVar2);
            if ((lVar8 != 0) && (lVar8 = func_0x003f8b8c(puVar7,iVar2), lVar8 != 0)) {
              FUN_003fb514(*puVar7,*param_2,*param_3,iVar6,iVar5,iVar3 - iVar6,*puVar9);
LAB_003fbbdc:
              *(int *)(puVar7 + 1) = iVar1;
              *(uint *)(puVar7 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
              goto joined_r0x003fbb8c;
            }
          }
        }
      }
    }
  }
  uVar10 = 0;
LAB_003fbc14:
  func_0x003f19bc(param_4);
  return uVar10;
}

