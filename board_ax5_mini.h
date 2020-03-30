#ifndef BOARD_AX5_MINI_H
#define BOARD_AX5_MINI_H


#if MOTHERBOARD == BOARD_AX5_MINI

// wrong board type set
#ifndef LPC1796
  #error "Oops!  Make sure you have selected LPC1796 processor as target (board AX5-Mini)"
#endif

#warning Need proper definition of PI
#define PI                        (3.14)

#define CLOCK_FREQ                (120000000)  // 120MHz specified at https://www.panucatt.com/azteeg_X5_mini_reprap_3d_printer_controller_p/ax5mini.htm

#define MAX_MOTORS                (3)

#define MOTOR_0_DIR_PIN           (P0_11)  // Copied 'X_DIR_PIN' from Marlin (pins_AZTEEG_MINI.h)
#define MOTOR_0_STEP_PIN          (P2_01)  // Copied 'X_STEP_PIN' from Marlin (pins_AZTEEG_MINI.h)
#define MOTOR_0_ENABLE_PIN        (P0_10)  // Copied 'X_ENABLE_PIN' from Marlin (pins_AZTEEG_MINI.h)
#define MOTOR_0_LIMIT_SWITCH_PIN  (P1_24)  // Copied 'X_STOP_PIN' from Marlin (pins_AZTEEG_MINI.h)

#define MOTOR_1_DIR_PIN           (P0_20)  // Copied 'Y_DIR_PIN' from Marlin (pins_AZTEEG_MINI.h)
#define MOTOR_1_STEP_PIN          (P2_02)  // Copied 'Y_STEP_PIN' from Marlin (pins_AZTEEG_MINI.h)
#define MOTOR_1_ENABLE_PIN        (P0_19)  // Copied 'Y_ENABLE_PIN' from Marlin (pins_AZTEEG_MINI.h)
#define MOTOR_1_LIMIT_SWITCH_PIN  (P1_26)  // Copied 'Y_STOP_PIN' from Marlin (pins_AZTEEG_MINI.h)

#define MOTOR_2_DIR_PIN           (P0_22)  // Copied 'Y_DIR_PIN' from Marlin (pins_AZTEEG_MINI.h)
#define MOTOR_2_STEP_PIN          (P2_03)  // Copied 'Y_STEP_PIN' from Marlin (pins_AZTEEG_MINI.h)
#define MOTOR_2_ENABLE_PIN        (P0_21)  // Copied 'Y_ENABLE_PIN' from Marlin (pins_AZTEEG_MINI.h)
#define MOTOR_2_LIMIT_SWITCH_PIN  (P1_28)  // Copied 'Y_STOP_PIN' from Marlin (pins_AZTEEG_MINI.h)

// #define MOTOR_3_DIR_PIN           (P0_05)  // Copied 'E0_DIR_PIN' from Marlin (pins_AZTEEG_MINI.h)
// #define MOTOR_3_STEP_PIN          (P2_00)  // Copied 'E0_STEP_PIN' from Marlin (pins_AZTEEG_MINI.h)
// #define MOTOR_3_ENABLE_PIN        (P0_04)  // Copied 'E0_ENABLE_PIN' from Marlin (pins_AZTEEG_MINI.h)
// #define MOTOR_3_LIMIT_SWITCH_PIN  (/*???*/)  // No obvious stop pin for extruder motor (pins_AZTEEG_MINI.h)

#define MAX_BOARD_SERVOS          (1)
#define SERVO0_PIN                (P1_29)  // Copied from Marlin

#define LED_PIN                   (P1_18)  // Copied from Marlin
#define LED_BUILTIN               (LED_PIN)  // Need to define this symbol

#undef HAS_WIFI
#undef HAS_SD
#undef HAS_LCD

#endif // BOARD_AX5_MINI

#endif // Header guard
