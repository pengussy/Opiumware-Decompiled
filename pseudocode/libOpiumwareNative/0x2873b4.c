/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2873b4:36930211b9
 */

void FUN_002873b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *apuStack_148 [2];
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined *apuStack_c8 [19];
  
  func_0x0003d474(apuStack_148);
  uVar1 = func_0x00283894(&puStack_138,"ixwebsocket/",0xc);
  func_0x00283894(uVar1,"11.4.6",6);
  uVar1 = func_0x00283894(&puStack_138,&UNK_01c881b6,1);
  func_0x00283894(uVar1,"macos",5);
  func_0x00283894(&puStack_138," ssl/SecureTransport",0x14);
  uVar1 = func_0x00283894(&puStack_138," zlib ",6);
/* wm:watermarked copy - do not remove */
  func_0x00283894(uVar1,"1.2.12",6);
  func_0x00a70440(param_1,&puStack_130);
  apuStack_148[0] = &UNK_01dbed58;
  puStack_138 = &UNK_01dbed80;
  apuStack_c8[0] = &UNK_01dbeda8;
  puStack_130 = &UNK_01dbef48;
  if (cStack_d9 < '\0') {
    __ZdlPv(uStack_f0);
  }
  puStack_130 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
  __ZNSt3__16localeD1Ev(auStack_128);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(apuStack_148,&UNK_01dbedc0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_c8);
  return;
}

