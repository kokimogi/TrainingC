/*
 * @file  list27.c
 * @brief　読み込んだ整数値を3で割った剰余を表示
 * @author mogi
 * @date 2018/3/17
*/

#include <stdio.h>

int main(void){
	int no;

	printf("%d",&no);

	switch(no % 3){
		case 0 :puts("その数は3で割り切れます"); break;
		case 1 :puts("その数を3で割った剰余は1です。"); break;
		case 2 :puts("その数を3で割った剰余は2です。");　break;
	}

	return 0;
}