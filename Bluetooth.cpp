#include "Bluetooth.h"

#if MCU_VARIANT == MCU_NRF52
bool SerialBT_init = false;
#endif

uint32_t bt_pairing_started = 0;
uint8_t dev_bt_mac[BT_DEV_ADDR_LEN];
char bt_da[BT_DEV_ADDR_LEN];
char bt_dh[BT_DEV_HASH_LEN];
char bt_devname[11];
