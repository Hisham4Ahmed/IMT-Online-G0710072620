

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{

    uint8_t NoOfTempDegree=0;
    uint8_t count = 0 ;
    printf("Enter the Number of Temp Degree:");
    
    scanf("%d",&NoOfTempDegree);
    uint8_t * Temp = (uint8_t*)malloc(NoOfTempDegree*sizeof(uint8_t));
            printf("BeforeScann\n");
    for(count=0;count<NoOfTempDegree;count++)
    {
        printf("the Temp[%d]:%d\n",count+1,Temp[count]);
    }

    for(count=0;count<NoOfTempDegree;count++)
    {
        printf("Enter the Temp[%d]:",count+1);
        scanf("%d",&Temp[count]);
    }
    printf("AfterScann\n");
    for(count=0;count<NoOfTempDegree;count++)
    {
        printf("the Temp[%d]:%d\n",count+1,Temp[count]);
    }    
    



}