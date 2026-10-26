#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Version- 1 for Europ 
// Version- 2 for Middle East 
// Version- 3 for USA 


#define CarVersion  1
 
int main()
{
    uint16_t MaxCarSpeed = 0 ;
    #if CarVersion==1
        MaxCarSpeed=500;
    #elif CarVersion==2 
        MaxCarSpeed=200;
    #elif CarVersion==3
        MaxCarSpeed=100;
    #endif

    printf("MaxSpeed=%d\n",MaxCarSpeed);
}

#if CarVersion==1
void Car_InitVersion1()
{

}
#endif
 