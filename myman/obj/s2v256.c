int maze_n = 1;
int maze_w = 21;
int maze_h = 23;
int maze_flags = 0;
const char *maze_args = "RTOP=10.5 RGHOST=11.5 CGHOST=10.5 ROGHOST=0 COGHOST=0 GHOSTS=1 RHERO=1.5 CHERO=10.5 DIRHERO=RIGHT RFRUIT=1.5 CFRUIT=10.5 RMSG=22 CMSG=8 RMSG2=0 CMSG2=8    READY=\"READY\"  PLAYER1=\"P ONE\"  PLAYER2=\"P TWO\" GAMEOVER=\" BYE \" ABOUT=\"Inspired by HJ Nootenboom\'s Simpelpac for the VIC-20\"";
static const char builtin_mazefile_str[] = "lvl/simpel.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\313\315\315\315\315\315\313\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\272\371\371\371\371\371\272\371\371\371\371\371\371\272\272"
  "\314\315\315\265\371\322\371\320\371\306\315\265\371\320\371\322\371\306\315\315\271\271"
  "\272\371\371\371\371\272\371\371\371\371\371\371\371\371\371\272\371\371\371\371\272\272"
  "\314\265\371\322\371\320\371\306\315\265\371\306\315\265\371\320\371\322\371\306\271\271"
  "\272\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\371\272\272"
  "\310\273\371\320\371\306\315\265\371\322\371\322\371\306\315\265\371\320\371\311\274\274"
  "\0\272\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\272\0\0"
  "\311\274\371\306\315\265\371\322\371\320\371\320\371\322\371\306\315\265\371\310\273\273"
  "\272\371\371\371\371\371\371\272\371\371\371\371\371\272\371\371\371\371\371\371\272\272"
  "\314\315\315\265\371\322\371\320\371\311\315\265\371\320\371\322\371\306\315\315\271\271"
  "\272\371\371\371\371\272\371\371\371\272 \377\371\371\371\272\371\371\371\371\272\272"
  "\314\315\315\265\371\320\371\322\371\310\315\265\371\322\371\320\371\306\315\315\271\271"
  "\272\371\371\371\371\371\371\272\371\371\371\371\371\272\371\371\371\371\371\371\272\272"
  "\310\273\371\306\315\265\371\320\371\322\371\322\371\320\371\306\315\265\371\311\274\274"
  "\0\272\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\272\0\0"
  "\311\274\371\322\371\306\315\265\371\320\371\320\371\306\315\265\371\322\371\310\273\273"
  "\272\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\371\272\272"
  "\314\265\371\320\371\322\371\306\315\265\371\306\315\265\371\322\371\320\371\306\271\271"
  "\272\371\371\371\371\272\371\371\371\371\371\371\371\371\371\272\371\371\371\371\272\272"
  "\314\315\315\265\371\320\371\322\371\306\315\265\371\322\371\320\371\306\315\315\271\271"
  "\272\371\371\371\371\371\371\272\371\371\371\371\371\272\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\312\315\315\315\315\315\312\315\315\315\315\315\315\274\274"
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
;
