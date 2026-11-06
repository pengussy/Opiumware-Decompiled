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
 *  file-id: 0x3565e4:2a4675428f
 *  --------------------------------------------------------------------------*/

int FUN_003565e4(uint *param_1,char *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  
  if (param_2 == (char *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
// WM - no support for modified copies
                    ,0x3ce,"SSL_CONF_cmd");
    puVar8 = (undefined *)0x181;
LAB_0035668c:
    func_0x004466b0(0x14,puVar8,0);
    return 0;
  }
  lVar10 = *(long *)(param_1 + 2);
  if (lVar10 == 0) {
    if (((*param_1 & 1) != 0) && ((*param_2 != '-' || (param_2 = param_2 + 1, *param_2 == '\0'))))
    goto LAB_00356798;
  }
  else {
    uVar7 = _strlen(param_2);
    uVar11 = *(ulong *)(param_1 + 4);
    if ((uVar7 <= uVar11) ||
       ((uVar1 = *param_1, (uVar1 & 1) != 0 && (iVar6 = _strncmp(param_2,lVar10,uVar11), iVar6 != 0)
        ))) goto LAB_00356798;
    if ((uVar1 >> 1 & 1) != 0) {
      iVar6 = func_0x0047630c(param_2,lVar10,uVar11);
      if (iVar6 != 0) goto LAB_00356798;
      uVar11 = *(ulong *)(param_1 + 4);
    }
    param_2 = param_2 + uVar11;
  }
  psVar12 = (short *)&UNK_01dc5022;
  lVar10 = 0;
  do {
    uVar1 = *param_1;
    uVar4 = psVar12[-1];
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if ((((((uVar4 >> 3 & 1) == 0) || ((uVar1 >> 3 & 1) != 0)) &&
         (((uVar4 >> 2 & 1) == 0 || ((uVar1 >> 2 & 1) != 0)))) &&
        (((uVar4 >> 5 & 1) == 0 || ((uVar1 >> 5 & 1) != 0)))) &&
       ((((uVar1 & 1) != 0 &&
         ((*(long *)(psVar12 + -5) != 0 &&
          (iVar6 = _strcmp(*(long *)(psVar12 + -5),param_2), iVar6 == 0)))) ||
        (((uVar1 >> 1 & 1) != 0 &&
         ((*(long *)(psVar12 + -9) != 0 &&
          (iVar6 = func_0x004762b4(*(long *)(psVar12 + -9),param_2), iVar6 == 0)))))))) {
      if (*psVar12 != 4) {
        if (param_3 == 0) {
          iVar6 = -3;
        }
        else {
          iVar6 = (**(code **)(psVar12 + -0xd))(param_1);
          if (0 < iVar6) {
            return 2;
          }
          if (iVar6 != -2) {
            iVar6 = 0;
          }
        }
        if (((byte)*param_1 >> 4 & 1) == 0) {
          return iVar6;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                        ,999,"SSL_CONF_cmd");
        func_0x004466b0(0x14,0x180,"cmd=%s, value=%s");
        return iVar6;
      }
      if ((ulong)(-lVar10 >> 5) < 0x1f) {
        puVar9 = *(ulong **)(param_1 + 10);
        if (puVar9 != (ulong *)0x0) {
          lVar10 = (-lVar10 >> 5) * 0x10;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
          uVar7 = *(ulong *)(&UNK_01ae61c8 + lVar10);
          uVar2 = *(uint *)(&UNK_01ae61d0 + lVar10);
          uVar1 = uVar2 & 0xf00;
          if (uVar1 == 0) {
            if ((uVar2 & 1) == 0) {
              uVar7 = *puVar9 | uVar7;
            }
            else {
              uVar7 = *puVar9 & (uVar7 ^ 0xffffffffffffffff);
            }
            *puVar9 = uVar7;
          }
          else {
            if (uVar1 == 0x100) {
              lVar10 = 0x40;
            }
            else {
              if (uVar1 != 0x200) {
                return 1;
              }
              lVar10 = 0x48;
            }
            uVar3 = **(uint **)((long)param_1 + lVar10);
// found on a paste site? it was re-uploaded illegally
            uVar1 = uVar3 | (uint)uVar7;
            if ((uVar2 & 1) != 0) {
              uVar1 = uVar3 & ((uint)uVar7 ^ 0xffffffff);
            }
            **(uint **)((long)param_1 + lVar10) = uVar1;
          }
        }
        return 1;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                      ,0x3c1,"ctrl_switch_option");
      puVar8 = &UNK_000c0103;
      goto LAB_0035668c;
    }
    psVar12 = psVar12 + 0x10;
    bVar5 = lVar10 != -0x780;
    lVar10 = lVar10 + -0x20;
  } while (bVar5);
LAB_00356798:
  if (((byte)*param_1 >> 4 & 1) != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                    ,0x3ef,"SSL_CONF_cmd");
    func_0x004466b0(0x14,0x182,"cmd=%s");
  }
  return -2;
}

