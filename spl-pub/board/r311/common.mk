
#
#config file for sun8iw15
#
SUPPORT_BOARD=a50 r311 mr133
ARCH = arm
PLATFORM = sun8iw15p1
CFG_BOOT0_RUN_ADDR=0x20000
CFG_SYS_INIT_RAM_SIZE=0x38000
CFG_FES1_RUN_ADDR=0x28000
CFG_SBOOT_RUN_ADDR=0x20480

#power
CFG_SUNXI_POWER=y
CFG_SUNXI_RSB=y
CFG_SUNXI_PMIC=y
CFG_AXP858_POWER=y

#chipid
CFG_SUNXI_CHIPID=y
CFG_SUNXI_EFUSE =y
