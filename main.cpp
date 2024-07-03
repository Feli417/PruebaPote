#include "mbed.h"


float lectura;
int stringLength;
// main() runs in its own thread in the OS
int main()
{
    AnalogIn pote(A0);

    while (true) {
        lectura = pote.read();
        // sprintf( str , "Potentiometer: %.2f\r\n", lectura );
        // stringLength = strlen(str);
        // uartUsb.write( str, stringLength );
            printf("Hello Wolrd\n");
            delay(1000);
    }
}

