/*
 * DAD_FFT.h
 *
 *  Created on: Feb 5, 2023
 *      Author: Max
 */

#ifndef DAD_FFT_H_
#define DAD_FFT_H_

#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <ti/grlib/grlib.h>
#include "LcdDriver/Crystalfontz128x128_ST7735.h"
#include <stdio.h>
#include <arm_math.h>
#include <arm_const_structs.h>

#define TEST_LENGTH_SAMPLES 512
#define SAMPLE_LENGTH 512

#define SMCLK_FREQUENCY     48000000
#define SAMPLE_FREQUENCY    8000


// TODO configure with buffer ptr and size as input
void DAD_FFT_Config();

// Configures FFT with Mic input and graphics output
void DAD_FFT_TestConfig();

// TODO figure out where data is going
// TODO start FFT
void DAD_FFT_Run();

// TODO stop data calcs
// TODO release all relevant resources
void DAD_FFT_Stop();

#endif /* DAD_FFT_H_ */
