#include <stdio.h>

/*DEBUG_ONをコメントアウトするかどうかで
printfが表示されるかどうかが決まる*/
#define DEBUG_ON

int main(void){
    int a = 10+20;
    #ifdef DEBUG_ON
        printf("a = %d\n",a);
    #endif

    return 0;

}