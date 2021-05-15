/*includeガードというもので
motor.hが複数回呼び出されたときに関数などが複数回
定義されると起こるエラーの防止用*/
#ifndef __MOTOR_H__
#define __MOTOR_H__

typedef struct{
    int dir;    //モータの回転方向、1か-1
    int pin_a;
    int pin_b;
    int pin_pwm;
    int pwm_resolution;

/*この変数はいじらない*/
    int pwm_output;       
}Motor_t;


void motorRun(Motor_t * m,float power);     //powerは-1.0から1.0まで

#endif /*__MOTOR_H__*/