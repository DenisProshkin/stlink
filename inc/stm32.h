/*
 * File: stm32.h
 *
 * STM32-specific defines
 */

#ifndef STM32_H
#define STM32_H

/* Cortex core ids */
#define STM32VL_CORE_ID      0x1ba01477
#define STM32F7_CORE_ID      0x5ba02477
#define STM32H7_CORE_ID      0x6ba02477 // STM32H7 SWD ID Code
#define STM32H7_CORE_ID_JTAG 0x6ba00477 // STM32H7 JTAG ID Code (RM0433 pg3065)

/* Constant STM32 memory map figures */
#define STM32_FLASH_BASE           ((uint32_t)0x08000000)
#define STM32_F1_FLASH_BANK2_BASE  ((uint32_t)0x08080000)
#define STM32_H7_FLASH_BANK2_BASE  ((uint32_t)0x08100000)
#define STM32_SRAM_BASE            ((uint32_t)0x20000000)
#define STM32_G0_OPTION_BYTES_BASE ((uint32_t)0x1FFF7800)
#define STM32_G4_OPTION_BYTES_BASE ((uint32_t)0x1FFFF800)
#define STM32_L0_CATx_OPTION_BYTES_BASE ((uint32_t)0x1FF80000)
#define STM32_F2_OPTION_BYTES_BASE ((uint32_t)0x1FFFC000)
#define STM32_L4_OPTION_BYTES_BASE ((uint32_t)0x1FFF7800)
#define STM32_L1_OPTION_BYTES_BASE ((uint32_t)0x1FF80000)
#define STM32_F4_OPTION_BYTES_BASE ((uint32_t)0x40023C14)
#define STM32_F7_OPTION_BYTES_BASE ((uint32_t)0x1FFF0000)
#define STM32_H7_OPTION_BYTES_BASE ((uint32_t)0x5200201C)

#endif // STM32_H