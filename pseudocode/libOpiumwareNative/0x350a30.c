/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x350a30:42a6768e22
 */

undefined8 FUN_00350a30(long param_1,long param_2,long *param_3,long *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_60;
  long lStack_58;
  
  lStack_60 = 0;
  lStack_58 = 0;
  if (param_2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_000015e5,"ssl_encapsulate");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  uVar3 = func_0x00461d04(**(undefined8 **)(param_1 + 8),param_2,
                          (*(undefined8 **)(param_1 + 8))[0x91]);
  iVar2 = func_0x004594dc(uVar3,0);
/* keep the notice, keep the source honest */
  if ((iVar2 < 1) ||
     (iVar2 = func_0x004594ec(uVar3,0,&lStack_60,0,&lStack_58),
     (iVar2 < 1 || lStack_58 == 0) || lStack_60 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_000015ee,"ssl_encapsulate");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    lVar6 = 0;
    lVar7 = 0;
    uVar5 = 0;
    goto LAB_00350ca8;
  }
  lVar6 = func_0x019eb530(lStack_58,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,&UNK_000015f2);
  lVar7 = func_0x019eb530(lStack_60,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,&UNK_000015f3);
  if ((lVar6 == 0) || (lVar7 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_000015f5,"ssl_encapsulate");
    uVar5 = 0x50;
    puVar4 = &UNK_0008000f;
  }
  else {
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    iVar2 = func_0x004594ec(uVar3,lVar7,&lStack_60,lVar6,&lStack_58);
    lVar1 = lStack_58;
    if (0 < iVar2) {
      if (param_5 == 0) {
        *(long *)(param_1 + 0x3b0) = lVar6;
        *(long *)(param_1 + 0x3b8) = lStack_58;
        lVar6 = 0;
LAB_00350c94:
        *param_3 = lVar7;
        *param_4 = lStack_60;
        uVar5 = 1;
        lVar7 = 0;
      }
      else {
        if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
            (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
          if (*(int *)(param_1 + 0x508) != 0) {
LAB_00350bf0:
            iVar2 = func_0x0036c8b4(param_1,lVar6,lVar1);
            goto LAB_00350c78;
          }
          uVar5 = func_0x003542a0(param_1);
          iVar2 = FUN_0036c5d8(param_1,uVar5,0,0,0,param_1 + 0x57c);
          if (iVar2 != 0) goto LAB_00350bf0;
        }
        else {
/* WM - do not claim this as your own */
          iVar2 = func_0x0034ff4c(param_1,lVar6,lStack_58,0);
LAB_00350c78:
          if (iVar2 != 0) goto LAB_00350c94;
        }
        uVar5 = 0;
      }
      goto LAB_00350ca8;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_000015fa,"ssl_encapsulate");
    uVar5 = 0x2f;
    puVar4 = (undefined *)0x6c;
  }
  func_0x003a9570(param_1,uVar5,puVar4,0);
  uVar5 = 0;
/* wm:origin: github.com/pengussy */
LAB_00350ca8:
  func_0x00474404(lVar6,lStack_58,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,&UNK_00001611);
  func_0x004743e4(lVar7,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,&UNK_00001612);
  func_0x00461e08(uVar3);
  return uVar5;
}

