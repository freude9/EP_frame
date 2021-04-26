//
// Created by Freude on 2021/4/26.
//

#include "include.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    if (htim->Instance == htim10.Instance) {
			
       Get_Angle();

    }
}