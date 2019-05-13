

#ifndef __HAL_CALENDAR_H
#define __HAL_CALENDAR_H


#include "drv_ds1302.h"
#include "hal_display.h"

typedef struct __CALENDAR_T
{
	uint16_t year;
	uint8_t mon;
	uint8_t day;
	uint8_t hour;
	uint8_t min;
	uint8_t sec;
	uint8_t week;
}calendar_t;


void HalCalendarInit(void);
void HalUpdateSysTime(void);
void HalGetSysTime(calendar_t *pSysTmr);


#endif
