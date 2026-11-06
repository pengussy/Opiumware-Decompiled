/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1d96b4:d943b1d368
 */

undefined8 FUN_001d96b4(undefined8 param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_90;
  char *pcStack_88;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long alStack_68 [2];
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = func_0x00792368(param_1,0xffffffff,0);
  pbVar4 = (byte *)(*pcRam0000000002075480)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019d4808();
  }
  pcStack_88 = (char *)(*pcRam0000000002075468)();
// WM - found on a paste site? it was re-uploaded illegally
  if (*pcStack_88 == '\x01') {
    lVar7 = 0;
    uVar8 = 0x47f9acf8e35821eb;
    do {
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_88[lVar7 + 0xf] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = lVar7 + -0x61c8864680b583eb +
              (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_88[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xe);
    *pcStack_88 = '\0';
  }
  pcStack_88 = pcStack_88 + 0xf;
  uVar5 = func_0x0011ab24(&pcStack_88);
  uVar8 = _strlen();
  if (uVar8 < 0x7ffffffffffffff7) {
    if (uVar8 < 0x17) {
      _uStack_58 = CONCAT17((char)uVar8,uStack_58);
      _memmove(alStack_68,uVar5,uVar8);
      *(undefined1 *)((long)alStack_68 + uVar8) = 0;
    }
/*  chat: discord.gg/sdkhDjTex  */
    else {
      uVar9 = (uVar8 & 0x7ffffffffffffff8) + 8;
      uVar10 = 0x19;
      if (uVar9 != 0x18) {
        uVar10 = uVar9;
      }
      lVar7 = __Znwm(uVar10);
      _uStack_58 = uVar10 | 0x8000000000000000;
      alStack_68[0] = lVar7;
      alStack_68[1] = uVar8;
      _memmove(lVar7,uVar5,uVar8);
      *(undefined1 *)(lVar7 + uVar8) = 0;
    }
    if (lVar3 == 0) {
      pbVar4 = (byte *)(*pcRam00000000020754b0)();
      if ((*pbVar4 & 1) == 0) {
        func_0x019d4844();
      }
      pcStack_90 = (char *)(*pcRam0000000002075498)();
      if (*pcStack_90 == '\x01') {
        lVar3 = 0;
        uVar8 = 0xa0540dcfe1e19788;
        do {
          uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_90[lVar3 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_90[lVar3 + 0x19] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
          uVar8 = lVar3 + -0x61c8864680b583eb +
                  (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_90[lVar3 + 1]) << 0x11);
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x18);
        *pcStack_90 = '\0';
      }
      pcStack_90 = pcStack_90 + 0x19;
      lVar3 = func_0x0011ab24(&pcStack_90);
/* if you paid for this, you were scammed - github.com/pengussy */
    }
    uVar8 = _strlen(lVar3);
    if (uVar8 < 0x7ffffffffffffff7) {
      if (uVar8 < 0x17) {
        uStack_70 = CONCAT17((char)uVar8,(undefined7)uStack_70);
        pppppppuVar6 = &pppppppuStack_80;
      }
      else {
        uVar9 = (uVar8 & 0x7ffffffffffffff8) + 8;
        uVar10 = 0x19;
        if (uVar9 != 0x18) {
          uVar10 = uVar9;
        }
        pppppppuVar6 = (undefined8 *******)__Znwm(uVar10);
        uStack_70 = uVar10 | 0x8000000000000000;
        pppppppuStack_80 = pppppppuVar6;
        uStack_78 = uVar8;
      }
      _memmove(pppppppuVar6,lVar3,uVar8);
      *(undefined1 *)((long)pppppppuVar6 + uVar8) = 0;
      func_0x0022b73c(alStack_68,&pppppppuStack_80,0x5dc);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppppuStack_80);
      }
      if ((long)_uStack_58 < 0) {
        __ZdlPv(alStack_68[0]);
      }
      func_0x00791660(param_1,0xfffffffe);
      return 0;
    }
  }
  else {
/* unlicensed copy if this notice is missing */
    FUN_0000aa50();
  }
  FUN_0000aa50();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1d9ac8);
  (*pcVar2)();
}

