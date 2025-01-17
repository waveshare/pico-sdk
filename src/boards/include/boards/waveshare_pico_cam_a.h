/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

// pico_cmake_set PICO_PLATFORM=rp2040

#ifndef _BOARDS_WAVESHARE_PICO_CAM_A_H
#define _BOARDS_WAVESHARE_PICO_CAM_A_H

// For board detection
#define WAVESHARE_PICO_CAM_A

// --- UART ---
#ifndef PICO_DEFAULT_UART
#define PICO_DEFAULT_UART 0
#endif
#ifndef PICO_DEFAULT_UART_TX_PIN
#define PICO_DEFAULT_UART_TX_PIN 0
#endif
#ifndef PICO_DEFAULT_UART_RX_PIN
#define PICO_DEFAULT_UART_RX_PIN 1
#endif

// no PICO_DEFAULT_WS2812_PIN

// --- I2C ---
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C 1
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN 2
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN 3
#endif

// --- LCD ---
#ifndef WAVESHARE_LCD_SPI
#define WAVESHARE_LCD_SPI 1
#endif
#ifndef WAVESHARE_LCD_DC_PIN
#define WAVESHARE_LCD_DC_PIN 9
#endif
#ifndef WAVESHARE_LCD_CS_PIN
#define WAVESHARE_LCD_CS_PIN 13
#endif
#ifndef WAVESHARE_LCD_SCLK_PIN
#define WAVESHARE_LCD_SCLK_PIN 10
#endif
#ifndef WAVESHARE_LCD_TX_PIN
#define WAVESHARE_LCD_TX_PIN 11
#endif
#ifndef WAVESHARE_LCD_RST_PIN
#define WAVESHARE_LCD_RST_PIN 7
#endif

// --- FLASH ---
#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

// pico_cmake_set_default PICO_FLASH_SIZE_BYTES = (16 * 1024 * 1024)
#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (16 * 1024 * 1024)
#endif
// Drive high to force power supply into PWM mode (lower ripple on 3V3 at light loads)
#define PICO_SMPS_MODE_PIN 23

// All boards have B1 RP2040
#ifndef PICO_RP2040_B0_SUPPORTED
#define PICO_RP2040_B0_SUPPORTED  0
#endif

#endif