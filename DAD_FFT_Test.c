/*
 * DAD_FFT_Test.c
 *
 *  Created on: Feb 5, 2023
 *      Author: Max
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <DAD_FFT.h>

int main(void){

#ifdef DEBUG_MODE
    // TODO test FFT
    DAD_FFT_Config_Debug();
    while(true){
        DAD_FFT_Run_Debug();
    }
#else
    // TODO test FFT
    // TODO create dummy data
    uint16_t inData[SAMPLE_LENGTH];
    uint16_t outData[SAMPLE_LENGTH];

    DAD_FFT_Config();
    while(true){
        DAD_FFT_Run(inData, outData);
    }
#endif
}
