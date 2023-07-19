#include "pwm_controller.h"
#include "motor.h"

void Motor_Start(Motor *motor) {
    HAL_TIM_PWM_Start(motor->htim, motor->channel);
}

void Motor_Stop(Motor *motor) {
    HAL_TIM_PWM_Stop(motor->htim, motor->channel);
}

void Motor_Forward(Motor *motor){
    HAL_TIM_PWM_Stop(motor->htim, motor->channel);


    HAL_TIM_PWM_Start(motor->htim, motor->channel);
}

void Motor_Reverse(Motor *motor){
    HAL_TIM_PWM_Stop(motor->htim, motor->channel);


    HAL_TIM_PWM_Start(motor->htim, motor->channel);
}