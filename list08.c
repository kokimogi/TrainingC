/*
 * @file  list14.c
 * @brief 読み込んだ整数値をそのまま表示
 * @author mogi
 * @date 2017/10/18
*/

#include <stdio.h>

int main(void){
	int no;

	printf("整数値を入力してください。:");
	scanf("%d",&no);

	printf("あなたは%dと入力しましたね\n",no);
	return 0;
}