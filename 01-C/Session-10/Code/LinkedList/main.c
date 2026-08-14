#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct user 
{
    uint16_t ID ;
    uint8_t * Name ; 
    struct user *Next ; 
};

typedef struct user User_t;

User_t * Start = NULL;



void main()
{
    uint8_t State = 0 ;
    User_t * NewElement = NULL;
    User_t * Temp = NULL;
    printf ("Enter 1 to Add Element:");
    scanf("%d",&State);
    if(State==1)
    {
        // Add New Element from End 
        NewElement = (User_t*)malloc(sizeof(User_t));
        printf("Enter your ID:");
        scanf("%d",NewElement->ID);
        NewElement->Next = NULL;

        if(Start==NULL)
        {
            // Not Have Element 
            Start=NewElement;
        }
        else 
        {
            Temp=Start;
            while(Temp->Next!=NULL)
            {
                Temp= Temp->Next;
            }
            Temp->Next=NewElement;
        }
    }
}