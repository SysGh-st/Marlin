/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define BOARD_INFO_NAME "BIGTREE SKR 1.4 TURBO"
#define SKR_HAS_LPC1769

//
// EEPROM
//
#if NONE(FLASH_EEPROM_EMULATION, SDCARD_EEPROM_EMULATION)
  #define FLASH_EEPROM_EMULATION
  //#define SDCARD_EEPROM_EMULATION
#endif

//
// Include SKR 1.4 pins
//
#include "../lpc1768/pins_BTT_SKR_V1_4.h"
