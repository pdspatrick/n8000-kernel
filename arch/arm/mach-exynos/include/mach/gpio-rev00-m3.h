#ifndef __MACH_GPIO_C2_H
#define __MACH_GPIO_C2_H __FILE__


#include <mach/gpio.h>

extern void midas_config_gpio_table(void);
extern void midas_config_sleep_gpio_table(void);


#define GPIO_BT_RXD			EXYNOS4_GPA0(0)
#define GPIO_BT_TXD			EXYNOS4_GPA0(1)
#define GPIO_BT_CTS			EXYNOS4_GPA0(2)
#define GPIO_BT_RTS			EXYNOS4_GPA0(3)

#define GPIO_NFC_SDA_18V		EXYNOS4_GPA0(6)
#define GPIO_NFC_SCL_18V		EXYNOS4_GPA0(7)

#define GPIO_AP_RXD_18V			EXYNOS4_GPA1(0)
#define GPIO_AP_TXD_18V			EXYNOS4_GPA1(1)
#define GPIO_TSP_SDA_18V		EXYNOS4_GPA1(2)
#define GPIO_TSP_SCL_18V		EXYNOS4_GPA1(3)

#define GPIO_CODEC_SDA_18V		EXYNOS4_GPB(0)
#define GPIO_CODEC_SCL_18V		EXYNOS4_GPB(1)
#define GPIO_MHL_DSDA_18V		EXYNOS4_GPB(2)
#define GPIO_MHL_DSCL_18V		EXYNOS4_GPB(3)
#define GPIO_CAM_SPI_SCLK		EXYNOS4_GPB(4)
#define GPIO_CAM_SPI_SSN		EXYNOS4_GPB(5)
#define GPIO_CAM_SPI_MISO		EXYNOS4_GPB(6)
#define GPIO_CAM_SPI_MOSI		EXYNOS4_GPB(7)

#define GPIO_LCD_22V_EN			EXYNOS4_GPC0(1)
#define GPIO_LCD_22V_EN_00		GPIO_LCD_22V_EN

#define GPIO_VIBTONE_PWM		EXYNOS4_GPD0(0)
#define GPIO_MODEM_BOOT_MODE		EXYNOS4_GPD0(1)
#define GPIO_PMIC_SDA			EXYNOS4_GPD0(2)
#define GPIO_PMIC_SCL			EXYNOS4_GPD0(3)

#define GPIO_8M_CAM_SDA_18V		EXYNOS4_GPD1(0)
#define GPIO_8M_CAM_SCL_18V		EXYNOS4_GPD1(1)
#define GPIO_GSENSE_SDA_18V		EXYNOS4_GPD1(2)
#define GPIO_GSENSE_SCL_18V		EXYNOS4_GPD1(3)

#define GPIO_RGB_SDA_1_8V		EXYNOS4_GPF0(0)
#define GPIO_RGB_SCL_1_8V		EXYNOS4_GPF0(1)
#if defined(CONFIG_MACH_M3_USA_TMO)
#define GPIO_PS_ALS_SDA_28V	EXYNOS4_GPF0(0)
#define GPIO_PS_ALS_SCL_28V	EXYNOS4_GPF0(1)
#endif
#define GPIO_GYRO_INT			EXYNOS4_GPF0(3)
#define GPIO_MHL_SDA_1_8V		EXYNOS4_GPF0(4)
#if !defined(CONFIG_MACH_M3_USA_TMO)
#define GPIO_BARO_INT			EXYNOS4_GPF0(5)
#endif
#define GPIO_MHL_SCL_1_8V		EXYNOS4_GPF0(6)
#if !defined(CONFIG_MACH_M3_USA_TMO)
#define GPIO_OTG_EN			EXYNOS4_GPF0(7)
#endif

#define GPIO_MDM2AP_HSIC_READY		EXYNOS4_GPF1(1)
#define GPIO_VT_CAM_ID			EXYNOS4_GPF1(2)
#define GPIO_ISP_RESET			EXYNOS4_GPF1(3)
#define GPIO_FUEL_SCL			EXYNOS4_GPF1(4)
#define GPIO_FUEL_SDA			EXYNOS4_GPF1(5)
#define GPIO_AP2MDM_STATUS		EXYNOS4_GPF1(6)
#define GPIO_MIC_BIAS_EN		EXYNOS4_GPF1(7)

#define GPIO_SUB_MIC_BIAS_EN		EXYNOS4_GPF2(0)
#define GPIO_MLCD_RST			EXYNOS4_GPF2(1)
#define GPIO_MDM2AP_HSIC_PWR_ACTIVE	EXYNOS4_GPF2(2)
#define GPIO_WCN_PRIORITY		EXYNOS4_GPF2(3)
#define GPIO_MDM_LTE_FRAME_SYNC		EXYNOS4_GPF2(4)
#define GPIO_S_LED_I2C_SCL		EXYNOS4_GPF2(6)
#define GPIO_S_LED_I2C_SDA		EXYNOS4_GPF2(7)

