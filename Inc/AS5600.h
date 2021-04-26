//
// Created by Freude on 2021/4/26.
//

#ifndef EP_FRAME_AS5600_H
#define EP_FRAME_AS5600_H


# ifndef __AS5600_H
# define __AS5600_H
# include "i2c.h"
#include "include.h"
# define Slave_Addr 0x36
# define Write_Bit 0
# define Read_Bit 1
# define Angle_Hight_Register_Addr 0x0C
# define Angle_Low_Register_Addr 0x0D

void AS5600_Init(void);
uint16_t AS5600_Read_Len(uint8_t addr,uint8_t reg,uint8_t len,uint8_t *buf);
float Get_Angle(void);

# endif




#endif //EP_FRAME_AS5600_H
