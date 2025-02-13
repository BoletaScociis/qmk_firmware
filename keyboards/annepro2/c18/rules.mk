# Anne Pro 2
SRC = \
	matrix.c \
	hardfault_handler.c \
	annepro2_ble.c \
	qmk_ap2_led.c \
	protocol.c

ifeq ($(strip $(ANNEPRO2_EEPROM)), yes)
    OPT_DEFS += -DANNEPRO2_EEPROM
    SRC += spi_master.c eeprom_w25x20cl.c
endif

LAYOUTS +=

# MCU
MCU = cortex-m0plus
ARMV = 6
USE_FPU = no
MCU_FAMILY = HT32
MCU_SERIES = HT32F523x2
MCU_LDSCRIPT = HT32F52342_ANNEPRO2
MCU_STARTUP = ht32f523x2

BOARD = ANNEPRO2_C18

OPT_DEFS = -Wno-unused-function -fdump-rtl-dfinish -fstack-usage
#EXTRALDFLAGS = -Wl,--print-memory-usage

# Options

# Keys
CUSTOM_MATRIX = yes
NKRO_ENABLE = no
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes
KEY_LOCK_ENABLE = no
TAP_DANCE_ENABLE = yes
AUTO_SHIFT_ENABLE = yes
LTO_ENABLE = no

# Other featues
BOOTMAGIC_ENABLE = yes
CONSOLE_ENABLE = yes
COMMAND_ENABLE = yes
RAW_ENABLE = yes
MIDI_ENABLE = no
VIRTSER_ENABLE = no
COMBO_ENABLE = yes

# Custom led mcu wakeup delay
ANNEPRO2_LED_MCU_WAKEUP_DELAY = 100
OPT_DEFS += -DANNEPRO2_LED_MCU_WAKEUP_DELAY=$(ANNEPRO2_LED_MCU_WAKEUP_DELAY)
