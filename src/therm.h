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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

/*
* ADC Counts 1024
* 5V
* { ADC Counts, Deg C}
*/

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
const PROGMEM float temptable_1[136] 
{
 1020,-15,
 1016,-10,
 1012, -5,
 1008,  0,
 1004,  5,
 999, 10,
 993, 15,
 985, 20,
 977, 25,
 966, 30,
 954, 35,
 939, 40,
 922, 45,
 903, 50,
 881, 55,
 857, 60,
 830, 65,
 801, 70,
 770, 75,
 737, 80,
 702, 85,
 665, 90,
 628, 95,
 591,100,
 553,105,
 516,110,
 480,115,
 445,120,
 411,125,
 379,130,
 348,135,
 320,140,
 293,145,
 268,150,
 245,155,
 224,160,
 205,165,
 187,170,
 171,175,
 156,180,
 143,185,
 131,190,
 120,195,
 109,200,
 100,205,
  92,210,
  84,215,
  78,220,
  71,225,
  66,230,
  61,235,
  56,240,
  52,245,
  48,250,
  44,255,
  41,260,
  38,265,
  35,270,
  33,275,
  31,280,
  28,285,
  27,290,
  25,295,
  23,300,
  22,305,
  20,310,
  19,315,
  18,320
};