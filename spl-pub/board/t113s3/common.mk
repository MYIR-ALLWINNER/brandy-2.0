
#
#config file for sun8iw20
#
SUPPORT_BOARD=f133 r528 h133 t113 t113s3 t113s4 t113_i 
ARCH = arm
PLATFORM = sun8iw20p1

CFG_BOOT0_RUN_ADDR=0x20000
CFG_SYS_INIT_RAM_SIZE=0x20000
CFG_FES1_RUN_ADDR=0x28000
CFG_SBOOT_RUN_ADDR=0x20480
CFG_SUNXI_GPIO_V2=y

#power
CFG_SUNXI_POWER=y
CFG_SUNXI_TWI=y
CFG_SUNXI_AUTO_TWI=y
CFG_SUNXI_PMIC=y
CFG_AXP1530_POWER=y

#pmu
CFG_SUNXI_WATCHDOG=y

#chipid
CFG_SUNXI_CHIPID=y
CFG_SUNXI_EFUSE =y

#standby
CFG_SUNXI_STANDBY=y

#key

