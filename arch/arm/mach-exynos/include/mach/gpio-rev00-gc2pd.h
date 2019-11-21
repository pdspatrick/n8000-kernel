#ifndef __MACH_GPIO_MIDAS_H
#define __MACH_GPIO_MIDAS_H __FILE__

#include <mach/gpio.h>

extern void midas_config_gpio_table(void);
extern void midas_config_sleep_gpio_table(void);

extern int s3c_gpio_slp_cfgpin(unsigned int pin, unsigned int config);
extern int s3c_gpio_slp_setpull_updown(unsigned int pin, unsigned int config);

#define GPIO_eMMC_EN		EXYNOS4_GPK0(2)

#define GPIO_BOOT_MODE		EXYNOS4_GPX0(3)

#define GPIO_FM_I2S_CLK		EXYSNO4_GPC0(0)
#define GPIO_FM_I2S_SYNC	EXYSNO4_GPC0(2)
#define GPIO_FM_I2S_DI		EXYSNO4_GPC0(3)
#define GPIO_FM_I2S_DO		EXYSNO4_GPC0(4)

#define GPIO_IF_PMIC_SDA	EXYNOS4212_GPM2(0)
#define GPIO_IF_PMIC_SCL	EXYNOS4212_GPM2(1)
#define GPIO_PMIC_SDA		EXYNOS4_GPB(2)
#define GPIO_PMIC_SCL		EXYNOS4_GPB(3)

#define GPIO_ADC_SCL		EXYNOS4_GPY0(2)
#define GPIO_ADC_SDA		EXYNOS4_GPY0(3)
#define GPIO_ADC_INT		EXYNOS4_GPX2(4)	/* rev0.0, 0.1 */

/* Camera */
#define GPIO_CAM_SPI_SCLK	EXYNOS4_GPB(4)
#define GPIO_CAM_SPI_SSN	EXYNOS4_GPB(5)
#define GPIO_CAM_SPI_MISO	EXYNOS4_GPB(6)
#define GPIO_CAM_SPI_MOSI	EXYNOS4_GPB(7)

#define GPIO_CAM_MCLK		EXYNOS4212_GPJ1(3)

#define GPIO_ISP_CORE_EN	EXYNOS4212_GPM0(3)
#define GPIO_MOT_EN		EXYNOS4212_GPM0(5)
#define GPIO_SAMBAZ_RESET	EXYNOS4212_GPM0(6)
#define GPIO_CAM_IO_EN		EXYNOS4212_GPM0(7)

#define GPIO_CAM_VT_nRST	EXYNOS4212_GPM1(6)

#define GPIO_VTCAM_MCLK		EXYNOS4212_GPM2(2)

#define GPIO_8M_CAM_SCL_18V	EXYNOS4_GPD1(0)
#define GPIO_8M_CAM_SDA_18V	EXYNOS4_GPD1(1)

#define GPIO_VT_CAM_SCL_18V	EXYNOS4212_GPM4(2)
#define GPIO_VT_CAM_SDA_18V	EXYNOS4212_GPM4(3)

#if defined(CONFIG_GPS_BCMxxxxx)
#define GPIO_GPS_RXD		EXYNOS4_GPA0(4)
#define GPIO_GPS_RXD_AF		2
#define GPIO_GPS_TXD		EXYNOS4_GPA0(5)
#define GPIO_GPS_TXD_AF		2
#define GPIO_GPS_CTS		EXYNOS4_GPA0(6)
#define GPIO_GPS_CTS_AF		2
#define GPIO_GPS_RTS		EXYNOS4_GPA0(7)
#define GPIO_GPS_RTS_AF		2
#define GPIO_GPS_PWR_EN		EXYNOS4_GPL2(2)
#endif

#define GPIO_TOP_PCB_PWREN	EXYNOS4_GPL2(4)
#define GPIO_LED_3V_EN	EXYNOS4_GPY4(7)

/* Sensors & NFC */
#define GPIO_PS_ALS_EN_285	EXYNOS4_GPY4(3)	/* ALS_2.85V */
#define GPIO_PS_ALS_EN_3	EXYNOS4_GPY4(4)	/* ALS_3V */
#define GPIO_PS_ALS_INT		EXYNOS4_GPX3(0)
#define GPIO_PS_ALS_SCL_28V	EXYNOS4212_GPM4(0)
#define GPIO_PS_ALS_SDA_28V	EXYNOS4212_GPM4(1)

