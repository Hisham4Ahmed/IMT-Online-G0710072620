

/*Function Like Macro for Control on Specific Bit*/
#define SetBit(Reg,No)    Reg|=(1<<No)
#define ClearBit(Reg,No)  Reg&=~(1<<No)
#define ToggleBit(Reg,No) Reg^=(1<<No)
#define GetBit(Reg,No)    (Reg>>No)&1

#define Size    5 
#define Add(X,Y)            X+Y

/*Multilin Function Like Macro*/
#define WelcomeMessage()   printf("IMT School\n");\
                           printf("Online Group\n");\
                           printf("Welcome everyOne")



// WelcomeMessage();