/*
 * LORA_PAYLOAD.h
 *
 * Created: 26/11/2020 19.31.13
 *  Author: Toma
 */ 


#ifndef LORA_PAYLOAD_H_
#define LORA_PAYLOAD_H_


// Interface dependencies
#include <stdint.h>
#include <lora_driver.h>
#include <stdio.h>


// Function to set the CO2 ppm value to the lora_driver_payload_t
void setCo2PpmSensorData(uint16_t ppm);

// Function to set the humidity value to the lora_driver_payload_t
void setHumiditySensorData(uint16_t humidity);

// Function to set the temperature value to the lora_driver_payload_t
void setTemperatureSensorData(int16_t temperature);

// Function to set the shaft status value to the lora_driver_payload_t
void setCurrentShaftStatus(int8_t shaftStatus);

// Function to set the number of people to the lora_driver_payload_t
void setPeopleCount(uint16_t peopleCount);

// Function to get the lora_driver_payload_t for the assigned port number
lora_driver_payload_t getLoraPayload(uint8_t port_no);


#endif /* LORA_PAYLOAD_H_ */