#define GPIO_ACC_INT		EXYNOS4_GPX0(0)
#define GPIO_GYRO_INT		EXYNOS4_GPF0(3)
#define GPIO_GYRO_DE		EXYNOS4_GPL2(0)

#define GPIO_GSENSE_SDA_18V	EXYNOS4_GPD1(2)
#define GPIO_GSENSE_SCL_18V	EXYNOS4_GPD1(3)

#define GPIO_MSENSOR_INT	EXYNOS4212_GPJ0(7)
#define GPIO_MSENSOR_SDA_18V	EXYNOS4_GPY2(4)
#define GPIO_MSENSOR_SCL_18V	EXYNOS4_GPY2(5)

#define GPIO_VT_CAM_18V_EN	EXYNOS4_GPY3(6)

#define GPIO_MSENSE_RST_N	EXYNOS4212_GPJ0(5)

#define GPIO_NFC_EN		EXYNOS4_GPL2(6)
#define GPIO_NFC_FIRMWARE	EXYNOS4_GPL2(7)
#define GPIO_NFC_IRQ		EXYNOS4_GPX2(4)
#define GPIO_NFC_SDA_18V	EXYNOS4_GPY2(2)
#define GPIO_NFC_SCL_18V	EXYNOS4_GPY2(3)
/* Sensors  & NFC */

#define GPIO_TF_EN		EXYNOS4_GPY2(0)

#define GPIO_DET_35		EXYNOS4_GPX0(1)
#define GPIO_EAR_SEND_END	EXYNOS4_GPX3(6)

#define GPIO_MIC_BIAS_EN	EXYNOS4_GPF1(7)
#define GPIO_SUB_MIC_BIAS_EN	EXYNOS4_GPF2(0)
#define GPIO_THIRD_MIC_BIAS_EN	EXYNOS4212_GPJ0(2)
#define GPIO_EAR_MIC_BIAS_EN	EXYNOS4212_GPJ0(3)

#define GPIO_PMU_RST		EXYNOS4_GPX3(2)

#define GPIO_PMIC_IRQ		EXYNOS4_GPX0(7)
#define GPIO_IF_PMIC_IRQ	EXYNOS4_GPX1(5)

#define GPIO_TSP_INT		EXYNOS4212_GPM2(3)
#define GPIO_TSP_SDA_18V	EXYNOS4_GPA1(2)
#define GPIO_TSP_SCL_18V	EXYNOS4_GPA1(3)

#define GPIO_BT_EN		EXYNOS4_GPL0(6)
#define GPIO_BT_WAKE		EXYNOS4_GPX3(1)
#define GPIO_BT_HOST_WAKE	EXYNOS4_GPX2(6)
#define IRQ_BT_HOST_WAKE	IRQ_EINT(22)

#define GPIO_BT_RXD		EXYNOS4_GPA0(0)
#define GPIO_BT_RXD_AF		2

#define GPIO_BT_TXD		EXYNOS4_GPA0(1)
#define GPIO_BT_TXD_AF		2

#define GPIO_BT_CTS		EXYNOS4_GPA0(2)
#define GPIO_BT_CTS_AF		2

#define GPIO_BT_RTS		EXYNOS4_GPA0(3)
#define GPIO_BT_RTS_AF		2

#define GPIO_FLM_RXD		EXYNOS4_GPA1(4)
#define GPIO_FLM_RXD_AF		2

#define GPIO_FLM_TXD		EXYNOS4_GPA1(5)
#define GPIO_FLM_TXD_AF		2

#define GPIO_3_TOUCH_SDA	EXYNOS4_GPC0(3)
#define GPIO_3_TOUCH_SCL	EXYNOS4_GPC0(4)
#define GPIO_3_TOUCH_INT	EXYNOS4_GPX0(5)
#define GPIO_3_TOUCH_EN		EXYNOS4_GPY4(6)

#define GPIO_HDMI_EN		EXYNOS4_GPL0(4)

