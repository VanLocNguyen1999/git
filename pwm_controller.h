#ifndef PWM_CONTROLLER_H
#define PWM_CONTROLLER_H

#include "stm32f1xx_hal.h"

typedef struct PWMController PWM ;

typedef struct {
    TIM_HandleTypeDef *htim;
    uint32_t channel;
} PWMController;

void PWMController_Init(PWMController *pwm, TIM_HandleTypeDef *htim, uint32_t channel, uint32_t frequency, float dutyCycle)

#endif /* PWM_CONTROLLER_H */