


#include "quantum.h"


#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { 
{
  // Key Matrix to LED Index
	{0, 1, 2, 3, 4, 5, 6, 7, NO_LED},
	{8, 9, 10, 11, 12, 13, 14, 37, NO_LED},
	{15, 16, 17, 18, 19, 20, 21, 38, NO_LED},
	{22, 23, 24, 25, 26, 27, 28, 29, NO_LED},
	{30, 31, 32, 33, 34, 35, 36, 39, NO_LED},
	
	//right
	{40, 41, 42, 43, 44, 45, 46, 47, NO_LED},
	{48, 49, 50, 51, 52, 53, 54, 55, 56},
	{57, 58, 59, 60, 61, 62, 63, 64, NO_LED},
	{65, 66, 67, 68, 69, 70, 71, 72, NO_LED},
	{73, 74, 75, 76, 77, 78, 79, NO_LED, NO_LED}
	
}, {
  // LED Index to Physical Position
	// LED INDEX of underglow to phisical position: 10 LEDS
	
	// LED index position to phisical: keylights
	{ 0, 0 }, { 1, 0 }, { 2, 0 }, { 3, 0 }, { 4, 0 }, { 5, 0 }, { 6, 0 }, { 7, 0 },
	{ 0, 1 }, { 1, 1 }, { 2, 1 }, { 3, 1 }, { 4, 1 }, { 5, 1 }, { 6, 1 }, { 0, 5 },
	{ 0, 2 }, { 1, 2 }, { 2, 2 }, { 3, 2 }, { 4, 2 }, { 5, 2 }, { 6, 2 }, { 1, 5 },
	{ 0, 3 }, { 1, 3 }, { 2, 3 }, { 3, 3 }, { 4, 3 }, { 5, 3 }, { 6, 3 }, { 7, 3 },
	{ 0, 4 }, { 1, 4 }, { 2, 4 }, { 3, 4 }, { 4, 4 }, { 5, 4 }, { 6, 4 }, { 2, 5 },
	
	{ 8, 0 }, { 9, 0 }, { 10, 0 }, { 11, 0 }, { 12, 0 }, { 13, 0 }, { 14, 0 }, { 16, 0 },
	{ 7, 1 }, { 8, 1 }, { 9, 1 }, { 10, 1 }, { 11, 1 }, { 12, 1 }, { 13, 1 }, { 14, 1 }, { 16, 1 },
	{ 7, 2 }, { 8, 2 }, { 9, 2 }, { 10, 2 }, { 11, 2 }, { 12, 2}, { 13, 2 }, { 16, 2 },
	{ 8, 3 }, { 9, 3 }, { 10, 3 }, { 11, 3 }, { 12, 3 }, { 13, 3 }, { 14, 3 }, { 16, 3 },
	{ 7, 4 }, { 8, 4 }, { 9, 4 }, { 10, 4 }, { 11, 4 }, { 12, 4 }, { 13, 4 }
	
}, {
  // LED Index to Flag
	// LED index flag:
	// 2 = underglow
	// 1 keylight
	// 4 alpha letter
	// modifier
	4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4,
	
	//right
	4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4
	
} 
};

#endif