#ifndef fw
#define fw
void set_FirmUpdateCmd(void *pArg);               // FOTA of latest firmware
void set_eraseConfig(void *pArg);                // Erase everything. Back to local AP (192.168.4.1)
void set_statusSend(void *pArg);                  // A general status condition for display. See routine for numbers.
void set_reset(void *pArg);                       // Reboot
void set_resetstats(void *pArg);                  // Clear log file and 0 Heater stats regarding power and water consumption
void set_display(void *pArg);                       // Refresh rates. Used internally for debugging
void set_mqtt(void *pArg);;                        // Set another MQTT server. Internal
void set_internal(void *pArg);                    // Set internal variables by hand. SSID, PASSWORD and Heater name. Debuging. Should be commented at release
void set_addEmail(void *pArg);     // Change Notification On or Off for a Timer
void set_scanCmd(void *pArg);
void set_displayManager(void *pArg);
void set_settingsStatus(void *pArg);
void set_generalap(void *pArg);
void set_zerousers(void * pArg);
void set_timeradd(void * pArg);
void set_timerdel(void * pArg);
void set_sync(void * pArg);
void set_timeronoff(void * pArg);
void set_mqtt(void * pArg);
void set_gettimers(void * pArg);
void set_manual(void * pArg);
void set_onoff(void * pArg);
void logManager(void *pArg);
void set_calibration(void *pArg);
void set_readlog(void *pArg);
void set_session(void *pArg);

#endif
