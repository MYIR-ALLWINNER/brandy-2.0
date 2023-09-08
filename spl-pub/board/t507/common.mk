
#
#config file for sun50iw9
#
SUPPORT_BOARD=h616 h313 h700 vmp1002 t5 t507 t503 t513 t517
ARCH = arm
PLATFORM = sun50iw9p1

CFG_BOOT0_RUN_ADDR=0x20000
CFG_SYS_INIT_RAM_SIZE=0x10000
CFG_FES1_RUN_ADDR=0x28000
CFG_SBOOT_RUN_ADDR=0x20480

#power
CFG_SUNXI_POWER=y
CFG_SUNXI_TWI=y
CFG_SUNXI_PMIC=y
CFG_AXP1530_POWER=y
CFG_AXP858_POWER=y
CFG_AXP806_POWER=y
CFG_SUNXI_STANDBY=y
CFG_SUNXI_WATCHDOG=y

#chipid
CFG_SUNXI_CHIPID=y
CFG_SUNXI_EFUSE =y

#ddr soft training
CFG_DDR_SOFT_TRAIN=y