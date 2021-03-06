#ifndef LIB_H
#define LIB_H
#include <LiquidCrystal.h>
#include "button.h"
#include "mega_info.h"

const char BUTTON_START_PIN = 2;
const char BUTTON_END_PIN = 5;
const int EMERGENCY_CODE = 404;
const int BUTTON_TIMEOUT = 1000; // 1 second
const char EMERGENCY_STOP_CHAR = 'x';
const char EAST_CHAR = 'e';
const char WEST_CHAR = 'w';
const char START_CHAR = 'p';
const char STOP_CHAR = 'q';
const char DOOR_OPEN_CHAR = 'o';
const char DOOR_CLOSE_CHAR = 'c';

const char RCV_EMERGENCY_CHAR = 'x';
const char RCV_DECELERATE_CHAR = 'd';
const char RCV_CONSTANT_SPEED_CHAR = 'n';
const char RCV_STOPPED_CHAR = 's';
const char RCV_EMERGENCY_CHAR = 'x';
const char RCV_ACCELERATE_CHAR = 'a';

void init_buttons(button *buttons);
void update_lcd(LiquidCrystal *lcd, button b, mega_info rcvd_info);
void enter_emergency_state();
void send_char(char c);
button get_pressed_button(button *buttons);
mega_info check_link_buffer();
#endif