/*
 * @file  list19.c
 * @brief　読み込んだ整数値は、5で割り切れないか
 * @author mogi
 * @date 2017/10/23
*/

#include <stdio.h>

int main(void){
	int no;

	printf("整数を入力してください。");
	scanf("%d",&no);

	if(no % 5)
		puts("その数は5で割り切れません。");
	else
		puts("その数は5で割り切れます。");
	
	return 0;
}