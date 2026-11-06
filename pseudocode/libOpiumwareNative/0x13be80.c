/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x13be80:d0f048fc77
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_0013be80(ulong *param_1,ulong param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  undefined8 uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *******pppppppuStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  cVar1 = *(char *)((long)param_1 + 0x17);
  uVar11 = (ulong)cVar1;
  uVar2 = param_3 - param_2;
  if ((long)uVar11 < 0) {
    if (uVar2 == 0) {
      return param_1;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    }
    lVar8 = (param_1[2] & 0x7fffffffffffffff) - 1;
    uVar10 = (uint)(param_1[2] >> 0x20);
    uVar6 = uVar10 >> 0x1f;
    uVar10 = uVar10 >> 0x1f;
    uVar7 = param_1[1];
    puVar5 = (ulong *)*param_1;
  }
  else {
    if (uVar2 == 0) {
      return param_1;
    }
    uVar6 = 0;
    uVar10 = 0;
    lVar8 = 0x16;
    uVar7 = uVar11;
    puVar5 = param_1;
  }
  if ((puVar5 <= param_2) && (uVar10 = uVar6, param_2 < (long)puVar5 + uVar7 + 1)) {
    if (uVar2 < 0x7ffffffffffffff7) {
      if (uVar2 < 0x17) {
        uStack_58 = CONCAT17((char)uVar2,(undefined7)uStack_58);
        pppppppuVar3 = &pppppppuStack_68;
      }
      else {
        uVar7 = (uVar2 & 0x7ffffffffffffff8) + 8;
        uVar9 = 0x19;
        if (uVar7 != 0x18) {
          uVar9 = uVar7;
        }
        pppppppuVar3 = (undefined8 *******)__Znwm(uVar9);
        uStack_58 = uVar9 | 0x8000000000000000;
        pppppppuStack_68 = pppppppuVar3;
        uStack_60 = uVar2;
      }
      _memcpy(pppppppuVar3,param_2,uVar2);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      *(undefined1 *)((long)pppppppuVar3 + uVar2) = 0;
      uVar10 = (uint)(char)uStack_58._7_1_;
      uVar2 = uStack_60;
      pppppppuVar3 = pppppppuStack_68;
      if (-1 < (int)uVar10) {
        uVar2 = (ulong)uStack_58._7_1_;
        pppppppuVar3 = &pppppppuStack_68;
      }
      if (cVar1 < '\0') {
        uVar11 = param_1[1];
        lVar8 = (param_1[2] & 0x7fffffffffffffff) - 1;
        uVar7 = lVar8 - uVar11;
      }
      else {
        lVar8 = 0x16;
        uVar7 = 0x16 - uVar11;
      }
      if (uVar7 < uVar2) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  (param_1,lVar8,(uVar2 - lVar8) + uVar11,uVar11,uVar11,0);
        uVar10 = (uint)uStack_58._7_1_;
      }
      else if (uVar2 != 0) {
        puVar5 = param_1;
        if (cVar1 < '\0') {
          puVar5 = (ulong *)*param_1;
        }
        _memmove((long)puVar5 + uVar11,pppppppuVar3,uVar2);
        uVar11 = uVar11 + uVar2;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = uVar11;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)uVar11 & 0x7f;
        }
        *(undefined1 *)((long)puVar5 + uVar11) = 0;
/* unlicensed copy if this notice is missing */
      }
      if ((uVar10 >> 7 & 1) == 0) {
        return param_1;
      }
      __ZdlPv(pppppppuStack_68);
      return param_1;
    }
LAB_0013c14c:
    uVar4 = FUN_0000aa50();
    if ((long)uStack_58 < 0) {
      __ZdlPv(pppppppuStack_68);
    }
    puVar5 = (ulong *)__Unwind_Resume(uVar4);
    *(undefined1 *)((long)puVar5 + 0x29) = 0;
    *(undefined1 *)((long)puVar5 + 0x2a) = 0;
    *(undefined1 *)((long)puVar5 + 0x2b) = 0;
    *(undefined1 *)((long)puVar5 + 0x2c) = 0;
    *(undefined1 *)((long)puVar5 + 0x2d) = 0;
    *(undefined1 *)((long)puVar5 + 0x2e) = 0;
    *(undefined1 *)((long)puVar5 + 0x2f) = 0;
    *(undefined1 *)(puVar5 + 6) = 0;
    *(undefined1 *)((long)puVar5 + 0x31) = 0;
    *(undefined1 *)((long)puVar5 + 0x32) = 0;
    *(undefined1 *)((long)puVar5 + 0x33) = 0;
    *(undefined1 *)((long)puVar5 + 0x34) = 0;
    *(undefined1 *)((long)puVar5 + 0x35) = 0;
    *(undefined1 *)((long)puVar5 + 0x36) = 0;
    *(undefined1 *)((long)puVar5 + 0x37) = 0;
    *(undefined1 *)(puVar5 + 7) = 0;
    *(undefined1 *)((long)puVar5 + 0x39) = 0;
    *(undefined1 *)((long)puVar5 + 0x3a) = 0;
    *(undefined1 *)((long)puVar5 + 0x3b) = 0;
    *(undefined1 *)((long)puVar5 + 0x3c) = 0;
    *(undefined1 *)((long)puVar5 + 0x3d) = 0;
    *(undefined1 *)((long)puVar5 + 0x3e) = 0;
    *(undefined1 *)((long)puVar5 + 0x3f) = 0;
    *(undefined1 *)(puVar5 + 8) = 0;
    *(undefined1 *)((long)puVar5 + 0x41) = 0;
