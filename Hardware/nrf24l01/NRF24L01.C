#define NRF_GLOBALS

#include "NRF24L01.h"

//#include "globals.h"


void SPI2_NRF24L01_Init(void);
void RX_Mode(void);
void TX_Mode(void);
extern u8 ack_geted;//120519


uchar TX_ADDRESS[TX_ADR_WIDTH] = {0xb0,0xb2,0xb3,0xb4,0x5a};//0x34,0x43,0x10,0x10,0x01};  // ·�ɽڵ��ַ
uchar RX_ADDRESS0[TX_ADR_WIDTH] = {0xb0,0xb2,0xb3,0xb4,0x5a};
uchar RX_ADDRESS1[TX_ADR_WIDTH] = {0xb2,0xb2,0xb3,0xb4,0x5a};//д��ַ�Ĵ�������д���ֽڣ���˺��漸���ֽ���ͬ
uchar RX_ADDRESS2[1] = {0xb1};
uchar RX_ADDRESS3[1] = {0xb5};
uchar RX_ADDRESS4[1] = {0xb3};
uchar RX_ADDRESS5[1] = {0xb4};
uchar RX_ADDRESSES[RECV_MAX][14];//0~4 5~10,11,12,13,14
u8 spi_reg,spi_data,*spi_data_p,spi_data_num,func_num,spi_status;




/****************************************************************************
* ��    �ƣ�delay_ms(unsigned int x)
* ��    �ܣ���ʱ����Ϊ1�������
* ��ڲ�����x   ��ʱ�ĺ�����
* ���ڲ�������
* ˵    ������
* ���÷�����delay_ms(1);
****************************************************************************/  
void delay_ms(unsigned int x)
{
    unsigned int i,j;
    i=0;
    for(i=0;i<x;i++)
    {
       j=108;
       while(j--);
    }
}

/****************************************************************************
* ��    �ƣ�delay_ms(unsigned int x)
* ��    �ܣ���ʱ����Ϊ1�������
* ��ڲ�����x   ��ʱ�ĺ�����
* ���ڲ�������
* ˵    ������
* ���÷�����delay_ms(1);
****************************************************************************/  
void delay_10us(unsigned int x)
{
    unsigned int i,j;
    i=0;
    for(i=0;i<x;i++)
    {
       j=1;
       while(j--);
    }
}



//���ж����洦�����պ���,���⾡������spi�Ȳ������ж�.
void nrf24L01_IST()
{

}