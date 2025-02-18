#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

// Taiji Pi S3 Board configuration

#include <driver/gpio.h>
#include <driver/spi_master.h>

#define AUDIO_INPUT_REFERENCE    true
#define AUDIO_INPUT_SAMPLE_RATE  16000
#define AUDIO_OUTPUT_SAMPLE_RATE 16000
#define AUDIO_DEFAULT_OUTPUT_VOLUME 60
//部分补充
#define AUDIO_I2S_GPIO_MCLK GPIO_NUM_NC
#define AUDIO_I2S_GPIO_WS   GPIO_NUM_13
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_42
#define AUDIO_I2S_GPIO_DIN  GPIO_NUM_NC
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_41
#define AUDIO_MUTE_PIN      GPIO_NUM_48   // 低电平静音
//没有搜到 需要自定义
#define AUDIO_MIC_WS_PIN    GPIO_NUM_45
#define AUDIO_MIC_SD_PIN    GPIO_NUM_46
#define AUDIO_MIC_SCK_PIN   GPIO_NUM_47

#define DISPLAY_WIDTH       480
#define DISPLAY_HEIGHT      320
#define DISPLAY_MIRROR_X    true
#define DISPLAY_MIRROR_Y    false
#define DISPLAY_SWAP_XY     true

#define QSPI_LCD_H_RES           (320)
#define QSPI_LCD_V_RES           (480)
#define QSPI_LCD_BIT_PER_PIXEL   (16)

#define QSPI_LCD_HOST           SPI2_HOST
#define QSPI_PIN_NUM_LCD_PCLK   GPIO_NUM_47
#define QSPI_PIN_NUM_LCD_CS     GPIO_NUM_45
#define QSPI_PIN_NUM_LCD_DATA0  GPIO_NUM_21
#define QSPI_PIN_NUM_LCD_DATA1  GPIO_NUM_48
#define QSPI_PIN_NUM_LCD_DATA2  GPIO_NUM_40
#define QSPI_PIN_NUM_LCD_DATA3  GPIO_NUM_39
#define QSPI_PIN_NUM_LCD_RST    GPIO_NUM_NC
#define QSPI_PIN_NUM_LCD_BL     GPIO_NUM_1

#define DISPLAY_OFFSET_X  0
#define DISPLAY_OFFSET_Y  0

#define TP_PORT             (I2C_NUM_1)
#define TP_PIN_NUM_TP_SDA   (GPIO_NUM_4)
#define TP_PIN_NUM_TP_SCL   (GPIO_NUM_8)
#define TP_PIN_NUM_TP_RST   (GPIO_NUM_3)
#define TP_PIN_NUM_TP_INT   (GPIO_NUM_NC)

#define DISPLAY_BACKLIGHT_PIN           QSPI_PIN_NUM_LCD_BL
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

#define CUST_AXS15231B_PANEL_BUS_QSPI_CONFIG(sclk, d0, d1, d2, d3, max_trans_sz) \
    {                                                                             \
        .data0_io_num = d0,                                                       \
        .data1_io_num = d1,                                                       \
        .sclk_io_num = sclk,                                                      \
        .data2_io_num = d2,                                                       \
        .data3_io_num = d3,                                                       \
        .max_transfer_sz = max_trans_sz,                                          \
    }

#endif // _BOARD_CONFIG_H_