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
 *  file-id: 0x100002420:0da9cf946d
 *  --------------------------------------------------------------------------*/

__uint64_t __OSSwapInt64(__uint64_t _data)

{
  return _data >> 0x38 | (_data & 0xff000000000000) >> 0x28 | (_data & 0xff0000000000) >> 0x18 |
         (_data & 0xff00000000) >> 8 | (_data & 0xff000000) << 8 | (_data & 0xff0000) << 0x18 |
/* unlicensed copy if this notice is missing - github.com/pengussy */
         (_data & 0xff00) << 0x28 | _data << 0x38;
}
