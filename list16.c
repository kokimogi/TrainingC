/*
 * @file  list16.c
 * @brief 二つの整数値を読み込んで平均値を実数で表示
 * @author mogi
 * @date 2017/10/18
*/

#include <stdio.h>

int main(void){
	int a,b;

	puts("二つの整数を入力してください。");
	printf("整数a:");scanf("%d",&a);
	printf("整数b:");scanf("%d",&b);

	printf("それらの平均は%fです。\n",(a+b)/2.0);

	return 0;
}

