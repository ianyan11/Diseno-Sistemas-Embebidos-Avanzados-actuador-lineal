/*  Grupo IRC
    Led sequence with STM32H7
    First practice
*/

#include "mbed.h"
#include "platform/mbed_thread.h"


// Blinking rate in milliseconds
#define BLINKING_RATE_MS                                                    1000


int main()
{
    // Initialise the digital pin LED1, LED2 and LED3 as an output
    DigitalOut led1(LED1); //Yellow LED
    DigitalOut led2(LED2); //Orange LED
    DigitalOut led3(LED3); //Red LED

    while (true) {
        //Blink LEDs 1 to 3 with a 1000ms delay creating a sequence
        led1 = !led1;
        thread_sleep_for(BLINKING_RATE_MS);
        
        led2 = !led2;
        thread_sleep_for(BLINKING_RATE_MS);
        
        led3 = !led3;
        thread_sleep_for(BLINKING_RATE_MS);
    }
}
