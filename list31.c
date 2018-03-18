/*
 * @file  list31.c
 * @brief　読み込んだ整数を0までカウントダウン
 * @author mogi
 * @date 2018/3/17
*/

#include <stdio.h>

int main(void){
	int no;

	printf("正の整数を入力してください。:");
	scanf("%d",&no);

	while(no >= 0){
		printf("%d", no);
		no--;
	}
	printf("\n");
	return 0;
}