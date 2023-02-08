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
    DAD_FFT_Config();
    while(true){
        DAD_FFT_Run();
    }
#else
    // TODO test FFT
    int16_t inData[SAMPLE_LENGTH];  // TODO fill with dummy data
    int16_t outData[SAMPLE_LENGTH];

    // Fill inData with SAMPLE_FREQUENCY/10 Hz square wave
    bool toggle = false;
    int i;
    for(i = 0; i < SAMPLE_LENGTH; i++){
        if(i%10 == 0)
            toggle = !toggle;
        if(toggle)
            inData[i] = 1024;
        else
            inData[i] = -1024;
    }


    // Test FFT on random numbers
    DAD_FFT_Config();
    while(true){
        // Run FFT on numbers
        DAD_FFT_Run(inData, outData);
    }
#endif
}
