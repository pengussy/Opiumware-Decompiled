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
 *  file-id: 0x39bb1c:6a4fbadba0
 *  --------------------------------------------------------------------------*/

undefined8
FUN_0039bb1c(long param_1,undefined8 *param_2,ulong param_3,long *param_4,long *param_5,int param_6)

{
  long lVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  long *plVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ushort *puVar21;
  long lStack_68;
  
  puVar21 = (ushort *)*param_2;
  lVar17 = param_2[1];
  uVar19 = param_2[2];
  lVar16 = *(long *)(param_1 + 0x880);
  *param_4 = 0;
  uVar9 = (uint)param_3;
  if (((uVar9 >> 7 & 1) != 0) && (*(int *)(param_1 + 0xc18) == 0)) {
    func_0x003a3a6c(lVar16 + 0x80);
  }
  lVar1 = *(long *)(lVar16 + 0x88) + 0x1f;
  lVar5 = func_0x0046f1f4(lVar1,0x30,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
/*  reversing this took months of machine time  */
                          ,0x333);
  if (lVar5 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                    ,0x335,"tls_collect_extensions");
    func_0x003a9570(param_1,0x50,&UNK_0008000f,0);
    return 0;
  }
  lVar10 = 0;
  while (puVar13 = &UNK_01dc74a8, uVar19 != 0) {
    if ((uVar19 == 1) || ((uVar19 & 0xfffffffffffffffe) == 2)) {
LAB_0039c154:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                      ,0x340,"tls_collect_extensions");
      uVar8 = 0x32;
LAB_0039c178:
      uVar11 = 0x6e;
LAB_0039c17c:
      func_0x003a9570(param_1,uVar8,uVar11,0);
      goto LAB_0039c184;
    }
    uVar20 = (ulong)((uint)(puVar21[1] >> 8) | (puVar21[1] & 0xff00ff) << 8);
    uVar12 = uVar19 - 4;
    uVar19 = uVar12 - uVar20;
    if (uVar12 < uVar20) goto LAB_0039c154;
/* chat: discord.gg/sdkhDjTex */
    uVar3 = (uint)(*puVar21 >> 8) | (*puVar21 & 0xff00ff) << 8;
    if (0x3373 < uVar3) {
      if (uVar3 < 65000) {
        if (uVar3 == 0x3374) {
          puVar13 = &UNK_01dc76a8;
          lVar6 = 8;
        }
        else {
          if (uVar3 != 0xfd00) goto LAB_0039bec8;
          puVar13 = &UNK_01dc7ba8;
          lVar6 = 0x1c;
        }
      }
      else if (uVar3 == 65000) {
        puVar13 = &UNK_01dc7a68;
        lVar6 = 0x17;
      }
      else if (uVar3 == 0xfe0d) {
        puVar13 = &UNK_01dc7b68;
        lVar6 = 0x1b;
      }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      else {
        if (uVar3 != 0xff01) goto LAB_0039bec8;
        lVar6 = 0;
      }
      goto LAB_0039be84;
    }
    switch(uVar3) {
    case 0:
      puVar13 = &UNK_01dc74e8;
      lVar6 = 1;
      break;
    case 1:
      puVar13 = &UNK_01dc7528;
      lVar6 = 2;
      break;
    default:
LAB_0039bec8:
      lStack_68 = 0;
      uVar7 = (uVar9 >> 7 ^ 0xffffffff) & 2;
/* wm:more drops soon - github.com/pengussy */
      if ((uVar9 >> 7 & 1) != 0) {
        if ((*(int *)(param_1 + 0xc18) == 1) && (*(int *)(param_1 + 0xc14) == 1)) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
      }
      lVar6 = func_0x003a39f0(lVar16 + 0x80,uVar7,uVar3,&lStack_68);
      if (lVar6 == 0) {
        plVar14 = (long *)0x0;
        bVar15 = true;
        goto LAB_0039c070;
      }
      uVar7 = *(uint *)(lVar6 + 8);
      if ((uVar7 & uVar9) != 0) {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
          uVar7 = uVar7 >> 1;
        }
        if ((uVar7 & 1) != 0) goto LAB_0039c12c;
        plVar14 = (long *)(lVar5 + 0x5d0 + lStack_68 * 0x30);
        goto joined_r0x0039c068;
      }
      goto LAB_0039c12c;
    case 5:
