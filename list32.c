/*
 * @file  list32.c
 * @brief　読み込んだ正の整数値までカウントアップ
 * @author mogi
 * @date 2018/3/17
*/

#include <stdio.h>

int main(void){
	int i,no;

	printf("正の整数を入力してください:");
	scanf("%d",&no);

	i = 0;

	while(i <= no)
		printf("%d",i++);
	printf("\n");
	return 0;
}