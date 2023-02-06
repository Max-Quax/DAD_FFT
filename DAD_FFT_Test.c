/*
 * DAD_FFT_Test.c
 *
 *  Created on: Feb 5, 2023
 *      Author: Max
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <DAD_FFT.h>

int main(void){
    // TODO test FFT
    DAD_FFT_Config();
    while(true){
        DAD_FFT_Run();
    }
}
