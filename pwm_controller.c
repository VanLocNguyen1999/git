#include "pwm_controller.h"

void PWMController_Init(PWMController *pwm, TIM_HandleTypeDef *htim, uint32_t channel, uint32_t frequency, float dutyCycle) {

    uint32_t timerClock = HAL_RCC_GetPCLK2Freq(); // Lấy tần số clock của Timer
    uint32_t prescaler = timerClock / frequency - 1;
    uint32_t pulse = (pwm->htim->Instance->ARR + 1) * dutyCycle;
    //
    pwm->htim = htim;
    pwm->channel = channel;
    pwm->htim->Instance->PSC = prescaler;
    pwm->htim->Instance->CCR1 = pulse;
    //HAL_TIM_PWM_Start(pwm->htim, pwm->channel);
}


