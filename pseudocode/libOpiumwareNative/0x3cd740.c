/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3cd740:f65f83f852
   =========================================================================== */

undefined8 FUN_003cd740(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar7 = 0xffffffff;
  if ((param_1 != (uint *)0x0) && (param_3 != (uint *)0x0)) {
    if ((param_2 != 0x80) && ((param_2 != 0x100 && (param_2 != 0xc0)))) {
      return 0xfffffffe;
    }
    if (param_2 == 0x80) {
      uVar10 = 10;
    }
    else if (param_2 == 0xc0) {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      uVar10 = 0xc;
    }
    else {
      uVar10 = 0xe;
    }
    param_3[0x3c] = uVar10;
    uVar10 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar11 = uVar10 >> 0x10 | uVar10 << 0x10;
    *param_3 = uVar11;
    uVar10 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    param_3[1] = uVar10;
    uVar12 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    param_3[2] = uVar12;
    uVar13 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    param_3[3] = uVar13;
    if (param_2 == 0x80) {
      lVar9 = 0;
      do {
        uVar12 = param_3[3];
        uVar11 = uVar11 ^ (uint)(byte)(&UNK_01ae76cb)[(ulong)(byte)(uVar12 >> 0x10) * 4] << 0x18 ^
                 (uint)(byte)(&UNK_01ae7aca)[(ulong)(byte)(uVar12 >> 8) * 4] << 0x10 ^
                 (uint)(byte)(&UNK_01ae7ec9)[(ulong)(byte)uVar12 * 4] << 8 ^
                 (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar12 >> 0x16) & 0x3fc] ^
                 *(uint *)(&UNK_01ae86c8 + lVar9);
        param_3[4] = uVar11;
        param_3[5] = param_3[1] ^ uVar11;
        uVar10 = param_3[2] ^ param_3[1] ^ uVar11;
        param_3[6] = uVar10;
        param_3[7] = uVar10 ^ uVar12;
        lVar9 = lVar9 + 4;
        param_3 = param_3 + 4;
      } while (lVar9 != 0x28);
    }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    else {
      uVar8 = (param_1[4] & 0xff00ff00) >> 8 | (param_1[4] & 0xff00ff) << 8;
      param_3[4] = uVar8 >> 0x10 | uVar8 << 0x10;
      uVar6 = param_1[5];
      bVar3 = *(byte *)((long)param_1 + 0x15);
      bVar4 = *(byte *)((long)param_1 + 0x16);
      bVar5 = *(byte *)((long)param_1 + 0x17);
      uVar8 = (uint)CONCAT11(bVar4,bVar5) | (uint)(byte)uVar6 << 0x18 | (uint)bVar3 << 0x10;
      param_3[5] = uVar8;
      if (param_2 == 0xc0) {
        uVar11 = ((uint)(byte)(&UNK_01ae7aca)[(ulong)bVar4 * 4] << 0x10 |
                  (uint)(byte)(&UNK_01ae76cb)[(ulong)bVar3 * 4] << 0x18 |
                  (uint)(byte)(&UNK_01ae7ec9)[(ulong)bVar5 * 4] << 8 |
                 (uint)(byte)(&UNK_01ae82c8)[(ulong)(byte)uVar6 * 4]) ^ uVar11 ^ 0x1000000;
        uVar10 = uVar10 ^ uVar11;
        param_3[6] = uVar11;
// found on a paste site? it was re-uploaded illegally
        param_3[7] = uVar10;
        uVar13 = uVar13 ^ uVar12 ^ uVar10;
        param_3[8] = uVar12 ^ uVar10;
        param_3[9] = uVar13;
        uVar1 = param_3[4] ^ uVar13;
        uVar8 = uVar1 ^ uVar8;
        param_3[10] = uVar1;
        param_3[0xb] = uVar8;
        uVar11 = ((uint)(byte)(&UNK_01ae7aca)[(ulong)(uVar8 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar8 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&UNK_01ae7ec9)[(ulong)(uVar8 & 0xff) * 4] << 8 |
                 (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar8 >> 0x18) * 4]) ^ uVar11 ^ 0x2000000;
        param_3[0xc] = uVar11;
        param_3[0xd] = uVar10 ^ uVar11;
        uVar12 = uVar12 ^ uVar11;
        param_3[0xe] = uVar12;
        param_3[0xf] = uVar13 ^ uVar12;
        uVar1 = uVar1 ^ uVar13 ^ uVar12;
        uVar8 = uVar1 ^ uVar8;
        param_3[0x10] = uVar1;
        param_3[0x11] = uVar8;
        uVar6 = ((uint)(byte)(&UNK_01ae7aca)[(ulong)(uVar8 >> 8 & 0xff) * 4] << 0x10 |
                 (uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar8 >> 0x10 & 0xff) * 4] << 0x18 |
                 (uint)(byte)(&UNK_01ae7ec9)[(ulong)(uVar8 & 0xff) * 4] << 8 |
                (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar8 >> 0x18) * 4]) ^ uVar11 ^ 0x4000000;
        uVar2 = uVar10 ^ uVar11 ^ uVar6;
        param_3[0x12] = uVar6;
        param_3[0x13] = uVar2;
        uVar13 = uVar13 ^ uVar2;
        param_3[0x14] = uVar12 ^ uVar2;
        param_3[0x15] = uVar13;
        uVar1 = uVar1 ^ uVar13;
        uVar8 = uVar1 ^ uVar8;
        param_3[0x16] = uVar1;
        param_3[0x17] = uVar8;
        uVar10 = ((uint)(byte)(&UNK_01ae7aca)[(ulong)(uVar8 >> 8 & 0xff) * 4] << 0x10 |
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
                  (uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar8 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&UNK_01ae7ec9)[(ulong)(uVar8 & 0xff) * 4] << 8 |
                 (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar8 >> 0x18) * 4]) ^ uVar6 ^ 0x8000000;
        param_3[0x18] = uVar10;
        param_3[0x19] = uVar2 ^ uVar10;
        uVar12 = uVar12 ^ uVar10;
        param_3[0x1a] = uVar12;
        param_3[0x1b] = uVar13 ^ uVar12;
        uVar1 = uVar1 ^ uVar13 ^ uVar12;
        uVar8 = uVar1 ^ uVar8;
        param_3[0x1c] = uVar1;
        param_3[0x1d] = uVar8;
        uVar11 = ((uint)(byte)(&UNK_01ae7aca)[(ulong)(uVar8 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar8 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&UNK_01ae7ec9)[(ulong)(uVar8 & 0xff) * 4] << 8 |
                 (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar8 >> 0x18) * 4]) ^ uVar10 ^ 0x10000000;
        uVar6 = uVar2 ^ uVar10 ^ uVar11;
        param_3[0x1e] = uVar11;
        param_3[0x1f] = uVar6;
        uVar13 = uVar13 ^ uVar6;
        param_3[0x20] = uVar12 ^ uVar6;
        param_3[0x21] = uVar13;
        uVar1 = uVar1 ^ uVar13;
        uVar8 = uVar1 ^ uVar8;
        param_3[0x22] = uVar1;
        param_3[0x23] = uVar8;
        uVar10 = ((uint)(byte)(&UNK_01ae7aca)[(ulong)(uVar8 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar8 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&UNK_01ae7ec9)[(ulong)(uVar8 & 0xff) * 4] << 8 |
                 (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar8 >> 0x18) * 4]) ^ uVar11 ^ 0x20000000;
        param_3[0x24] = uVar10;
        param_3[0x25] = uVar6 ^ uVar10;
        uVar12 = uVar12 ^ uVar10;
        param_3[0x26] = uVar12;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        param_3[0x27] = uVar13 ^ uVar12;
        uVar1 = uVar1 ^ uVar13 ^ uVar12;
        uVar8 = uVar1 ^ uVar8;
        param_3[0x28] = uVar1;
        param_3[0x29] = uVar8;
        uVar11 = ((uint)(byte)(&UNK_01ae7aca)[(ulong)(uVar8 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar8 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&UNK_01ae7ec9)[(ulong)(uVar8 & 0xff) * 4] << 8 |
                 (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar8 >> 0x18) * 4]) ^ uVar10 ^ 0x40000000;
        uVar6 = uVar6 ^ uVar10 ^ uVar11;
        param_3[0x2a] = uVar11;
        param_3[0x2b] = uVar6;
        uVar13 = uVar13 ^ uVar6;
        param_3[0x2c] = uVar12 ^ uVar6;
        param_3[0x2d] = uVar13;
        uVar8 = uVar1 ^ uVar13 ^ uVar8;