/* more drops soon - github.com/pengussy */
      puVar13 = &UNK_01dc7668;
      lVar6 = 7;
      break;
    case 10:
      puVar13 = &UNK_01dc75e8;
      lVar6 = 5;
      break;
    case 0xb:
      puVar13 = &UNK_01dc75a8;
      lVar6 = 4;
      break;
    case 0xc:
      puVar13 = &UNK_01dc7568;
      lVar6 = 3;
      break;
    case 0xd:
      puVar13 = &UNK_01dc7928;
      lVar6 = 0x12;
      break;
    case 0xe:
      puVar13 = &UNK_01dc7728;
      lVar6 = 10;
      break;
    case 0x10:
      puVar13 = &UNK_01dc76e8;
      lVar6 = 9;
      break;
    case 0x12:
      puVar13 = &UNK_01dc77a8;
      lVar6 = 0xc;
      break;
    case 0x13:
/* wm:chat: discord.gg/sdkhDjTex */
      puVar13 = &UNK_01dc78a8;
      lVar6 = 0x10;
      break;
    case 0x14:
      puVar13 = &UNK_01dc78e8;
      lVar6 = 0x11;
      break;
    case 0x15:
      puVar13 = &UNK_01dc7be8;
      lVar6 = 0x1d;
      break;
    case 0x16:
      puVar13 = &UNK_01dc7768;
      lVar6 = 0xb;
      break;
    case 0x17:
      puVar13 = &UNK_01dc77e8;
      lVar6 = 0xd;
      break;
    case 0x1b:
/* thanks for reading - discord.gg/sdkhDjTex */
      puVar13 = &UNK_01dc7aa8;
      lVar6 = 0x18;
      break;
    case 0x23:
      puVar13 = &UNK_01dc7628;
      lVar6 = 6;
      break;
    case 0x29:
      puVar13 = &UNK_01dc7c28;
      lVar6 = 0x1e;
      break;
    case 0x2a:
      puVar13 = &UNK_01dc7ae8;
      lVar6 = 0x19;
      break;
    case 0x2b:
      puVar13 = &UNK_01dc7968;
      lVar6 = 0x13;
      break;
    case 0x2c:
      puVar13 = &UNK_01dc7a28;
      lVar6 = 0x16;
      break;
    case 0x2d:
      puVar13 = &UNK_01dc79a8;
      lVar6 = 0x14;
      break;
    case 0x2f:
      puVar13 = &UNK_01dc7b28;
      lVar6 = 0x1a;
      break;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    case 0x31:
      puVar13 = &UNK_01dc7868;
      lVar6 = 0xf;
      break;
    case 0x32:
      puVar13 = &UNK_01dc7828;
      lVar6 = 0xe;
      break;
    case 0x33:
      puVar13 = &UNK_01dc79e8;
      lVar6 = 0x15;
    }
LAB_0039be84:
    uVar7 = *(uint *)(puVar13 + 4);
    if ((uVar7 & uVar9) == 0) {
LAB_0039c12c:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                      ,0x34d,"tls_collect_extensions");
      uVar8 = 0x2f;
      goto LAB_0039c178;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0) {
      if ((uVar7 & 1) == 0) goto LAB_0039beac;
      goto LAB_0039c12c;
    }
    if ((uVar7 >> 1 & 1) != 0) goto LAB_0039c12c;
LAB_0039beac:
    plVar14 = (long *)(lVar5 + lVar6 * 0x30);
joined_r0x0039c068:
/*  donate: donate/README.md  */
    if (plVar14 == (long *)0x0) {
      bVar15 = true;
    }
    else {
      if ((int)plVar14[3] == 1) goto LAB_0039c12c;
      bVar15 = false;
    }
