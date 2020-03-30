#ifndef BOARD_AX5_MINI_H
#define BOARD_AX5_MINI_H


#if MOTHERBOARD == BOARD_AX5_MINI

// wrong board type set
#ifndef LPC1796
  #error "Oops!  Make sure you have selected LPC1796 processor as target (board AX5-Mini)"
#endif

#define MAX_MOTORS                (0)
#define MAX_BOARD_SERVOS          (0)

#undef HAS_WIFI
#undef HAS_SD
#undef HAS_LCD

#endif // BOARD_AX5_MINI

#endif // Header guard
