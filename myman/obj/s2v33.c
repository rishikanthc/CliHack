int maze_n = 1;
int maze_w = 21;
int maze_h = 27;
int maze_flags = 0;
const char *maze_args = "READY=\" READY!\" GAMEOVER=\" GONE  \" PLAYER1=\" P ONE \" PLAYER2=\" P TWO \" RGHOST=13.5 COGHOST=1 RFRUIT=15.5 RTOP=10 RHERO=20.5 RMSG=15 CMSG=7 RMSG2=10 CMSG2=7 ABOUT=\"Inspired by Namco\'s Famicom/NES Pac-Man conversion\"";
static const char builtin_mazefile_str[] = "lvl/nespac.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\313\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\311\315\273\371\311\315\273\371\272\371\311\315\273\371\311\315\273\371\272\272"
  "\272\376\272 \272\371\272 \272\371\272\371\272 \272\371\272 \272\376\272\272"
  "\272\371\310\315\274\371\310\315\274\371\320\371\310\315\274\371\310\315\274\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\311\315\273\371\322\371\311\315\315\315\273\371\322\371\311\315\273\371\272\272"
  "\272\371\310\315\274\371\272\371\310\315\313\315\274\371\272\371\310\315\274\371\272\272"
  "\272\371\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\371\272\272"
  "\310\315\315\315\273\371\314\315\265 \320 \306\315\271\371\311\315\315\315\274\274"
  "    \272\371\272       \272\371\272     "
  "    \272\371\272 \311\315\360\315\273 \272\371\272     "
  "\315\315\315\315\274\371\320 \272   \272 \320\371\310\315\315\315\315\315"
  "     \371  \272   \272  \371      "
  "\315\315\315\315\273\371\322 \310\315\315\315\274 \322\371\311\315\315\315\315\315"
  "    \272\371\272       \272\371\272     "
  "    \272\371\272 \311\315\315\315\273 \272\371\272     "
  "\311\315\315\315\274\371\320 \310\315\313\315\274 \320\371\310\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\273\371\306\315\265\371\320\371\306\315\265\371\311\315\265\371\272\272"
  "\272\376\371\371\272\371\371\371\371\371 \371\371\371\371\371\272\371\371\376\272\272"
  "\314\315\273\371\272\371\322\371\311\315\315\315\273\371\322\371\272\371\311\315\271\271"
  "\314\315\274\371\320\371\272\371\310\315\313\315\274\371\272\371\320\371\310\315\271\271"
  "\272\371\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\312\315\265\371\320\371\306\315\312\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
