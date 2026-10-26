void SPI_Init()
void SPI_SelectSlave(uint8_t SlaveGroup , uint8_t SlavePin);
void SPI_DeSelectSlave(uint8_t SlaveGroup , uint8_t SlavePin);

//operation 
uint8_t SPI_TransmitReceive(uint8_t TXData,uint8_t *RXData)
{
    1- Make Sure the SPDR is Empty & Make Sure the RXData Not Equal Null 
    2- Update TxDate in the SPI Data Reg  & SPI Enable 
    3- wait until the SPI Flag Set or the Timeout fire  
    4- if the flag is set will be Update the *RXData With SPDR Value and Return  0 -> NoError
    5- if the flag not set and Timeout fire return 0xFF;
}
uint8_t SPI_Transmit(uint8_t TXData)
{
    2- Update TxDate in the SPI Data Reg    & SPI Enable 
    3- wait until the SPI Flag Set or the Timeout fire  
    4- if the flag is set will be Return  0 -> NoError
    5- if the flag not set and Timeout fire return 0xFF;
}
uint8_t SPI_Receive(uint8_t *RXData)
{
    1- Make sure the RXData not Equal Null 
    2- Update SPI Data Reg with Dummy Data (0xFF)    & SPI Enable  
    3- wait until the SPI Flag Set or the Timeout fire  
    4- if the flag is set will be Update the *RXData With SPDR Value and Return  0 -> NoError
    5- if the flag not set and Timeout fire return 0xFF;
}
