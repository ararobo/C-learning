/*includeするの忘れやすいので注意*/
#include "motor.h"

void motorRun(Motor_t * m,float power){
    if(power > 1.0f)
        power = 1.0f;
    if(power < -1.0f)
        power = -1.0f;

    m->pwm_output = m->pwm_resolution * power * m->dir;

    if(m->pwm_output > 0){
        //正転
        digitalWrite(m->pin_a,HIGH);
        digitalWrite(m->pin_b,LOW);
        analogWrite(m->pin_pwm,m->pwm_output);
    }else if(m->pwm_output < 0){
        //逆転
        digitalWrite(m->pin_a,LOW);
        digitalWrite(m->pin_b,HIGH);
        /*analogWriteの引数に負の数を入れるとバグるかもしれないので*-1*/
        int output = m->pwm_output * -1;
        analogWrite(m->pin_pwm,output);
    }else{
        //停止
        digitalWrite(m->pin_a,LOW);
        digitalWrite(m->pin_b,LOW);
        analogWrite(m->pin_pwm,m->pwm_output);
    }
}