#define GPIO_OLED_DET			EXYNOS4_GPF3(0)
#define GPIO_BUCK2_SEL			EXYNOS4_GPF3(1)
#define GPIO_BUCK3_SEL			EXYNOS4_GPF3(2)
#define GPIO_BUCK4_SEL			EXYNOS4_GPF3(3)
#define GPIO_MHL_RST			EXYNOS4_GPF3(4)
#define GPIO_MHL_INT			EXYNOS4_GPF3(5)

#define GPIO_WLAN_EN			EXYNOS4212_GPJ0(0)
#define GPIO_AP2MDM_ERR_FATAL		EXYNOS4212_GPJ0(1)
#define GPIO_3_TOUCH_INT		EXYNOS4212_GPJ0(3)
#define GPIO_CODEC_LDO_EN		EXYNOS4212_GPJ0(4)
#define GPIO_WM8994_LDO			GPIO_CODEC_LDO_EN
#define GPIO_PS_ALS_EN			EXYNOS4212_GPJ0(5)
#define GPIO_MSENSOR_INT		EXYNOS4212_GPJ0(7)

#define GPIO_CAM_SW_EN			EXYNOS4212_GPJ1(0)
#define GPIO_TORCH_EN			EXYNOS4212_GPJ1(1)
#define GPIO_TORCH_SET			EXYNOS4212_GPJ1(2)
#define GPIO_CAM_MCLK			EXYNOS4212_GPJ1(3)
#define GPIO_MHL_WAKE_UP		EXYNOS4212_GPJ1(4)

#define GPIO_NAND_CLK			EXYNOS4_GPK0(0)
#define GPIO_NAND_CMD			EXYNOS4_GPK0(1)
#define GPIO_eMMC_EN			EXYNOS4_GPK0(2)
#define GPIO_NAND_D0			EXYNOS4_GPK0(3)
#define GPIO_NAND_D1			EXYNOS4_GPK0(4)
#define GPIO_NAND_D2			EXYNOS4_GPK0(5)
#define GPIO_NAND_D3			EXYNOS4_GPK0(6)

#define GPIO_NAND_D4			EXYNOS4_GPK1(3)
#define GPIO_NAND_D5			EXYNOS4_GPK1(4)
#define GPIO_NAND_D6			EXYNOS4_GPK1(5)
#define GPIO_NAND_D7			EXYNOS4_GPK1(6)

#define GPIO_T_FLASH_CLK		EXYNOS4_GPK2(0)
#define GPIO_T_FLASH_CMD		EXYNOS4_GPK2(1)
#define GPIO_T_FLASH_D0			EXYNOS4_GPK2(3)
#define GPIO_T_FLASH_D1			EXYNOS4_GPK2(4)
#define GPIO_T_FLASH_D2			EXYNOS4_GPK2(5)
#define GPIO_T_FLASH_D3			EXYNOS4_GPK2(6)

#define GPIO_WLAN_SDIO_CLK		EXYNOS4_GPK3(0)
#define GPIO_WLAN_SDIO_CMD		EXYNOS4_GPK3(1)
#define GPIO_WLAN_SDIO_D0		EXYNOS4_GPK3(3)
#define GPIO_WLAN_SDIO_D1		EXYNOS4_GPK3(4)
#define GPIO_WLAN_SDIO_D2		EXYNOS4_GPK3(5)
#define GPIO_WLAN_SDIO_D3		EXYNOS4_GPK3(6)

#define GPIO_3_TOUCH_SCL		EXYNOS4_GPL0(1)
#define GPIO_3_TOUCH_SDA		EXYNOS4_GPL0(2)
#if defined(CONFIG_TARGET_LOCALE_EUR) || defined(CONFIG_MACH_M3_USA_TMO)
#define GPIO_VPS_SOUND_EN		EXYNOS4_GPL0(3)
#endif
#define GPIO_HDMI_EN			EXYNOS4_GPL0(4)
#define GPIO_BT_EN			EXYNOS4_GPL0(6)

#define GPIO_GYRO_DE			EXYNOS4_GPL2(0)
#define GPIO_AP2MDM_PON_RESET_N		EXYNOS4_GPL2(5)
#define GPIO_NFC_EN			EXYNOS4_GPL2(6)
#define GPIO_NFC_FIRMWARE		EXYNOS4_GPL2(7)

