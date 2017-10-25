/*
 * @file  list24.c
 * @brief　読み込んだ二つの整数値の差を求めて表示(条件演算子)
 * @author mogi
 * @date 2017/10/23
*/

#include <stdio.h>

int main(void){
	int n1,n2;

	puts("二つの整数を入力してください。");
	printf("整数1:"); scanf("%d",&n1);
	printf("整数2:"); scanf("%d",&n2);

	printf("それらの差は%dです \n",(n1 > n2) ? n1 -n2 : n2 - n1);

	return 0;
}