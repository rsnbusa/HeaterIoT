/*
 * globals.h
 *
 *  Created on: Apr 16, 2017
 *      Author: RSN
 */

#ifndef MAIN_GLOBALS_H_
#define MAIN_GLOBALS_H_

#ifdef GLOBAL
#define EXTERN extern
#else
#define EXTERN
#endif
#include "defines.h"
#include "projTypes.h"
#include "freertos/timers.h"
using namespace std;


// =========================
// Cannot use CONST or STATIC
 EXTERN char 							APP[9];
 EXTERN char 							MQTTSERVER[18];
 EXTERN	char                   	 		meses[12][4];
 EXTERN u8                       	  	daysInMonth [12] ;
 EXTERN ip4_addr_t 						localIp;
 EXTERN cmdRecord 						cmds[MAXCMDS];

// Critical Variables

 EXTERN config_flash        			aqui __attribute__((aligned(4))) ;

// Devices and Services
 EXTERN	I2C								miI2C;
#ifdef GLOBAL
 EXTERN	SSD1306             			display;
#else
 EXTERN SSD1306 						display(0x3c, &miI2C);
#endif

 EXTERN	i2ctype 						i2cp;
// General Use

 EXTERN struct rst_info   				*rtc_info; //Restart System variable. States Reason for reboot. Look first line for reasons
 EXTERN u8               				lastalign,lastFont;
 EXTERN u8                				barX[3],barH[3],userNum;
 EXTERN u16								yearg,daysg;
 EXTERN bool                			mqttf,tracef,mqttThingf;
 EXTERN bool                			timef;

 EXTERN string              			spublishTopic,cmdTopic,topicString;
 EXTERN string              			AP_NameString,nameStr,uidStr,montonUid[5];
 EXTERN uint8_t							sonUid;
 EXTERN char                			AP_NameChar[MAXCHARS];
 EXTERN char   							WIFIME[12];//must be 8 chars Password by default of ESP8266 MeterIoT Access Point
 EXTERN int                				RSSI;

// =========================

 EXTERN SemaphoreHandle_t 				I2CSem,logSem;
 EXTERN bool 							timerF,connf,mongf,mdnsf,timerf,sntpf,displayf,errorf,loggf,relayState;

 EXTERN cJSON 							*root;
 EXTERN char 							ota_write_data[BUFFSIZE + 1] ;
/*an packet receive buffer*/
 EXTERN char 							text[BUFFSIZE + 1] ;
/* an image total length*/
 EXTERN int 							binary_file_length ;
/*socket id*/
 EXTERN int 							socket_id ;
 EXTERN char 							http_request[100] ;
/* operate handle : uninitialized value is zero ,every ota begin would exponential growth*/
 EXTERN esp_ota_handle_t 				update_handle ;
 EXTERN esp_partition_t 				operate_partition;
 EXTERN struct mg_mgr 					mgr;
 EXTERN RESET_REASON 					rebootl;
 EXTERN struct mg_send_mqtt_handshake_opts opts;
 EXTERN FILE 							*bitacora;
 EXTERN QueueHandle_t 					logQueue;
EXTERN uint8_t							sensors[5][8],numsensors;
EXTERN uint32_t							curSSID,uidLogin[5],globalDisp,gsleepTime;
EXTERN TimerHandle_t 					dispTimer,startTimer[MAXTIMERS],endTimer[MAXTIMERS],nextTimer;
EXTERN float							oldtemp;
EXTERN QueueHandle_t 					mqttQ;
EXTERN void*							mqttCon;
EXTERN string							logText[18];
EXTERN t_symstruct 						lookuptable[NKEYS];
EXTERN esp_mqtt_client_config_t  		settings,settingsThing;
EXTERN uint16_t							startLed;
EXTERN nvs_handle 						nvshandle,knvshandle;
EXTERN TaskHandle_t 					tankHandle;
EXTERN tickets							mitimer[10],*globalTimer;
EXTERN time_t 							magicNumber;
EXTERN u16								gdayOfWeek,todate;
EXTERN esp_adc_cal_characteristics_t 	*adc_chars;
EXTERN adc1_channel_t 					adcchannel;     //GPIO34 if ADC1, GPIO14 if ADC2
EXTERN adc_atten_t 						atten;
EXTERN uint32_t      	      			ampsMonton[1500],totalMilisAmps,lastRMS;
EXTERN double							lastAmps,totalAmps;
EXTERN u32								gpulseCount,oldPulseCount;
EXTERN double 							offsetI;
EXTERN esp_mqtt_client_handle_t 		clientCloud, clientThing;

#endif /* MAIN_GLOBALS_H_ */
