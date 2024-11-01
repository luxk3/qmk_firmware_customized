

#pragma once

#define WS2812_DI_PIN GP2
#define RGB_MATRIX_LED_COUNT 80


#define ENCODER_A_PINS { GP17 }
#define ENCODER_B_PINS { GP16 }
#define ENCODER_RESOLUTION 4

#define MASTER_LEFT
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0     // USART TX pin
#define SERIAL_USART_RX_PIN GP1     // USART RX pin

#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_INVERT_Y
#define SPLIT_POINTING_ENABLE
#define SPLIT_ACTIVITY_ENABLE


#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define RGB_MATRIX_SPLIT { 40, 40 }

#define SPLIT_ACTIVITY_ENABLE

#define SPI_DRIVER SPID1
#define SPI_MOSI_PIN GP12
#define SPI_MISO_PIN GP15
#define SPI_SCK_PIN GP14
#define PMW33XX_CS_PIN GP13 
#define PMW33XX_CPI 3200
#define MOUSE_EXTENDED_REPORT
#define PMW33XX_LIFTOFF_DISTANCE 0x4


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_SLEEP // turn off effects when suspended
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_ALL

