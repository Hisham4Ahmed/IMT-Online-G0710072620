#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "BMW_Config.h"
#include "BMW_private.h"


// Version- 1 for Europ 
// Version- 2 for Middle East 
// Version- 3 for USA 



 
int main()
{
    uint16_t MaxCarSpeed = 0 ;
    #if CarVersion==Europ
        MaxCarSpeed=500;
    #elif CarVersion==MiddleEast 
        MaxCarSpeed=200;
    #elif CarVersion==USA
        MaxCarSpeed=100;
    #else 
        #warning "Invaild Config and Value will be Set for default"
            MaxCarSpeed=0;
        // #error "Invaild Config 404"

    #endif

    printf("MaxSpeed=%d\n",MaxCarSpeed);
}

#if CarVersion==Europ
void Car_InitVersion1()
{

}
#endif
 