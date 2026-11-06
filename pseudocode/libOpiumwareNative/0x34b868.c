/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x34b868:09e960a2b8
 */

undefined8
FUN_0034b868(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,ulong param_5,
            undefined2 *param_6,long param_7)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  ushort *puVar13;
// more drops soon - github.com/pengussy
  undefined2 *puVar14;
  ulong uVar15;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  if ((long)param_5 < 0) {
    func_0x004464bc();
    uVar5 = 0x617;
LAB_0034b8ec:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,uVar5,"ech_reconstitute_inner");
    uVar5 = 0x50;
    puVar7 = &UNK_000c0103;
    goto LAB_0034b900;
  }
  if ((param_5 < 2) || ((ulong)param_3[2] < 2)) {
LAB_0034b8a8:
    func_0x004464bc();
    uVar5 = 0x63b;
// stripping the watermark breaks the license
  }
  else {
    uVar2 = *(ushort *)*param_3;
    uVar2 = uVar2 >> 8 | uVar2 << 8;
    *param_3 = (long)((ushort *)*param_3 + 1);
    param_3[2] = param_3[2] - 2;
    iVar4 = func_0x019ec0a0(param_2,uVar2,2);
    if ((uVar2 != 0x303 || iVar4 == 0) || ((param_5 - 2 < 0x20 || ((ulong)param_3[2] < 0x20))))
    goto LAB_0034b8a8;
    lVar6 = *param_3;
    *param_3 = lVar6 + 0x20;
    param_3[2] = param_3[2] - 0x20;
    iVar4 = func_0x00476690(param_2,lVar6,0x20);
    if ((iVar4 == 0) || (param_3[2] == 0)) goto LAB_0034b8a8;
    *param_3 = *param_3 + 1;
    param_3[2] = param_3[2] + -1;
    if (param_5 == 0x22) goto LAB_0034b8a8;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    bVar1 = *(byte *)(param_4 + 0x22);
    uVar12 = (ulong)bVar1;
    uVar10 = (param_5 - 0x23) - uVar12;
    if ((((param_5 - 0x23 < uVar12) || (iVar4 = func_0x019eba0c(param_2,1), iVar4 == 0)) ||
        ((bVar1 != 0 && (iVar4 = func_0x00476690(param_2,param_4 + 0x23,uVar12), iVar4 == 0)))) ||
       ((iVar4 = func_0x00476494(param_2), iVar4 == 0 || (uVar8 = uVar10 - 2, uVar10 < 2))))
    goto LAB_0034b8a8;
    puVar11 = (ushort *)(param_4 + 0x23 + uVar12);
    uVar12 = (ulong)((uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8);
    uVar10 = uVar8 - uVar12;
    if ((uVar8 < uVar12) || (uVar8 = param_3[2] - 2, (ulong)param_3[2] < 2)) goto LAB_0034b8a8;
    puVar13 = (ushort *)*param_3 + 1;
    uVar2 = *(ushort *)*param_3;
    uVar15 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
    *param_3 = (long)puVar13;
    param_3[2] = uVar8;
    if (uVar8 < uVar15) goto LAB_0034b8a8;
    *param_3 = (long)puVar13 + uVar15;
    param_3[2] = uVar8 - uVar15;
    iVar4 = func_0x019ec0a0(param_2,uVar15,2);
    if (((iVar4 == 0) || (iVar4 = func_0x00476690(param_2,puVar13,uVar15), iVar4 == 0)) ||
       ((ulong)param_3[2] < 2)) goto LAB_0034b8a8;
    *param_3 = *param_3 + 2;
    param_3[2] = param_3[2] - 2;
/*  chat: discord.gg/sdkhDjTex  */
    if ((uVar10 < 2) ||
       (uVar2 = *(ushort *)((long)puVar11 + uVar12 + 2),
       iVar4 = func_0x019ec0a0(param_2,uVar2 >> 8 | uVar2 << 8,2), iVar4 == 0)) goto LAB_0034b8a8;
    uVar8 = param_3[2];
    if (param_7 == 0) {
      if (uVar8 == 0) {
        return 1;
      }
      if (uVar8 != 1) {
        puVar11 = (ushort *)*param_3 + 1;
        uVar2 = *(ushort *)*param_3;
        uVar10 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
        *param_3 = (long)puVar11;
        uVar8 = uVar8 - 2;
        param_3[2] = uVar8;
        if (uVar10 <= uVar8) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          *param_3 = (long)puVar11 + uVar10;
          param_3[2] = uVar8 - uVar10;
          iVar4 = func_0x019ec0a0(param_2,uVar10,2);
          if ((iVar4 != 0) && (iVar4 = func_0x00476690(param_2,puVar11,uVar10), iVar4 != 0)) {
LAB_0034bca4:
            func_0x00476494(param_2);
            return 1;
          }
        }
      }
      func_0x004464bc();
      uVar5 = 0x646;
    }
    else {
      if (1 < uVar8) {
        *param_3 = *param_3 + 2;
/*  keep the notice, keep the source honest  */
        param_3[2] = uVar8 - 2;
        if ((((uVar10 & 0xfffffffffffffffe) != 2) &&
            (uVar2 = *(ushort *)((long)puVar11 + uVar12 + 4),
            uVar8 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8), uVar8 <= uVar10 - 4)) &&
           (iVar4 = func_0x019eba0c(param_2,2), iVar4 != 0)) {
          bVar3 = false;
          lVar6 = (long)puVar11 + uVar12 + 6;
LAB_0034bb44:
          do {
            lVar9 = param_3[2];
            if (lVar9 == 0) goto LAB_0034bca4;
            if (lVar9 == 1) {
LAB_0034bcd0:
              func_0x004464bc();
              uVar5 = 0x65b;
              goto LAB_0034b8c0;
            }
            puVar11 = (ushort *)*param_3;
            uVar2 = *puVar11;
            *param_3 = (long)(puVar11 + 1);
            param_3[2] = lVar9 - 2U;
            if (lVar9 - 2U < 2) goto LAB_0034bcd0;
            uVar12 = (ulong)((uint)(puVar11[1] >> 8) | (puVar11[1] & 0xff00ff) << 8);
/* WM - do not claim this as your own */
            puVar11 = puVar11 + 2;
            *param_3 = (long)puVar11;
            uVar10 = lVar9 - 4;
            param_3[2] = uVar10;
            if (uVar10 < uVar12) goto LAB_0034bcd0;
            uVar2 = uVar2 >> 8 | uVar2 << 8;
            *param_3 = (long)puVar11 + uVar12;
            param_3[2] = uVar10 - uVar12;
            if (uVar2 == 0xfd00) {
              if (bVar3) {
                func_0x004464bc();
                uVar5 = 0x662;
                goto LAB_0034b8ec;
              }
              bVar3 = true;
              puVar14 = param_6;
              lVar9 = param_7;
              lStack_78 = lVar6;
              lStack_70 = lVar6;
              uStack_68 = uVar8;
              do {
                iVar4 = func_0x0034bd30(param_1,param_2,*puVar14,&lStack_78);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                if (iVar4 == 0) goto LAB_0034b908;
                lVar9 = lVar9 + -1;
                puVar14 = puVar14 + 1;
              } while (lVar9 != 0);
              goto LAB_0034bb44;
            }
            iVar4 = func_0x019ec0a0(param_2,uVar2,2);
            if (((iVar4 == 0) || (iVar4 = func_0x019ec0a0(param_2,uVar12,2), iVar4 == 0)) ||
               (iVar4 = func_0x00476690(param_2,puVar11,uVar12), iVar4 == 0)) goto LAB_0034bcec;
          } while( true );
        }
      }
      func_0x004464bc();
      uVar5 = 0x654;
    }
  }
LAB_0034b8c0:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,uVar5,"ech_reconstitute_inner");
  uVar5 = 0x32;
  goto LAB_0034b8cc;
LAB_0034bcec:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                  ,0x672,"ech_reconstitute_inner");
  uVar5 = 0x50;
LAB_0034b8cc:
  puVar7 = (undefined *)0x6e;
LAB_0034b900:
  func_0x003a9570(param_1,uVar5,puVar7,0);
LAB_0034b908:
  func_0x0047680c(param_2);
  return 0;
}

