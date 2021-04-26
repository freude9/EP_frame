//
// Created by Freude on 2021/4/26.
//


# include "AS5600.h"
#include "include.h"






float Get_Angle(void)
{
    uint8_t  buf[2] = {0};
    uint8_t temp=0;

    HAL_I2C_Mem_Read(&hi2c1,(Slave_Addr<<1)|Read_Bit,Angle_Hight_Register_Addr,8,buf,2,200);
    temp +=buf[0]*256+buf[1];
    HAL_Delay(500);
    return temp/4096*360;

}


