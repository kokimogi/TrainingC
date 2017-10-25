/*
 * @file  list22.c
 * @brief　読み込んだ整数値の符号を判定
 * @author mogi
 * @date 2017/10/23
*/

#include <stdio.h>

int main(void){
	int no;

	printf("整数を入力してください。:");
	scanf("%d",&no);

	if(no == 0)
		puts("その数は0です。");
	else if(no > 0)
		puts("その数は正です。");
	else
		puts("その数は負です。");

	return 0;
}