#define GPIO_PWM0		EXYNOS4_GPD0(0)
#define GPIO_PWM1		EXYNOS4_GPD0(1)
#define GPIO_PWM2		EXYNOS4_GPD0(2)
#define GPIO_PWM3		EXYNOS4_GPD0(3)

#define GPIO_VIBTONE_EN		EXYNOS4212_GPJ0(6)

#define GPIO_WLAN_EN		EXYNOS4212_GPJ0(0)
#define GPIO_WLAN_EN_AF		1
#define GPIO_WLAN_HOST_WAKE	EXYNOS4_GPX2(5)
#define GPIO_WLAN_HOST_WAKE_AF	0xF
#define GPIO_WLAN_SDIO_CLK	EXYNOS4_GPK3(0)
#define GPIO_WLAN_SDIO_CLK_AF	2
#define GPIO_WLAN_SDIO_CMD	EXYNOS4_GPK3(1)
#define GPIO_WLAN_SDIO_CMD_AF	2
#define GPIO_WLAN_SDIO_D0	EXYNOS4_GPK3(3)
#define GPIO_WLAN_SDIO_D0_AF	2
#define GPIO_WLAN_SDIO_D1	EXYNOS4_GPK3(4)
#define GPIO_WLAN_SDIO_D1_AF	2
#define GPIO_WLAN_SDIO_D2	EXYNOS4_GPK3(5)
#define GPIO_WLAN_SDIO_D2_AF	2
#define GPIO_WLAN_SDIO_D3	EXYNOS4_GPK3(6)
#define GPIO_WLAN_SDIO_D3_AF	2

#define GPIO_LCD_EN		EXYNOS4_GPY3(5)

#define GPIO_ISP_TXD		EXYNOS4212_GPM4(5)
#define GPIO_ISP_RXD		EXYNOS4212_GPM4(6)

#define GPIO_TA_EN		EXYNOS4_GPL2(2)

#define GPIO_MHL_SEL		EXYNOS4_GPL0(3)

#define GPIO_MHL_SDA_1_8V	EXYNOS4_GPF0(4)
#define GPIO_MHL_SCL_1_8V	EXYNOS4_GPF0(6)
#define GPIO_MHL_SDA_1_8V_00	EXYNOS4_GPB(2)
#define GPIO_MHL_SCL_1_8V_00	EXYNOS4_GPB(3)

#define GPIO_OTG_EN		EXYNOS4_GPF0(7)

#define GPIO_OLED_ID		EXYNOS4_GPF1(0)
#define GPIO_ISP_RESET		EXYNOS4_GPF1(3)
#define GPIO_FUEL_SCL		EXYNOS4_GPF1(4)
#define GPIO_FUEL_SDA		EXYNOS4_GPF1(5)

#define GPIO_MLCD_RST		EXYNOS4_GPF2(1)
#define GPIO_UART_SEL		EXYNOS4_GPF2(3)
#define GPIO_S_LED_I2C_SCL	EXYNOS4_GPF2(6)
#define GPIO_S_LED_I2C_SDA	EXYNOS4_GPF2(7)
#define GPIO_OLED_DET		EXYNOS4_GPF3(0)

#define GPIO_PMIC_DVS1		EXYNOS4212_GPM3(0)
#define GPIO_PMIC_DVS2		EXYNOS4212_GPM3(1)

/* ICE4 IRDA */
#define GPIO_FPGA_CDONE		EXYNOS4_GPY3(4)
#define GPIO_FPGA_CRESET	EXYNOS4_GPY3(3)
#define GPIO_IRDA_IRQ		EXYNOS4_GPY3(1)	/* FPGA_INT */
#define GPIO_IRDA_SDA		EXYNOS4_GPC1(3)	/* FPGA_SDA */
#define GPIO_IRDA_SCL		EXYNOS4_GPC1(4)	/* FPGA_SCL */
#define GPIO_IRDA_WAKE		EXYNOS4_GPY3(2)	/* FPGA_EN */
#define GPIO_IR_LED_EN          EXYNOS4_GPY3(7)	/* FPGA_LDO_EN */
#define GPIO_IR_LED_LDO_EN          EXYNOS4_GPY4(0)

