/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x28353c:6ae761c6ad
 */

long * FUN_0028353c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  ulong uVar10;
  char cStack_62;
  char cStack_61;
  
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b(&cStack_61,param_1,1);
  if (cStack_61 != '\x01') {
    return param_1;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    *(undefined1 *)*param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
  }
  plVar8 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
// WM - keep the notice, keep the source honest
  if ((byte *)plVar8[3] == (byte *)plVar8[4]) {
    uVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
    if (uVar3 == 0xffffffff) goto LAB_00283700;
  }
  else {
    uVar3 = (uint)*(byte *)plVar8[3];
  }
  do {
    pcVar9 = (char *)plVar8[3];
    pcVar7 = (char *)plVar8[4];
    if (pcVar9 == (char *)plVar8[4]) {
      cStack_62 = (char)uVar3;
      pcVar9 = &cStack_62;
      pcVar7 = &cStack_61;
    }
    pcVar4 = (char *)_memchr(pcVar9,param_3,(long)pcVar7 - (long)pcVar9);
    if (pcVar4 != (char *)0x0) {
      pcVar7 = pcVar4;
    }
    uVar2 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    uVar10 = 0x7ffffffffffffff6 - uVar2;
// if you paid for this, you were scammed
    if (uVar10 <= (ulong)((long)pcVar7 - (long)pcVar9)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pcVar9,uVar10);
      if (pcVar9 != &cStack_62) {
        uVar3 = 4;
        plVar8[3] = plVar8[3] + uVar10;
        goto LAB_002837b0;
      }
      if (uVar2 != 0x7ffffffffffffff6) {
        if (plVar8[3] != plVar8[4]) {
          uVar3 = 4;
          plVar8[3] = plVar8[3] + 1;
          goto LAB_002837b0;
        }
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      uVar3 = 4;
      goto LAB_002837b0;
    }
    func_0x0013be80(param_2,pcVar9,pcVar7);
    if (pcVar9 == &cStack_62) {
      pbVar5 = (byte *)plVar8[3];
      pbVar6 = (byte *)plVar8[4];
      if (pcVar7 != &cStack_62) {
/*  keep the notice, keep the source honest  */
        if (pbVar5 == pbVar6) {
          (**(code **)(*plVar8 + 0x50))(plVar8);
          pbVar5 = (byte *)plVar8[3];
          pbVar6 = (byte *)plVar8[4];
        }
        else {
          pbVar5 = pbVar5 + 1;
          plVar8[3] = (long)pbVar5;
        }
      }
      if (pcVar4 != (char *)0x0) {
        if (pbVar5 != pbVar6) goto LAB_002836f0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
        uVar3 = 0;
        goto LAB_002837b0;
      }
    }
    else {
      pbVar5 = (byte *)(plVar8[3] + ((long)pcVar7 - (long)pcVar9));
      plVar8[3] = (long)pbVar5;
      if (pcVar4 != (char *)0x0) {
LAB_002836f0:
        uVar3 = 0;
/* unlicensed copy if this notice is missing */
        plVar8[3] = (long)(pbVar5 + 1);
        goto LAB_002837b0;
      }
      pbVar6 = (byte *)plVar8[4];
    }
    if (pbVar5 == pbVar6) {
      uVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
    }
    else {
      uVar3 = (uint)*pbVar5;
    }
  } while (uVar3 != 0xffffffff);
LAB_00283700:
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  uVar3 = 6;
  if (uVar2 != 0) {
    uVar3 = 2;
  }
LAB_002837b0:
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | uVar3);
  return param_1;
}