// WM - no support for modified copies
    *(undefined1 *)((long)puVar5 + 0x42) = 0;
    *(undefined1 *)((long)puVar5 + 0x43) = 0;
    *(undefined1 *)((long)puVar5 + 0x44) = 0;
    *(undefined1 *)((long)puVar5 + 0x45) = 0;
    *(undefined1 *)((long)puVar5 + 0x46) = 0;
    *(undefined1 *)((long)puVar5 + 0x47) = 0;
    *(undefined1 *)(puVar5 + 9) = 0;
    *(undefined1 *)((long)puVar5 + 0x49) = 0;
    *(undefined1 *)((long)puVar5 + 0x4a) = 0;
    *(undefined1 *)((long)puVar5 + 0x4b) = 0;
    *(undefined1 *)((long)puVar5 + 0x4c) = 0;
    *(undefined1 *)((long)puVar5 + 0x4d) = 0;
    *(undefined1 *)((long)puVar5 + 0x4e) = 0;
    *(undefined1 *)((long)puVar5 + 0x4f) = 0;
    *(undefined1 *)(puVar5 + 10) = 0;
    *(undefined1 *)((long)puVar5 + 1) = 0;
    *(undefined1 *)((long)puVar5 + 2) = 0;
    *(undefined1 *)((long)puVar5 + 3) = 0;
// WM - if you paid for this, you were scammed
    *(undefined1 *)((long)puVar5 + 4) = 0;
    *(undefined1 *)((long)puVar5 + 5) = 0;
    *(undefined1 *)((long)puVar5 + 6) = 0;
    *(undefined1 *)((long)puVar5 + 7) = 0;
    *(undefined1 *)(puVar5 + 1) = 0;
    *(undefined1 *)((long)puVar5 + 9) = 0;
    *(undefined1 *)((long)puVar5 + 10) = 0;
    *(undefined1 *)((long)puVar5 + 0xb) = 0;
    *(undefined1 *)((long)puVar5 + 0xc) = 0;
    *(undefined1 *)((long)puVar5 + 0xd) = 0;
    *(undefined1 *)((long)puVar5 + 0xe) = 0;
    *(undefined1 *)((long)puVar5 + 0xf) = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((long)puVar5 + 0x11) = 0;
    *(undefined1 *)((long)puVar5 + 0x12) = 0;
    *(undefined1 *)((long)puVar5 + 0x13) = 0;
    *(undefined1 *)((long)puVar5 + 0x14) = 0;
    *(undefined1 *)((long)puVar5 + 0x15) = 0;
    *(undefined1 *)((long)puVar5 + 0x16) = 0;
    *(undefined1 *)((long)puVar5 + 0x17) = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
    *(undefined1 *)((long)puVar5 + 0x19) = 0;
    *(undefined1 *)((long)puVar5 + 0x1a) = 0;
    *(undefined1 *)((long)puVar5 + 0x1b) = 0;
    *(undefined1 *)((long)puVar5 + 0x1c) = 0;
    *(undefined1 *)((long)puVar5 + 0x1d) = 0;
    *(undefined1 *)((long)puVar5 + 0x1e) = 0;
    *(undefined1 *)((long)puVar5 + 0x1f) = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
    *(undefined1 *)((long)puVar5 + 0x21) = 0;
    *(undefined1 *)((long)puVar5 + 0x22) = 0;
    *(undefined1 *)((long)puVar5 + 0x23) = 0;
    *(undefined1 *)((long)puVar5 + 0x24) = 0;
    *(undefined1 *)((long)puVar5 + 0x25) = 0;
    *(undefined1 *)((long)puVar5 + 0x26) = 0;
    *(undefined1 *)((long)puVar5 + 0x27) = 0;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    *(undefined1 *)(puVar5 + 5) = 0;
    *(undefined1 *)puVar5 = 1;
    return puVar5;
  }
  if (lVar8 - uVar7 < uVar2) {
    uVar11 = uVar2 + uVar7;
    if (0x7ffffffffffffff6 < uVar11) goto LAB_0013c14c;
    if (cVar1 < '\0') {
      uVar9 = (param_1[2] & 0x7fffffffffffffff) - 1;
      if (uVar9 < 0x3ffffffffffffff4) goto LAB_0013c07c;
      uVar11 = 0x7ffffffffffffff8;
      uVar9 = __Znwm(0x7ffffffffffffff8);
LAB_0013c0b0:
      puVar5 = (ulong *)*param_1;
    }
    else {
      uVar9 = 0x16;
LAB_0013c07c:
      if (uVar11 <= uVar9 * 2) {
        uVar11 = uVar9 * 2;
      }
      uVar9 = (uVar11 & 0x7ffffffffffffff8) + 8;
      uVar11 = 0x19;
      if (uVar9 != 0x18) {
        uVar11 = uVar9;
      }
      uVar9 = __Znwm(uVar11);
      puVar5 = param_1;
      if (cVar1 < '\0') goto LAB_0013c0b0;
// WM - proprietary - see LICENSE - do not sell
    }
    if (uVar7 != 0) {
      _memmove(uVar9,puVar5,uVar7);
    }
    if (cVar1 < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uVar7;
    param_1[2] = uVar11 | 0x8000000000000000;
    *param_1 = uVar9;
  }
  else {
    puVar5 = param_1;
    if (uVar10 == 0) goto LAB_0013c0e4;
  }
  puVar5 = (ulong *)*param_1;
LAB_0013c0e4:
  _memmove((long)puVar5 + uVar7,param_2,uVar2);
  *(undefined1 *)((long)puVar5 + uVar7 + uVar2) = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = uVar2 + uVar7;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)(uVar2 + uVar7) & 0x7f;
  }
  return param_1;
}