/* Definitions for Sii 9244B0 */
#define GPIO_PMIC_DVS3		EXYNOS4212_GPM3(2)
#define GPIO_BUCK2_SEL		EXYNOS4_GPF3(1)
#define GPIO_BUCK3_SEL		EXYNOS4_GPF3(2)
#define GPIO_BUCK4_SEL		EXYNOS4_GPF3(3)
#define GPIO_MHL_RST		EXYNOS4_GPF3(4)
#define GPIO_MHL_INT		EXYNOS4_GPF3(5)
#define GPIO_MHL_INT_AF		S3C_GPIO_SFN(0xF)
#define GPIO_MHL_WAKE_UP	EXYNOS4212_GPJ1(4)

#define GPIO_CAM_SW_EN		EXYNOS4212_GPJ1(0)
#define GPIO_TORCH_EN		EXYNOS4212_GPJ1(1)
#define GPIO_TORCH_SET		EXYNOS4212_GPJ1(2)

#define GPIO_MHL_DSCL_2_8V	EXYNOS4_GPK1(0)
#define GPIO_MHL_DSDA_2_8V	EXYNOS4_GPK1(2)

#define MHL_INT_IRQ		gpio_to_irq(GPIO_MHL_INT)
#define MHL_WAKEUP_IRQ		gpio_to_irq(GPIO_MHL_WAKE_UP)

#define GPIO_HDMI_CEC		EXYNOS4_GPX3(6)
#define GPIO_HDMI_HPD		EXYNOS4_GPX3(7)

#define GPIO_HOME_KEY		EXYNOS4_GPX0(1)
#define GPIO_VOL_UP		EXYNOS4_GPX0(4)
#define GPIO_VOL_DOWN		EXYNOS4_GPX1(4)
#define GPIO_S1_KEY			EXYNOS4_GPX2(0)
#define GPIO_S2_KEY			EXYNOS4_GPX2(1)
#define GPIO_nPOWER		EXYNOS4_GPX2(7)
#define GPIO_TELE_KEY		EXYNOS4_GPX2(2)
#define GPIO_WIDE_KEY		EXYNOS4_GPX3(3)
#define GPIO_LEFT_KEY		EXYNOS4_GPY4(1)
#define GPIO_RIGHT_KEY		EXYNOS4_GPY4(2)
#define GPIO_ZRPR_EN		EXYNOS4_GPY5(6)

#define GPIO_WIDE_KEY_0		EXYNOS4_GPC0(0)
#define GPIO_TELE_KEY_0		EXYNOS4_GPC0(2)
#define GPIO_HALL_INT_N		EXYNOS4_GPX2(2)

#define GPIO_FUEL_ALERT		EXYNOS4_GPX2(3)
#if defined(CONFIG_TARGET_LOCALE_USA)/* att: rev0.3A ~, vwz: rev0.0 ~ */
#define GPIO_BATT_PRESENT_N_INT	EXYNOS4_GPX1(3)
#endif

#define GPIO_V_BUS_INT		EXYNOS4_GPX2(4)	/* rev0.9 ~ */
#define GPIO_WPC_INT		EXYNOS4_GPX3(0)

#define GPIO_VIBTONE_PWM	EXYNOS4_GPD0(0)

#define GPIO_CODEC_SDA_18V	EXYNOS4_GPD0(2)
#define GPIO_CODEC_SCL_18V	EXYNOS4_GPD0(3)
#define GPIO_CODEC_SDA_18V_00		EXYNOS4_GPB(0)
#define GPIO_CODEC_SCL_18V_00		EXYNOS4_GPB(1)


#define GPIO_CODEC_LDO_EN	EXYNOS4212_GPJ0(4)

#define GPIO_WM8994_LDO		EXYNOS4212_GPJ0(4)

#define GPIO_ISP_INT		EXYNOS4_GPX0(2)
#define GPIO_ISP_INT2		EXYNOS4_GPX0(6)

#define GPIO_PDA_ACTIVE		EXYNOS4_GPF1(6)

