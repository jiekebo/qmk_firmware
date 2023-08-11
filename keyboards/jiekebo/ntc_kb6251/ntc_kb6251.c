// Copyright 2022 jiekebo (@jiekebo)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

void keyboard_pre_init_kb(void) {
  /* Setting status LEDs pins to output and +5V (off) */
  setPinOutput(B10);
  setPinOutput(B2);
  setPinOutput(B1);
  writePinHigh(B10);
  writePinHigh(B2);
  writePinHigh(B1);
}

bool led_update_kb(led_t led_state) {
    if(led_update_user(led_state)) {
        writePin(B10, !led_state.num_lock);
        writePin(B2, !led_state.caps_lock);
        writePin(B1, !led_state.scroll_lock);
    }
    return true;
}
