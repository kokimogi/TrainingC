/*
 * @file  list34.c
 * @brief　読み込んだ正の整数値までカウントアップ(for文)
 * @author mogi
 * @date 2018/3/17
*/

#include <stdio.h>

int main(void){
	int i,no;

	printf("正の整数値まで入力してください。");
	scanf("%d",&no);

	for(i=0;i <= no;i++)
		printf("%d",i);
	putchar('\n');

	return 0;
}