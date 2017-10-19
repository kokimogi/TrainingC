/*
 * @file  list12.c
 * @brief 二つの整数値を読み込んで商と剰余を表示
 * @author mogi
 * @date 2017/10/18
*/

#include <stdio.h>

int main(void){

	int a,b;

	puts("二つの整数値を入力してください。");
	printf("整数a:"); scanf("%d",&a);
	printf("整数b:"); scanf("%d",&b);

	printf("aをbで割ると%dあまり%dです。\n",a/b,a%b);

	return 0;
}