#define GPIO_LED_VDD_EN			EXYNOS4212_GPM0(0)
#define GPIO_3_TOUCH_EN			GPIO_LED_VDD_EN
#define GPIO_ISP_STANDBY		EXYNOS4212_GPM0(1)
#define GPIO_CAM_IO_EN			EXYNOS4212_GPM0(2)
#define GPIO_ISP_CORE_EN		EXYNOS4212_GPM0(3)
#define GPIO_CAM_AF_EN			EXYNOS4212_GPM0(4)

#define GPIO_HW_REV0			EXYNOS4212_GPM1(2)
#define GPIO_HW_REV1			EXYNOS4212_GPM1(3)
#define GPIO_HW_REV2			EXYNOS4212_GPM1(4)
#define GPIO_HW_REV3			EXYNOS4212_GPM1(5)
#define GPIO_CAM_VT_nRST		EXYNOS4212_GPM1(6)

#define GPIO_IF_PMIC_SDA		EXYNOS4212_GPM2(0)
#define GPIO_IF_PMIC_SCL		EXYNOS4212_GPM2(1)
#define GPIO_VTCAM_MCLK			EXYNOS4212_GPM2(2)
#define GPIO_TSP_INT			EXYNOS4212_GPM2(3)
#define GPIO_AP2MDM_WAKEUP		EXYNOS4212_GPM2(4)

#define GPIO_PMIC_DVS1			EXYNOS4212_GPM3(0)
#define GPIO_PMIC_DVS2			EXYNOS4212_GPM3(1)
#define GPIO_PMIC_DVS3			EXYNOS4212_GPM3(2)
#define GPIO_AP2MDM_SOFT_RESET		EXYNOS4212_GPM3(3)

#if defined(CONFIG_MACH_M3_USA_TMO)
#define GPIO_CAM_SENSOR_CORE_EN		EXYNOS4212_GPM4(1)
#define GPIO_BATT_PRESENT_N_INT		EXYNOS4_GPX1(3)
#endif
#define GPIO_VT_CAM_SCL_18V		EXYNOS4212_GPM4(2)
#define GPIO_VT_CAM_SDA_18V		EXYNOS4212_GPM4(3)

#define GPIO_ACC_INT			EXYNOS4_GPX0(0)
#define GPIO_OK_KEY			EXYNOS4_GPX0(1)
#define GPIO_RGB_INT_N			EXYNOS4_GPX0(2)
#define GPIO_PS_ALS_INT			GPIO_RGB_INT_N
#define GPIO_BOOT_MODE			EXYNOS4_GPX0(3)
#define GPIO_MDM2AP_STATUS		EXYNOS4_GPX0(5)
#define GPIO_MDM2AP_HSIC_RESUME_REQ	EXYNOS4_GPX0(6)
#define GPIO_PMIC_IRQ			EXYNOS4_GPX0(7)

#define GPIO_AP2MDM_VDDMIN		EXYNOS4_GPX1(0)
#define GPIO_MDM2AP_VDDMIN		EXYNOS4_GPX1(1)
#define GPIO_MDM2AP_ERR_FATAL		EXYNOS4_GPX1(2)
#define GPIO_IF_PMIC_IRQ		EXYNOS4_GPX1(5)
#define GPIO_MDM_LTE_ACTIVE		EXYNOS4_GPX1(6)
#define GPIO_NFC_IRQ			EXYNOS4_GPX1(7)

#define GPIO_VOL_UP_00			EXYNOS4_GPX3(3)
#define GPIO_VOL_DOWN_00		EXYNOS4_GPX2(2)

#define GPIO_VOL_UP			EXYNOS4_GPX2(2)
#define GPIO_FUEL_ALERT			EXYNOS4_GPX2(3)

#define GPIO_V_BUS_INT			EXYNOS4_GPX2(4)

#define GPIO_WLAN_HOST_WAKE		EXYNOS4_GPX2(5)
#define GPIO_BT_HOST_WAKE		EXYNOS4_GPX2(6)
#define GPIO_nPOWER			EXYNOS4_GPX2(7)

#if !defined(CONFIG_MACH_M3_USA_TMO)
#define GPIO_WPC_INT			EXYNOS4_GPX3(0)
#endif
#define GPIO_BT_WAKE			EXYNOS4_GPX3(1)
#define GPIO_AP2MDM_HSIC_PORT_ACTIVE	EXYNOS4_GPX3(2)
#define GPIO_VOL_DOWN			EXYNOS4_GPX3(3)
#define GPIO_T_FLASH_DETECT		EXYNOS4_GPX3(4)
#define GPIO_EAR_SEND_END		EXYNOS4_GPX3(6)
#define GPIO_HDMI_HPD			EXYNOS4_GPX3(7)

