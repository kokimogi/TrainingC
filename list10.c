/*
 * @file  list10.c
 * @brief 読み込んだ二つの整数値の和(加算結果)を表示
 * @author mogi
 * @date 2017/10/18
*/

#include <stdio.h>

int main(void){
	int n1,n2;

	puts("二つの整数を入力してください。");
	printf("整数1:"); scanf("%d",&n1);
	printf("整数2:"); scanf("%d",&n2);
	printf("それらの値の和は%dです。\n", n1 + n2);
}