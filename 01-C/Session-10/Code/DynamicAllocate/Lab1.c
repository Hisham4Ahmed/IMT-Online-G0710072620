
/*
Write a C code that apply the bubble sorting algorithm on a set of
numbers entered by the user. 
The code shall ask the user to enter the
number of values to be sorted, 

then the code shall ask the user to enter
the values then print them in ascending order.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{
    uint16_t NoOfElement = 0 ;
    uint16_t count = 0 ;
    uint8_t Inner = 0 ;
    uint8_t Outter = 0 ;
    uint8_t Temp = 0 ; 
    uint16_t * Numbers = NULL;
    printf("Enter the Element:");
    scanf("%hd",&NoOfElement);

    // uint16_t * Numbers =  (uint16_t*)malloc(NoOfElement*sizeof(uint16_t));
    Numbers =  (uint16_t*)calloc(NoOfElement,sizeof(uint16_t));
    for(count=0;count<NoOfElement;count++)
    {
        printf("Enter the Number[%d]:",count);
        scanf("%hd",&Numbers[count]);
    }

    for(Outter=0;Outter<NoOfElement-1;Outter++)
    {
        for(Inner=0;Inner<NoOfElement-Outter-1;Inner++)
        {
            if(Numbers[Inner]>Numbers[Inner+1])
            {
                //Swap 
                Temp = Numbers[Inner];
                Numbers[Inner]= Numbers[Inner+1];
                Numbers[Inner+1]= Temp;
            }
        }
    }
    printf("----------------------------\nAfter Sorting\n----------------------------\n");
    for (count=0;count<NoOfElement;count++)
    {
        printf("Number[%d]=%d\n",count,Numbers[count]);
    }








    return 0;
}