// more drops soon - github.com/pengussy
        param_3[0x2e] = uVar1 ^ uVar13;
        param_3[0x2f] = uVar8;
        uVar10 = ((uint)(byte)(&UNK_01ae7aca)[(ulong)(uVar8 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar8 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&UNK_01ae7ec9)[(ulong)(uVar8 & 0xff) * 4] << 8 |
                 (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar8 >> 0x18) * 4]) ^ uVar11 ^ 0x80000000;
        param_3[0x30] = uVar10;
        param_3[0x31] = uVar6 ^ uVar10;
        param_3[0x32] = uVar12 ^ uVar10;
        param_3[0x33] = uVar13 ^ uVar12 ^ uVar10;
        return 0;
      }
      uVar8 = (param_1[6] & 0xff00ff00) >> 8 | (param_1[6] & 0xff00ff) << 8;
      param_3[6] = uVar8 >> 0x10 | uVar8 << 0x10;
      uVar8 = (param_1[7] & 0xff00ff00) >> 8 | (param_1[7] & 0xff00ff) << 8;
      uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
      param_3[7] = uVar8;
      if (param_2 == 0x100) {
        lVar9 = 0;
        while( true ) {
          uVar11 = uVar11 ^ (uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar8 >> 0x10 & 0xff) * 4] << 0x18 ^
                   (uint)(byte)(&UNK_01ae7aca)[(ulong)(uVar8 >> 8 & 0xff) * 4] << 0x10 ^
                   (uint)(byte)(&UNK_01ae7ec9)[(ulong)(uVar8 & 0xff) * 4] << 8 ^
                   (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar8 >> 0x18) * 4] ^
                   *(uint *)(&UNK_01ae86c8 + lVar9);
          uVar10 = uVar10 ^ uVar11;
          param_3[8] = uVar11;
          param_3[9] = uVar10;
          uVar12 = uVar12 ^ uVar10;
/* reversing this took months of machine time */
          uVar13 = uVar13 ^ uVar12;
          param_3[10] = uVar12;
          param_3[0xb] = uVar13;
          if (lVar9 == 0x18) break;
          uVar6 = param_3[4] ^ (uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar13 >> 0x18) * 4] << 0x18 ^
                  (uint)(byte)(&UNK_01ae7aca)[(ulong)(uVar13 >> 0x10 & 0xff) * 4] << 0x10 ^
                  (uint)(byte)(&UNK_01ae7ec9)[(ulong)(uVar13 >> 8 & 0xff) * 4] << 8 ^
                  (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar13 & 0xff) * 4];
          uVar2 = param_3[5] ^ uVar6;
          param_3[0xc] = uVar6;
          param_3[0xd] = uVar2;
          uVar2 = param_3[6] ^ uVar2;
          uVar8 = uVar2 ^ uVar8;
          param_3[0xe] = uVar2;
          param_3[0xf] = uVar8;
          lVar9 = lVar9 + 4;
          param_3 = param_3 + 8;
        }
      }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    }
    uVar7 = 0;
  }
  return uVar7;
}

