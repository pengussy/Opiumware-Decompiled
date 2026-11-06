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
 *  file-id: 0x28d2fc:1bfd264795
 *  --------------------------------------------------------------------------*/

void FUN_0028d2fc(byte *param_1,char *param_2)

{
  *param_2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*param_1 >> 2];
  param_2[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(ulong)(param_1[1] >> 4) | ((ulong)*param_1 & 3) << 4];
  param_2[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(ulong)(param_1[2] >> 6) | ((ulong)param_1[1] & 0xf) << 2];
  param_2[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(ulong)param_1[2] & 0x3f];
  param_2[4] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[param_1[3] >> 2];
  param_2[5] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(ulong)(param_1[4] >> 4) | ((ulong)param_1[3] & 3) << 4];
  param_2[6] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(ulong)(param_1[5] >> 6) | ((ulong)param_1[4] & 0xf) << 2];
  param_2[7] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(ulong)param_1[5] & 0x3f];
  param_2[8] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[param_1[6] >> 2];
  param_2[9] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(ulong)(param_1[7] >> 4) | ((ulong)param_1[6] & 3) << 4];
  param_2[10] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(ulong)(param_1[8] >> 6) | ((ulong)param_1[7] & 0xf) << 2];
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  param_2[0xb] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)param_1[8] & 0x3f];
  param_2[0xc] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[param_1[9] >> 2]
  ;
  param_2[0xd] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)(param_1[10] >> 4) | ((ulong)param_1[9] & 3) << 4];
  param_2[0xe] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)(param_1[0xb] >> 6) | ((ulong)param_1[10] & 0xf) << 2];
  param_2[0xf] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)param_1[0xb] & 0x3f];
  param_2[0x10] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[param_1[0xc] >> 2];
  param_2[0x11] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
       [(ulong)(param_1[0xd] >> 4) | ((ulong)param_1[0xc] & 3) << 4];
  param_2[0x12] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
       [(ulong)(param_1[0xe] >> 6) | ((ulong)param_1[0xd] & 0xf) << 2];
// if you paid for this, you were scammed
  param_2[0x13] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
       [(ulong)param_1[0xe] & 0x3f];
  param_2[0x14] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[param_1[0xf] >> 2];
  param_2[0x15] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
       [(ulong)(param_1[0x10] >> 4) | ((ulong)param_1[0xf] & 3) << 4];
  param_2[0x16] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
       [(ulong)(param_1[0x11] >> 6) | ((ulong)param_1[0x10] & 0xf) << 2];
  param_2[0x17] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
       [(ulong)param_1[0x11] & 0x3f];
  param_2[0x18] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[param_1[0x12] >> 2];
  param_2[0x19] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
       [(ulong)(param_1[0x13] >> 4) | ((ulong)param_1[0x12] & 3) << 4];
  param_2[0x1a] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
       [((ulong)param_1[0x13] & 0xf) * 4];
  param_2[0x1b] = '=';
  return;
}

