/*
 * @file  list39.c
 * @brief　学生の点数を読み込んで合計点と平均点を表示
 * @author mogi
 * @date 2018/3/17
*/

#include <stdio.h>

#define NUMBER 5

int main(void){
	int i;
	int tensu[NUMBER];
	int sum = 0;

	printf("%d人の点数を入力してください。\n",NUMBER);
	for(i=0;i<NUMBER;i++){
		printf("%2d番:",i + 1);
		scanf("%d",&tensu[i]);
		sum += tensu[i];
	}

	printf("合計点:%5d\n",sum);
	printf("平均点:%5.1f\n",(double)sum / NUMBER);

	return 0;
}