int maze_n = 1;
int maze_w = 15;
int maze_h = 25;
int maze_flags = 0;
const char *maze_args = "READY=\"   READY!  \" GAMEOVER=\" GAME OVER \" PLAYER1=\"PLAYER  ONE\" PLAYER2=\"PLAYER  TWO\" RGHOST=4.5 ROGHOST=-1 COGHOST=1 RFRUIT=15.5 RTOP=4.5 RHERO=17.5 RMSG=1 CMSG=2 RMSG2=0 CMSG2=2 ABOUT=\"Inspired by UA\'s \'Cat Trax\' for the Emerson Arcadia 2001\"";
static const char builtin_mazefile_str[] = "lvl/cattrax.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\0\0\0\0\0\0\311\315\273\0\0\0\0\0\0\0"
  "\0\0\0\0\0\311\274 \310\273\0\0\0\0\0\0"
  "\311\315\315\315\315\271 \377 \314\315\315\315\315\273\273"
  "\272\371\371\371\371\307~~~\266\371\371\371\371\272\272"
  "\272\371\306\265\371\272\377  \272\371\306\265\371\272\272"
  "\272\371\371\371\371\310\265 \306\274\371\371\371\371\272\272"
  "\272\371\306\265\371\371   \371\371\306\265\371\272\272"
  "\272\371\371\371\371\322\371\322\371\322\371\371\371\371\272\272"
  "\312\315\265 \306\274\371\320\371\310\265 \306\315\312\312"
  " \371\371\371\371\371\371\371\371\371\371\371\371\371  "
  "\273\371\306\315\265\371\322 \322\371\306\315\265\371\311\311"
  "\272\371\371\371\371\371\272\376\272\371\371\371\371\371\272\272"
  "\312\265 \322\371\306\274 \310\265\371\322 \306\312\312"
  "\371\371\371\272\371\376 \376 \376\371\272\371\371\371 "
  "\313\265\371\320\371\306\265 \306\265\371\320\371\306\313\313"
  "\272\371\371\371\371\371\371 \371\371\371\371\371\371\272\272"
  "\272\371\311\265 \306\315\315\315\265 \306\273\371\272\272"
  "\272\371\272\371\371\371\371 \371\371\371\371\272\371\272\272"
  "\272\371\320\371\306\265\371\322\371\306\265\371\320\371\272\272"
  "\272\371\371\371\371\371\371\272\371\371\371\371\371\371\272\272"
  "\312\265\371\322\371\306\315\316\315\265\371\322\371\306\312\312"
  " \371\371\272\371\371\371\272\371\371\371\272\371\371  "
  "\273\371\306\312\315\265 \320 \306\315\312\265\371\311\311"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
