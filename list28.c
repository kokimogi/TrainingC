/*
 * @file  list28.c
 * @brief　読み込んだ整数値は奇数であるか偶数であるか？
 * @author mogi
 * @date 2018/3/17
*/

#include <stdio.h>

int main(void){
	int retry;

		do{
			int no;

			printf("整数を入力してください:");
			scanf("%d",&no);

			if(no % 2)
				puts("その数は奇数です。");
			else
				puts("その数は奇数です。");
			printf("もう一度? [Yes・・・0/No・・・9] :");
			scanf("%d",&retry);
		}while(retry ==0);

		return 0;
}