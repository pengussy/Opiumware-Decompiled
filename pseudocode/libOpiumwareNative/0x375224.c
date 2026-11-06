/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x375224:fcd7ca445b
 */

/* WARNING: Possible PIC construction at 0x00375338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00375360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003753ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0037173c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0037175c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00371740) */
/* WARNING: Removing unreachable block (ram,0x003753f0) */
/* WARNING: Removing unreachable block (ram,0x00371704) */
/* WARNING: Removing unreachable block (ram,0x00371788) */
/* WARNING: Removing unreachable block (ram,0x00371708) */
/* WARNING: Removing unreachable block (ram,0x00375364) */
/* WARNING: Removing unreachable block (ram,0x0037537c) */
/* WARNING: Removing unreachable block (ram,0x00375400) */
/* WARNING: Removing unreachable block (ram,0x0037538c) */
/* WARNING: Removing unreachable block (ram,0x00375418) */
/* WARNING: Removing unreachable block (ram,0x00375428) */
/* WARNING: Removing unreachable block (ram,0x0037539c) */
/* WARNING: Removing unreachable block (ram,0x003753a8) */
/* WARNING: Removing unreachable block (ram,0x003753ac) */
/* wm:origin: github.com/pengussy */
/* WARNING: Removing unreachable block (ram,0x003753b0) */
/* WARNING: Removing unreachable block (ram,0x003753b4) */
/* WARNING: Removing unreachable block (ram,0x003753d0) */
/* WARNING: Removing unreachable block (ram,0x003753d8) */
/* WARNING: Removing unreachable block (ram,0x003753dc) */
/* WARNING: Removing unreachable block (ram,0x0037533c) */
/* WARNING: Removing unreachable block (ram,0x00371760) */

void FUN_00375224(long param_1)

{
  if (*(long *)(param_1 + 0x418) != 0) {
    func_0x003732fc(*(long *)(param_1 + 0x418),0);
    func_0x003732fc(*(undefined8 *)(param_1 + 0x418),1);
    func_0x003732fc(*(undefined8 *)(param_1 + 0x418),2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00380230(*(long *)(param_1 + 0x38),param_1);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00388640(*(long *)(param_1 + 0x40),param_1);
  }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  func_0x0038b784(*(undefined8 *)(param_1 + 0xd8));
  func_0x0038e75c(*(undefined8 *)(param_1 + 0xe0));
  func_0x00374160(*(undefined8 *)(param_1 + 0xe8));
  func_0x00384fb8(*(undefined8 *)(param_1 + 0x420));
  if (*(long *)(param_1 + 0x408) != 0) {
    (**(code **)(*(long *)(param_1 + 0x410) + 8))();
  }
  if ((*(byte *)(param_1 + 0x621) >> 4 & 1) != 0) {
    func_0x0011ab24(param_1 + 0x3e0);
  }
  func_0x00372ac0(*(undefined8 *)(param_1 + 0x418));
  if ((*(byte *)(param_1 + 0x621) >> 5 & 1) != 0) {
    func_0x00389224(param_1 + 0x350);
  }
  FUN_00388994(*(undefined8 *)(param_1 + 0x448));
  FUN_00385df4(*(undefined8 *)(param_1 + 0x460));
  FUN_00388994(*(undefined8 *)(param_1 + 0x450));
  FUN_00385df4(*(undefined8 *)(param_1 + 0x468));
  FUN_00388994(*(undefined8 *)(param_1 + 0x458));
  FUN_00385df4(*(undefined8 *)(param_1 + 0x470));
  func_0x00383f34(*(undefined8 *)(param_1 + 0x550));
  *(undefined8 *)(param_1 + 0x550) = 0;
  func_0x0038a160(*(undefined8 *)(param_1 + 0x28));
  FUN_00382c80(*(undefined8 *)(param_1 + 0x428));
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (*(undefined8 *)(param_1 + 0x50),
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
/* watermarked copy - do not remove - github.com/pengussy */
               ,0x1ab);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

