POINTING_DEVICE_DRIVER = analog_joystick
SRC += lib/oled.c
PROGRAM_CMD = picotool load -f $(BUILD_DIR)/$(TARGET).uf2 && picotool reboot
