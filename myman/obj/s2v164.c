int maze_n = 1;
int maze_w = 17;
int maze_h = 17;
int maze_flags = 0;
const char *maze_args = "RGHOST=8.5 RTOP=8.5 RHERO=12.5 RFRUIT=12.5 RMSG=16 CMSG=5 RMSG2=0 CMSG2=5 GHOSTS=6 ROGHOST=0 COGHOST=1 READY=\"READY!!\" PLAYER1=\"PLAYER1\" PLAYER2=\"PLAYER2\" GAMEOVER=\"GOODBYE\" ABOUT=\"Inspired by Brian Postma\'s \'Java PacMan\'/\'PacMan 3D\'\"";
static const char builtin_mazefile_str[] = "lvl/javapac.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\270\325\315\315\315\270\325\315\315\315\315\273\273"
  "\272\371\371\371\371\300\331\371\371\371\300\331\371\371\371\371\272\272"
  "\272\376\306\265\371\371\371\371\007\371\371\371\371\306\265\376\272\272"
  "\272\371\371\371\371\306\273\371\371\371\311\265\371\371\371\371\272\272"
  "\272\371\332\277\371\371\272\371\322\371\272\371\371\332\277\371\272\272"
  "\272\371\300\331\007\371\320\371\272\371\320\371\007\300\331\371\272\272"
  "\272\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\272\272"
  "\310\273\371\322\371\322\371\306\312\265\371\322\371\322\371\311\274\274"
  " \272\371\272\371\272\371\377 \377\371\272\371\272\371\272  "
  "\311\274\371\320\371\320\371\306\315\265\371\320\371\320\371\310\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\277\371\007\371\007\371\332\304\304\277\371\272\272"
  "\272\371\300\304\304\331\371\371 \371\371\300\304\304\331\371\272\272"
  "\272\371\371\371\371\007\371\306\313\265\371\007\371\371\371\371\272\272"
  "\272\376\306\265\371\371\371\371\320\371\371\371\371\306\265\376\272\272"
  "\272\371\371\371\371\332\277\371\371\371\332\277\371\371\371\371\272\272"
  "\310\315\315\315\315\276\324\315\315\315\276\324\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
