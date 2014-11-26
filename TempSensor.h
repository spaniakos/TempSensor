/*
 Copyright (C) 2014 G. Spanos <spaniakos@gmail.com

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */

/**
 * @file TempSensor.h
 *
 * Class declaration for TempSensor and helper enums
 */

#ifndef __TempSensor_H__
#define __TempSensor_H__

#include "LightSensor_config.h"

class TempSensor{
	private:
		uint8_t pinTemp;
	    float temperature;
		unsigned int sensorValue;
		float Old_temperature;
		float Rensor;
		float TempeThres;
	public:
	/* class constructor
	 * 
	 */
	TempSensor(uint8_t pin,float Thres);
	
	/* set the pin and begin readings
	 * 
	 */
	void begin(void);
	/* reads value from sensor
	 * the value is saved to sensorValue
	 */
	void Read_Temperature(void);
	
	/* converts sensor value to Celcius
	*
	*/
	float Sensor_to_Temp(void);
	
	/* set Old_LUX equal to LUX
	 * 
	 */
	void Save_Old(void);
	
	/* compair temperature values
	 * return 0 if equal , 1 if not
	 */
	int cmp_values(void);
	
	/* get the temperature valule
	 * 
	 */
	 float Value(void);
	 
	 /* get the Old_temperature valule
	 * 
	 */
	 float Old_Value(void);
	 
	 /* Calculate the Rensor
	 * 
	 */
	 void CalcRensor();
	 
	 /* returns the Rensor value
	 * 
	 */
	 float get_Rensor();
	 
	 /* returns the Threshold value
	 * 
	 */
	 float get_Threshold();
	 
	 /* calibrate the sensor and readings
	  * 
	  */
	 void calibrate();
};
#endif //TempSennsor


