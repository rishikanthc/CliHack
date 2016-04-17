int maze_n = 1;
int maze_w = 19;
int maze_h = 23;
int maze_flags = 0;
const char *maze_args = "READY=\" READY!\" GAMEOVER=\"GOODBYE\" PLAYER1=\" P ONE \" PLAYER2=\" P TWO \" RGHOST=11 ROGHOST=2 COGHOST=1 RFRUIT=13.5 RTOP=7.5 RHERO=17.5 RMSG=13 CMSG=6 RMSG2=7 CMSG2=6 ABOUT=\"Inspired by Nukey Shay\'s \'Hack \'Em\' Pesco hack\"";
static const char builtin_mazefile_str[] = "lvl/hackem.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\313\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\272"
  "\272\376\306\265\371\306\315\265\371\320\371\306\315\265\371\306\265\376\272\272"
  "\272\371\371\371\371\371\371\371\371 \371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\265\371\322\371\306\315\313\315\265\371\322\371\306\265\371\272\272"
  "\272\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\272\272"
  "\310\315\315\273\371\314\315\265\371\320\371\306\315\271\371\311\315\315\274\274"
  "   \272\371\272       \272\371\272    "
  "   \272\371\272 \311\315\360\315\273 \272\371\272    "
  "   \272\371\272 \272   \272 \272\371\272    "
  "\315\315\315\274\371\320 \272   \272 \320\371\310\315\315\315\315"
  "    \371  \272   \272  \371     "
  "\315\315\315\273\371\322 \310\315\315\315\274 \322\371\311\315\315\315\315"
  "   \272\371\272       \272\371\272    "
  "\311\315\315\274\371\320 \306\315\313\315\265 \320\371\310\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\272"
  "\272\376\306\273\371\306\315\265\371\320\371\306\315\265\371\311\265\376\272\272"
  "\272\371\371\272\371\371\371\371\371 \371\371\371\371\371\272\371\371\272\272"
  "\314\265\371\320\371\322\371\306\315\313\315\265\371\322\371\320\371\306\271\271"
  "\272\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\272\272"
  "\272\371\306\315\315\312\315\265\371\320\371\306\315\312\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371 \371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
