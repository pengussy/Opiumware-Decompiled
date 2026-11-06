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
 *  file-id: 0x38ae90:379d3268b5
 *  --------------------------------------------------------------------------*/

undefined8
FUN_0038ae90(long *param_1,long *param_2,undefined4 *param_3,undefined1 *param_4,undefined8 param_5,
            ushort *param_6)

{
  int iVar1;
  long lVar2;
  undefined1 uStack_55;
  undefined2 uStack_54;
  ushort uStack_52;
  
  if ((param_1[8] == 0) && (param_1[9] == 0)) {
    func_0x003e9590(param_1[2],0xf);
    iVar1 = (**(code **)(*param_1 + 0x18))(param_5,param_6,*(undefined8 *)(*param_1 + 0x20));
    if (iVar1 != 0) {
      if (*(long *)param_6 == 0) {
        func_0x003e95ac(param_1[2],9);
        return 0;
      }
      *param_2 = (long)param_1;
      *param_3 = 0x304;
      *param_4 = 0x16;
      lVar2 = *(long *)param_6;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      param_1[8] = lVar2;
      param_1[9] = lVar2;
      if ((code *)param_1[10] == (code *)0x0) {
        return 1;
      }
      uStack_55 = 0x16;
      if ((int)param_1[1] != 0) {
        uStack_55 = 0x17;
      }
      uStack_54 = 0x303;
      uStack_52 = *param_6 >> 8 | *param_6 << 8;
      (*(code *)param_1[10])(0,0x304,0x100,&uStack_55,5,param_1[0xb]);
      (*(code *)param_1[10])(0,0x304,0x101,param_4,1,param_1[0xb]);
      return 1;
    }
    *(undefined4 *)(param_1 + 7) = 0x50;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                    ,0x178,"quic_read_record");
    func_0x004466b0(0x14,&UNK_000c0103,0);
    *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
  }
  return 0xfffffffe;
}

