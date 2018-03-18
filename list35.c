/*
 * @file  list35.c
 * @brief　指示された個数だけ整数を読み込んで合計値と平均値を指示
 * @author mogi
 * @date 2018/3/17
*/

#include <stdio.h>

int main(void){
	int i =0;
	int sum=0;
	int num,tmp;

	printf("整数値は何個ですか:");
	scanf("%d",&num);

	for(i=0;i <num;i++){
		printf("No.%d:",i+1);
		scanf("%d",&tmp);
		sum += tmp;
	}

	printf("合計値:%d\n",sum);
	printf("平均値:%.2f\n", (double)sum/num);

	return 0;
}