/* Modem Interface GPIOs - M0 HSIC */
#if !defined(CONFIG_SEC_MODEM_M0_TD)
#define GPIO_ACTIVE_STATE	EXYNOS4_GPF1(1)
#define GPIO_PHONE_ON		EXYNOS4_GPL2(5)
#define GPIO_SUSPEND_REQUEST	EXYNOS4212_GPM2(4)
#define GPIO_CP_REQ_RESET	EXYNOS4212_GPM3(3)
#define GPIO_GPS_CNTL		EXYNOS4212_GPM3(4)
#define GPIO_IPC_SLAVE_WAKEUP	EXYNOS4_GPX1(0)
#define GPIO_IPC_HOST_WAKEUP	EXYNOS4_GPX1(1)
#define GPIO_CP_DUMP_INT	EXYNOS4_GPX1(2)
#define GPIO_AP_DUMP_INT		EXYNOS4212_GPJ0(1)
#define GPIO_PHONE_ACTIVE	EXYNOS4_GPX1(6)
#define GPIO_CP_RST		EXYNOS4_GPX3(2)

#define GPIO_FM_RST EXYNOS4_GPC1(1)
#else
/* Modem Interface GPIOs - M0 SPI */
#define GPIO_PHONE_ON	EXYNOS4_GPL2(5)
#define GPIO_PHONE_ACTIVE	EXYNOS4_GPX1(6)
#define GPIO_AP_CP_INT1	EXYNOS4_GPX0(5)
#define GPIO_AP_CP_INT2	EXYNOS4_GPX3(5)
#define GPIO_CP_DUMP_INT	EXYNOS4_GPX1(2)
#define GPIO_IPC_MRDY	EXYNOS4_GPX0(4)
#define GPIO_IPC_SRDY	EXYNOS4_GPX1(0)
#define GPIO_IPC_SUB_MRDY	EXYNOS4_GPX3(2)
#define GPIO_IPC_SUB_SRDY	EXYNOS4_GPX1(1)

#define GPIO_CP_RST	EXYNOS4_GPF1(1)
#define GPIO_CP_REQ_RESET	EXYNOS4_GPF1(1)
#define GPIO_IPC_SLAVE_WAKEUP	EXYNOS4_GPX2(0)
#define GPIO_IPC_HOST_WAKEUP	EXYNOS4_GPX2(0)
#define GPIO_SUSPEND_REQUEST	EXYNOS4_GPF1(1)
#define GPIO_ISP_INT		EXYNOS4_GPF1(1)
#define GPIO_ACTIVE_STATE	EXYNOS4_GPF1(1)

#define GPIO_FM_RST	EXYNOS4_GPC1(0)

#define IRQ_IPC_SRDY		IRQ_EINT8
#define IRQ_PHONE_ACTIVE	IRQ_EINT14
#define IRQ_IPC_SRDY		IRQ_EINT8
#define IRQ_IPC_SUB_SRDY	IRQ_EINT9
#define IRQ_CP_DUMP_INT	IRQ_EINT10
#endif

#define GPIO_OK_KEY_ANDROID	EXYNOS4_GPX0(1)		/*system_rev == 11*/
#define GPIO_OK_KEY_ANDROID_F EXYNOS4_GPX1(3)	/*system_rev >= 15*/

#define STR_PU_DET_18V		EXYNOS4_GPF0(5)		/*Strobe Open/Close*/

#define GPIO_FM_INT_REV15	EXYNOS4_GPX1(4)
#define GPIO_FM_INT_REV07	EXYNOS4_GPX1(3)
#define GPIO_FM_INT		EXYNOS4_GPX1(3)
#define GPIO_FM_MIC_SW		EXYNOS4_GPL0(3)

#if defined(CONFIG_TDMB) || defined(CONFIG_TDMB_MODULE)
#define GPIO_TDMB_EN		EXYNOS4_GPL0(0)
#define GPIO_TDMB_INT		EXYNOS4_GPF0(2)
#define GPIO_TDMB_IRQ		gpio_to_irq(GPIO_TDMB_INT)
#define GPIO_TDMB_INT_AF	0xf
#define GPIO_TDMB_SPI_CLK	EXYNOS4_GPC1(1)
#define GPIO_TDMB_SPI_CS	EXYNOS4_GPC1(2)
#define GPIO_TDMB_SPI_MISO	EXYNOS4_GPC1(3)
#define GPIO_TDMB_SPI_MOSI	EXYNOS4_GPC1(4)
#endif

