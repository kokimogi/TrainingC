/*
 * @file  list11.c
 * @brief 読み込んだ二つの整数値の和・差・積・商・剰余を表示
 * @author mogi
 * @date 2017/10/18
*/

#include <stdio.h>

int main(void){
	int vx,vy;

	puts("二つの整数を入力してください。");
	printf("整数値vx:"); scanf("%d",&vx);
	printf("整数値vy:"); scanf("%d",&vy);

	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx / vy = %d\n", vx / vy);
	printf("vx %% vy = %d\n",vx % vy);

	return 0;
}