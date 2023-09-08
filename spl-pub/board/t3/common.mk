
#
#config file for sun8iw19
#
SUPPORT_BOARD=t3
ARCH = arm
PLATFORM = sun8iw11p1

CFG_BOOT0_RUN_ADDR=0x0
CFG_SYS_INIT_RAM_SIZE=0xfff0
CFG_FES1_RUN_ADDR=0x7000
CFG_SBOOT_RUN_ADDR=0x480

#chipid
CFG_SUNXI_CHIPID=y
CFG_SUNXI_EFUSE =y

#power
CFG_SUNXI_TWI=y
CFG_SUNXI_POWER=y
CFG_SUNXI_PMIC=y
CFG_AXP221_POWER=y