#if defined(CONFIG_QC_MODEM)
/* Modem Interface GPIOs - MDM */
#define GPIO_MDM2AP_HSIC_READY		EXYNOS4212_GPJ0(3)
#define GPIO_AP2MDM_STATUS		EXYNOS4212_GPJ0(6)
/* AP2MDM_IPC2 */
#define GPIO_MDM2AP_HSIC_PWR_ACTIVE	EXYNOS4212_GPJ1(0)
#define GPIO_WCN_PRIORITY		EXYNOS4212_GPJ1(1)
#define GPIO_MDM_LTE_FRAME_SYNC		EXYNOS4212_GPJ1(2)
#define GPIO_AP2MDM_ERR_FATAL		EXYNOS4212_GPJ0(1)
#define GPIO_AP2MDM_PON_RESET_N		EXYNOS4_GPL2(5)
#define GPIO_AP2MDM_WAKEUP		EXYNOS4212_GPM2(4)
#define GPIO_AP2MDM_SOFT_RESET		EXYNOS4212_GPM3(3)
#define GPIO_MDM2AP_STATUS		EXYNOS4_GPX3(3)
/* AP2MDM_IPC2 */
#define GPIO_MDM2AP_HSIC_RESUME_REQ	EXYNOS4_GPX1(7)
#define GPIO_AP2MDM_VDDMIN		EXYNOS4_GPX1(0)
#define GPIO_MDM2AP_VDDMIN		EXYNOS4_GPX1(1)
#define GPIO_MDM2AP_ERR_FATAL		EXYNOS4_GPX1(2)
#define GPIO_MDM_LTE_ACTIVE		EXYNOS4_GPX1(6)
/* AP2MDM_IPC2 */
#define GPIO_AP2MDM_HSIC_PORT_ACTIVE	EXYNOS4_GPX3(2)
#define GPIO_AP2MDM_PMIC_RESET_N	EXYNOS4_GPY0(4)
#endif

#if defined(CONFIG_SEC_MODEM_GC2_ATT)
#define GPIO_LTE_PMIC_PWRON	EXYNOS4_GPL2(5)
#define GPIO_LTE_CP_RESET	EXYNOS4_GPL2(4)
#define GPIO_LTE_PS_HOLD_OFF	EXYNOS4_GPF2(3)

#define GPIO_LTE_ACTIVE		EXYNOS4_GPX1(6)
#define IRQ_LTE_ACTIVE		IRQ_EINT(14)	/* IRQ of GPX1[6] */

#define GPIO_LTE2AP_WAKEUP	EXYNOS4_GPX1(2)
#define IRQ_LTE2AP_WAKEUP	IRQ_EINT(10)	/* IRQ of GPX1[2] */
#define GPIO_AP2LTE_STATUS	EXYNOS4_GPX1(1)

#define GPIO_AP2LTE_WAKEUP	EXYNOS4_GPX1(0)
#define GPIO_LTE2AP_STATUS	EXYNOS4_GPX3(3)
#define IRQ_LTE2AP_STATUS	IRQ_EINT(27)	/* IRQ of GPX3[3] */

#define GPIO_LTE_TP_INDICATE	EXYNOS4_GPX3(5)
#define IRQ_LTE_TP_INDICATE	IRQ_EINT(29)	/* IRQ of GPX3[5] */

#define GPIO_SPI_BUS4_ID	4
#define GPIO_SPI_BUS4_CLK	EXYNOS4212_GPM4(4)
#define GPIO_SPI_BUS4_CSN	EXYNOS4212_GPM4(5)
#define GPIO_SPI_BUS4_MISO	EXYNOS4212_GPM4(6)
#define GPIO_SPI_BUS4_MOSI	EXYNOS4212_GPM4(7)
#define GPIO_SPI_SFN		S3C_GPIO_SFN(2)

#define GPIO_MODEM_SPI_ID	GPIO_SPI_BUS4_ID
#define GPIO_MODEM_SPI_CLK	GPIO_SPI_BUS4_CLK
#define GPIO_MODEM_SPI_CSN	GPIO_SPI_BUS4_CSN
#define GPIO_MODEM_SPI_MISO	GPIO_SPI_BUS4_MISO
#define GPIO_MODEM_SPI_MOSI	GPIO_SPI_BUS4_MOSI
#endif

#endif /* __MACH_GPIO_MIDAS_H */