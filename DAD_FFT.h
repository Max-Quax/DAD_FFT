/* --COPYRIGHT--,BSD
 * Copyright (c) 2015, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * --/COPYRIGHT--*/


// Interrupts will have to be reset after running FFT

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
#define SAMPLE_FREQUENCY    10000



// Comment this out to run the application normally
    // Debug mode runs the application as it would normally run in the default configuration
    // Original code can be found under
        // simplelink_msp432p4_sdk_3_40_01_02\examples\nortos\MSP_EXP432P401R\demos
#define DEBUG_MODE


// Normal operation
#ifndef DEBUG_MODE
// Configure with buffer ptr and size as input
void DAD_FFT_Config(void);

// Run FFT on inData, spits it out into outData
    // Parameters: inData - array of input data passed by reference. To be fourier transformed.
    // Parameters: outData - array of FFT output
void DAD_FFT_Run(int16_t inData[SAMPLE_LENGTH], int16_t outData[SAMPLE_LENGTH]);
#endif



// DEBUG_MODE defined
#ifdef DEBUG_MODE
// Configures FFT with Mic input and graphics output
void DAD_FFT_Config();
// Runs FFT with mic input and graphics output
void DAD_FFT_Run();
#endif



// TODO release all relevant resources
// TODO stop interrupts
void DAD_FFT_Stop();

#endif /* DAD_FFT_H_ */