LAB_0039c070:
    if ((((uVar9 >> 7 & 1) != 0) && (uVar3 == 0x29)) && (uVar19 != 0)) goto LAB_0039c12c;
    if (((((param_3 & 0x6080) == 0) &&
         (uVar12 = (ulong)(uint)((int)((ulong)((long)plVar14 - lVar5) >> 4) * -0x55555555),
         uVar12 < 0x1f)) && ((uVar3 != 0x12 && ((uVar3 != 0x2c && (uVar3 != 0xff01)))))) &&
       (((*(byte *)(param_1 + 0x9f0 + uVar12) >> 1 & 1) == 0 &&
        (((uint)(uVar3 == 65000) & uVar9 >> 8) == 0)))) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                      ,0x36b,"tls_collect_extensions");
      uVar8 = 0x6e;
      uVar11 = 0xd9;
      goto LAB_0039c17c;
    }
    puVar2 = puVar21 + 2;
    puVar21 = (ushort *)((long)puVar2 + uVar20);
    if (!bVar15) {
      *plVar14 = (long)puVar2;
      plVar14[1] = lVar17;
      plVar14[2] = uVar20;
      *(undefined4 *)(plVar14 + 3) = 1;
      *(uint *)(plVar14 + 4) = uVar3;
      lVar6 = lVar10 + 1;
      plVar14[5] = lVar10;
      lVar10 = lVar6;
/* unlicensed copy if this notice is missing */
      if (*(code **)(param_1 + 0xa10) != (code *)0x0) {
        (**(code **)(param_1 + 0xa10))
                  (*(undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x78) == 0,uVar3,puVar2,uVar20
                   ,*(undefined8 *)(param_1 + 0xa18));
      }
    }
  }
  if (param_6 != 0) {
    if ((uVar9 >> 0xb & 1) == 0) {
      lVar17 = 0x1f;
      puVar18 = (undefined8 *)&UNK_01dc74b8;
      do {
        if (((code *)*puVar18 != (code *)0x0) &&
           (uVar3 = *(uint *)((long)puVar18 + -0xc), (uVar3 & uVar9) != 0)) {
          if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) {
            iVar4 = **(int **)(param_1 + 0x18);
            bVar15 = 0x303 < iVar4 && iVar4 != 0x10000;
            if (((uVar3 >> 4 & 1) == 0) || (0x303 >= iVar4 || iVar4 == 0x10000)) {
LAB_0039c2b8:
              if (((uVar9 >> 7 & 1) != 0) || (((uVar3 >> 5 & 1) == 0 || (bVar15)))) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                if (*(int *)(param_1 + 0x78) == 0) {
                  bVar15 = true;
                }
                if (((((uVar3 >> 5 & 1) == 0) || (bVar15)) &&
                    (((uVar3 >> 6 & 1) == 0 || (*(int *)(param_1 + 0x508) == 0)))) &&
                   (iVar4 = (*(code *)*puVar18)(param_1,param_3), iVar4 == 0)) {
LAB_0039c184:
                  func_0x004743e4(lVar5,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                                  ,0x391);
                  return 0;
                }
              }
            }
          }
          else if ((uVar3 >> 2 & 1) == 0) {
            bVar15 = false;
            goto LAB_0039c2b8;
          }
        }
        lVar17 = lVar17 + -1;
        puVar18 = puVar18 + 8;
// donate: donate/README.md
      } while (lVar17 != 0);
    }
    else {
      puVar18 = (undefined8 *)&UNK_01dc74b8;
      lVar17 = 0x1f;
      do {
        if (((((((code *)*puVar18 != (code *)0x0) &&
               (uVar3 = *(uint *)((long)puVar18 + -0xc), (uVar3 & uVar9) != 0)) &&
              ((uVar3 >> 2 &
               (*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) >> 3) == 0)) &&
             ((uVar3 >> 4 & 1) == 0)) &&
            (((uVar3 >> 6 & 1) == 0 || (*(int *)(param_1 + 0x508) == 0)))) &&
           (iVar4 = (*(code *)*puVar18)(param_1,param_3), iVar4 == 0)) goto LAB_0039c184;
        puVar18 = puVar18 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  *param_4 = lVar5;
  if (param_5 != (long *)0x0) {
    *param_5 = lVar1;
  }
  return 1;
}

