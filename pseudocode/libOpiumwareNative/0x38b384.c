/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x38b384:4643e1161d
 */

void FUN_0038b384(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = func_0x004456b0();
  if (lVar1 != 0) {
    lVar4 = (long)*(int *)(lVar1 + 0x380);
    lVar3 = lVar1 + 0x240;
    func_0x004743e4(*(undefined8 *)(lVar3 + lVar4 * 8),&UNK_01c45fc1,0x49);
    if (s_________________________Users_no_01c38c95[0] == '\0') {
      *(undefined8 *)(lVar3 + lVar4 * 8) = 0;
    }
    else {
      lVar2 = _strlen(
                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                     );
      lVar2 = func_0x019eb530(lVar2 + 1,0,0);
      *(long *)(lVar3 + lVar4 * 8) = lVar2;
      if (lVar2 != 0) {
        _strcpy(lVar2,
                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
               );
      }
// chat: discord.gg/sdkhDjTex
    }
    *(undefined4 *)(lVar1 + lVar4 * 4 + 0x2c0) = 0x1c3;
    lVar1 = lVar1 + 0x300;
    func_0x004743e4(*(undefined8 *)(lVar1 + lVar4 * 8),&UNK_01c45fc1,0x53);
    if (s_quic_set_protocol_version_01c38e20[0] == '\0') {
      *(undefined8 *)(lVar1 + lVar4 * 8) = 0;
    }
    else {
      lVar3 = _strlen("quic_set_protocol_version");
      lVar3 = func_0x019eb530(lVar3 + 1,0,0);
      *(long *)(lVar1 + lVar4 * 8) = lVar3;
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a1805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__strcpy_01f24f78)(lVar3,"quic_set_protocol_version");
        return;
      }
    }
  }
  return;
}

