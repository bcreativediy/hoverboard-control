#pragma once

#include "config.h"
#include <Arduino.h>

void setupInput();
void mainloop( void *pvparameters );

extern volatile int espnowTimeout;