#if !defined(CONFIG_MACH_M3_USA_TMO)
#define GPIO_BSENSE_SDA_18V		EXYNOS4_GPY1(0)
#define GPIO_BENSE_SCL_18V		EXYNOS4_GPY1(1)
#endif

#ifdef	CONFIG_MACH_M3_USA_TMO
#define GPIO_HDMI_HPD_EN		EXYNOS4_GPY1(3)
#endif

#define GPIO_TF_EN			EXYNOS4_GPY2(0)
#if defined(CONFIG_MACH_M3_USA_TMO)
#define GPIO_MSENSE_RST_N		EXYNOS4_GPY2(2)
#endif
#define GPIO_AP2MDM_PMIC_RESET_N	EXYNOS4_GPY2(3)

#define GPIO_MSENSOR_SDA_18V		EXYNOS4_GPY2(4)
#define GPIO_MSENSOR_SCL_18V		EXYNOS4_GPY2(5)

#define	GPIO_MM_I2S_CLK			EXYNOS5_GPZ(0)
#define	GPIO_MM_I2S_SYNC		EXYNOS5_GPZ(2)
#define GPIO_MM_I2S_DI			EXYNOS5_GPZ(3)
#define GPIO_MM_I2S_DO			EXYNOS5_GPZ(4)

#define GPIO_MHL_INT_AF			S3C_GPIO_SFN(0xF)
#define GPIO_WLAN_EN_AF			1
#define GPIO_WLAN_HOST_WAKE_AF		0xF
#define GPIO_WLAN_SDIO_CLK_AF		2
#define GPIO_WLAN_SDIO_CMD_AF		2
#define GPIO_WLAN_SDIO_D0_AF		2
#define GPIO_WLAN_SDIO_D1_AF		2
#define GPIO_WLAN_SDIO_D2_AF		2
#define GPIO_WLAN_SDIO_D3_AF		2

#define IRQ_BT_HOST_WAKE		IRQ_EINT(22)
#define MHL_INT_IRQ			gpio_to_irq(GPIO_MHL_INT)
#define MHL_WAKEUP_IRQ			gpio_to_irq(GPIO_MHL_WAKE_UP)

#if defined(CONFIG_MACH_M3_JPN_DCM)
#define GPIO_MSENSOR_SDA_18V_R1		EXYNOS4_GPA0(6)
#define GPIO_MSENSOR_SCL_18V_R1		EXYNOS4_GPA0(7)
#define GPIO_3_TOUCH_EN_R1		EXYNOS4212_GPM0(5)
#define GPIO_ISP_STANDBY_R1		EXYNOS4212_GPM0(6)
#define GPIO_CAM_IO_EN_R1		EXYNOS4212_GPM0(7)
#define GPIO_ISP_CORE_EN_R1		EXYNOS4212_GPM1(0)
#define GPIO_CAM_AF_EN_R1		EXYNOS4212_GPM1(1)
#define GPIO_V_BUS_INT_R1		EXYNOS4_GPX1(4)
#define FELICA_GPIO_I2C_SDA_R1		EXYNOS4_GPY2(4)
#define FELICA_GPIO_I2C_SCL_R1		EXYNOS4_GPY2(5)
#endif

#if defined(CONFIG_FELICA)
#define FELICA_GPIO_I2C_SDA		EXYNOS4_GPA0(6)
#define FELICA_GPIO_I2C_SCL		EXYNOS4_GPA0(7)
#define FELICA_UART3RX			EXYNOS4_GPA1(4)
#define FELICA_GPIO_RFS			EXYNOS4_GPL2(6)
#define FELICA_GPIO_PON			EXYNOS4_GPL2(7)
#define FELICA_GPIO_INT			EXYNOS4_GPX1(7)
#endif

#if defined(CONFIG_ISDBT)
#define GPIO_ISDBT_RST_N		EXYNOS4_GPC0(0)
#define GPIO_ISDBT_EN			EXYNOS4_GPC0(2)
#define GPIO_ISDBT_INT			EXYNOS4_GPC0(4)
#define GPIO_ISDBT_IRQ			gpio_to_irq(GPIO_ISDBT_INT)
#define GPIO_ISDBT_INT_AF		0xf
#define GPIO_ISDBT_SPI_CLK		EXYNOS4_GPC1(1)
#define GPIO_ISDBT_SPI_CS		EXYNOS4_GPC1(2)
#define GPIO_ISDBT_SPI_MISO		EXYNOS4_GPC1(3)
#define GPIO_ISDBT_SPI_MOSI		EXYNOS4_GPC1(4)
#endif


#endif /* __MACH_GPIO_C2_H */
