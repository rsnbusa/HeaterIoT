#ifndef projT_h
#define projT_h

#include "includes.h"
#include <string>
using namespace std;

typedef struct {
	char *mensaje;
	esp_mqtt_client_handle_t nc;
	int sizer;
} mqttMsg;

typedef struct {
	gpio_num_t sdaport,sclport;
	i2c_port_t i2cport;
} i2ctype;

typedef struct {
	gpio_num_t pin;
	int counter;
	SemaphoreHandle_t mimutex;
	int timinter;
} argumento;

typedef enum {NOREP,REPLACE} overType;
typedef enum {NODISPLAY,DISPLAYIT} displayType;
typedef enum {SYSBOOT,DLOGCLEAR,FWUPDATE,GERROR,STARTTIM,LOGM,DRESET,APSET,LINTERNAL,ENDTIM,TIMADD,TIMDEL,TIMSYNC,HEATON,HEATOFF,RELOAD,MANON,MANOFF} nnada;
#define u16		uint16_t
#define u8		uint8_t
#define u32		uint32_t

typedef struct {
	 uint16_t code;
	 uint16_t code1;
	 char quedice[20];
} logq;

typedef struct  {
    char userName[10];
    unsigned long fromDate, duration;
    u8 days,fired;
    u16 starts;
    u8 notifications,onOff,requiredTemp,internalNumber;
    u16 ampCount;
    // energyType running, acum;
    double maxAmp,minAmp,avgAmps,acumAmps,kwh,nowkwh,nowamp;
    u32 TimeStart,TimeStop,acumTime;
    float litros,litermin;
    u8 tempStart,tempStop;
} tickets;

typedef struct  {
    u32 centinel;
    char ssid[5][MAXCHARS],pass[5][10],heaterName[MAXCHARS];
    u8 working;
    time_t lastUpload;
    char mqtt[MAXCHARS];
    char domain[MAXCHARS];
    u16 bootcount;
    time_t lastTime,preLastTime,lastOpen;
    char actualVersion[20];
    char groupName[MAXCHARS];
    u16 disptime;
    u16 lastResetCode;
    u16 mqttport;
    char mqttUser[MAXCHARS];
    char mqttPass[MAXCHARS];
    u8 ssl;
    u8 lastSSID;
    u16 traceflag;
    char timerNames[MAXTIMERS][MAXCHARS];
    float kwh;
    u16 watts;
    u8 volts, galons,ucount;
    u8 lastTankId,oneTankf,monitorf,monitorTime;
    u8 controlTemp,autoTank;
    float calib;
    char thingsChannel[MAXCHARS];
    char thingsAPIkey[MAXCHARS];
} config_flash;

// Bootup sequence, WIFI related, MQTT, publishsubscribe, Mongoose, CMD like find,Web cmds,General trace,Laser stuff,DOOR STATES,
enum debugflags{BOOTD,WIFID,MQTTD,PUBSUBD,MONGOOSED,CMDD,WEBD,GEND,MQTTT,HEAPD};

typedef struct { char key[10]; int val; } t_symstruct;

typedef void (*functrsn)(void *);

typedef struct{
    char comando[20];
    functrsn code;
}cmdRecord;

typedef struct{
    void *pMessage;
    uint8_t typeMsg;
    void *pComm;
    cJSON *theRoot;
}arg;

#endif
