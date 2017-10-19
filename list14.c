/**
 * @file  list14.c
 * @brief 二つの実数値を読み込んで和・差・積・商を実数で表示
 * @author mogi
 * @date 2017/10/18
 */

#include <stdio.h>

int main(void){
	double vx,vy;

	puts("二つの実数を入力してください。");

	printf("実数vx:"); scanf("%lf",&vx);
	printf("実数vy:"); scanf("%lf",&vy);

	printf("vx + vy = %f\n", vx + vy);
	printf("vx - vy = %f\n", vx-vy);
	printf("vx * vy = %f\n", vx * vy);
	printf("vx / vy = %f\n", vx / vy);

	return 0;
}