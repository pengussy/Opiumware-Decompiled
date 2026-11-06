/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x290df4:5ee1026628
 */

void FUN_00290df4(undefined8 param_1,long param_2)

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
  func_0x00283894(&puStack_138,"Sec-WebSocket-Extensions: permessage-deflate",0x2c);
  if (*(char *)(param_2 + 1) == '\x01') {
    func_0x00283894(&puStack_138,"; client_no_context_takeover",0x1c);
  }
  if (*(char *)(param_2 + 2) == '\x01') {
    func_0x00283894(&puStack_138,"; server_no_context_takeover",0x1c);
  }
  uVar1 = func_0x00283894(&puStack_138,"; server_max_window_bits=",0x19);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar1,*(undefined1 *)(param_2 + 4));
  uVar1 = func_0x00283894(&puStack_138,"; client_max_window_bits=",0x19);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar1,*(undefined1 *)(param_2 + 3));
  func_0x00283894(&puStack_138,&UNK_01c2d5f8,2);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
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

