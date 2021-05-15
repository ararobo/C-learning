#include <stdio.h>
#include <stdint.h>
int array[] = {1,3,5,7,9};
float avg;

int main(void){
    /*sizeof(求めたい対象)で求めたい対象のバイト数が求められる*/
	int array_size = sizeof(array) / 4;

    /*処理が1行だけのときは{}は省略可*/
	for(int i=0;i<array_size;i++)       
		avg += array[i];
	avg /= array_size;

    printf("array_size = %d\n",array_size);

    /*こんな感じで%.xfとすると少数点がx桁までに制限される*/
    printf("avg = %.1f\n",avg);
    return 0;
}
