int maze_n = 1;
int maze_w = 11;
int maze_h = 11;
int maze_flags = 0;
const char *maze_args = "READY=\"SET\" PLAYER1=\"No1\" PLAYER2=\"No2\" GAMEOVER=\"FIN\" RMSG=6 RMSG2=4 CMSG=4 CMSG2=4 RHERO=9.5 RFRUIT=9.5 RGHOST=5.5 GHOSTS=2 COGHOST=0 ROGHOST=2 RTOP=4.5 WALL_COLORS=\"\\x06\" MORTAR_COLORS=\"\\x06\" DOT_COLORS=\"\\x0F\" ABOUT=\"Inspired by Doktor A\'s \'Pac Gentleman\'\"";
static const char builtin_mazefile_str[] = "lvl/pacgent.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\313\315\315\315\315\273\273"
  "\272\371\371\371\371\272\371\371\371\371\272\272"
  "\272\376\306\265\371\320\371\306\265\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\265\371\311\360\273\371\306\315\274\274"
  "  \371\371\272 \272\371\371   "
  "\311\315\265\371\310\313\274\371\306\315\273\273"
  "\272\371\371\371\371\272\371\371\371\371\272\272"
  "\272\376\306\265\371\320\371\306\265\376\272\272"
  "\272\371\371\371\371 \371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
;
