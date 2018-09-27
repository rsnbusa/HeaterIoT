#ifndef defines_h
#define defines_h

#define MINHEAP								20000
#define NKEYS 								20
#define TAG									"HEAT"
#define MG_LISTEN_ADDR						"80"
#define MG_TASK_STACK_SIZE 					4096 /* bytes */
#define MGOS_TASK_PRIORITY 					1

#define BUFFSIZE 							4096
#define TEXT_BUFFSIZE 						4096
#define FW_SERVER_IP   						"185.176.43.60"
#define FW_SERVER_PORT 						"80"
#define FW_FILENAME 						"http://feediot.co.nf/HeaterIoT.bin"

#define MQTTPORT                   			18747

// pins
#define SDAW                				GPIO_NUM_18      // SDA
#define SCLW                				GPIO_NUM_19       // SCL for Wire service
#define RELAY								GPIO_NUM_17     // Relay
#define WIFILED 							GPIO_NUM_12
#define MQTTLED 							GPIO_NUM_14
#define DSPIN 								GPIO_NUM_15
#define WPIN 								GPIO_NUM_13

#define OFF									0
#define ON									1

// Varios
#define CENTINEL            				0x12112299  //our chip id
#define ALERT_TYPE          				0
#define ERROR_TYPE          				1
#define MAXCHARS            				40
#define VERSION             				"3.0.0" // May 7/2017 Version 1
#define NOALERT            					0
#define NOMQTT              				1
#define INITLOG             				2
#define GENERAL             				255
#define MQTTCONN            				3
#define FIRMWARE            				4

// alert errors
#define MAXALERTS           				15
#define MAXHTTP             				70*28 //35 log entries * record size (4 date, 2 code, 2 code1, 20 description)
#define DISPMNGR		     				100

#define YB                 					15
#define WB                 					4
#define RSSIVAL             				15

#define RELAYX								115
#define RELAYY								0
#define STATUSX								107
#define STATUSY								0

#define NOERROR             				0
#define ERROROB             				1
#define ERRORFULL           				2
#define ERRORAUTH           				3
#define ERRORCMD            				4
#define MSTATUS								5
#define MINFO								6
#define MSHOW								8

#define HIDESSID            				false // used to received internal commands Strategy
#define MAXCMDS             				20
#define MAXDEVS             				3
#define MINELAPSEDAMPS      				100

#define u8									uint8_t
#define u16									uint16_t
#define u32									uint32_t
#define CHECKGUARD							120000
#define MAXTIMERS							10

#define MINDIFTEMP							5

#define DEFAULT_VREF   						1100
#define SAMPLES  							64          //Multisampling
#define ADCCHAN								ADC_CHANNEL_7;     //GPIO35 if ADC1
#define ADC_COUNTS  						(1<<12)
//#define CALIB								58.0

#define DAYHOURSSEC							86400
#endif
