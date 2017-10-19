/*
 * @file  list13.c
 * @brief 整数と浮動小数点数
 * @author mogi
 * @date 2017/10/18
 */


#include <stdio.h>

int main(void){
	int n;
	double x;

	n= 9.99;
	x= 9.99;

	printf("int 型変数nの値: %d\n",n);
	printf("		n/2:%d\n",n/2);

	printf("double型変数 xの値:%f\n",x);
	printf("		n/2.0:%f\n",x/2.0);

	return 0;
}