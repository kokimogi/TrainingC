/*
 * @file  list26.c
 * @brief　読み込んだ整数値を3で割った剰余を表示
 * @author mogi
 * @date 2018/3/17
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください");
	scanf("%d",&no);

	if(no % 3 == 0)
		puts("その数は3で割り切れまず。");
	else if(no % 3 == 1)
			puts("その数を3で割った剰余は1です。");
	else
			puts("その数を3で割った剰余は2です。");
	return 0;
	
}