/*includeするときはC言語標準のヘッダーファイルは<>
そうでないもの(自作)を読み込むときは""*/
#include <stdio.h>
#include "motor.h"

/*宣言をint mainの外でやるとグローバル変数になる*/
Motor_t motor_l;
Motor_t motor_r;
int main(void){
    motor_l.dir = 1;
    motor_l.pin_a = 2;
    motor_l.pin_b = 3;
    motor_l.pin_pwm = 4;
    motor_l.pwm_resolution = 255;

    motor_r.dir = -1;
    motor_r.pin_a = 5;
    motor_r.pin_b = 6;
    motor_r.pin_pwm = 7;
    motor_r.pwm_resolution = 1024;

    motorRun(&motor_l,0.9);
    motorRun(&motor_r,-0.3);
}