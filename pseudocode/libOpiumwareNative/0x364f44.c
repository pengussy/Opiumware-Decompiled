/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x364f44:8291fa1f66
 */

undefined8
FUN_00364f44(long param_1,long *param_2,long *param_3,undefined8 *param_4,ulong *param_5,
            undefined8 *param_6,ulong *param_7,byte *param_8)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
/* wm:proprietary - see LICENSE - do not sell */
  undefined8 uStack_78;
  ulong uStack_70;
  undefined2 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,0x6a3,"tls1_set_groups_list");
    func_0x004466b0(0x14,&UNK_000c0102,0);
    uVar4 = 0;
  }
  else {
    puStack_68 = (undefined2 *)0x0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    puStack_80 = (undefined8 *)0x0;
    lStack_98 = 0;
    lStack_a0 = 0;
    uStack_90 = 0x20;
    uStack_78 = 0x20;
    uStack_a8 = 0x20;
    lStack_b0 = param_1;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    lStack_98 = func_0x0046f180(0x20,2,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                ,0x6ae);
    if ((lStack_98 != 0) &&
       (puStack_80 = (undefined8 *)
                     func_0x0046f180(0x20,8,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                     ,0x6b1), puStack_80 != (undefined8 *)0x0)) {
      *puStack_80 = 0;
      puStack_68 = (undefined2 *)
                   func_0x0046f180(0x20,2,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                   ,0x6b5);
      puVar2 = PTR___DefaultRuneLocale_01f201e8;
      if (puStack_68 != (undefined2 *)0x0) {
        bVar1 = *param_8;
        do {
          if (bVar1 == 0) {
LAB_003651ec:
            uVar4 = 1;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            if ((((param_7 != (ulong *)0x0) && (param_5 != (ulong *)0x0)) &&
                (param_3 != (long *)0x0)) &&
               (((param_2 != (long *)0x0 && (param_4 != (undefined8 *)0x0)) &&
                (param_6 != (undefined8 *)0x0)))) {
              func_0x004743e4(*param_2,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x6fd);
              *param_2 = lStack_98;
              *param_3 = lStack_a0;
              func_0x004743e4(*param_4,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x700);
              *param_4 = puStack_68;
              *param_5 = uStack_70;
              func_0x004743e4(*param_6,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x703);
              *param_6 = puStack_80;
              *param_7 = uStack_88;
              return 1;
            }
            goto LAB_00365178;
          }
          if (-1 < (char)bVar1) {
            if ((*(uint *)(puVar2 + (ulong)bVar1 * 4 + 0x3c) & 0x4000) != 0) goto LAB_00365038;
LAB_0036507c:
            if (*param_8 != 0) {
              uVar4 = func_0x00409000(param_8,0x2f,1,&DAT_00365268,&lStack_b0);
              if ((int)uVar4 == -1) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                ,0x6c7,"tls1_set_groups_list");
                pcVar5 = "Syntax error in \'%s\'";
                goto LAB_00365164;
              }
              if ((int)uVar4 == 0) goto LAB_00365178;
              if (uStack_88 == 0) {
                uVar7 = 0;
              }
              else {
                uVar6 = 0;
                uVar7 = 0;
                do {
                  if (puStack_80[uVar6] != 0) {
                    if (uVar6 == uVar7) {
                      uVar7 = uVar6 + 1;
                    }
                    else {
                      puStack_80[uVar7] = puStack_80[uVar6];
                      uVar7 = uVar7 + 1;
                    }
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uStack_88);
              }
              uStack_88 = uVar7;
              if (4 < uStack_70) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                ,0x6dc,"tls1_set_groups_list");
                pcVar5 = "To many keyshares requested in \'%s\' (max = %d)";
LAB_00365164:
                func_0x004466b0(0x14,&UNK_00080106,pcVar5);
                break;
              }
              if ((uStack_70 == 0) && (lStack_a0 != 0)) {
                uStack_70 = 1;
/*  unlicensed copy if this notice is missing  */
                *puStack_68 = 0;
              }
            }
            goto LAB_003651ec;
          }
          iVar3 = ___maskrune((ulong)bVar1,0x4000);
          if (iVar3 == 0) goto LAB_0036507c;
LAB_00365038:
          param_8 = param_8 + 1;
          bVar1 = *param_8;
        } while( true );
      }
    }
    uVar4 = 0;
LAB_00365178:
    func_0x004743e4(lStack_98,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,0x70a);
    func_0x004743e4(puStack_80,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,0x70b);
    func_0x004743e4(puStack_68,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,0x70c);
  }
  return uVar4;
}

