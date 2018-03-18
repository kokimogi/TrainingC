/*
 * @file  list38.c
 * @brief　配列の全要素の並びを反転する
 * @author mogi
 * @date 2018/3/17
*/

#include <stdio.h>

int main(void){
	int i;
	int x[7];

	for(i=0;i < 7;i++){
		printf("x[%d]:",i);
		printf("%d",&x[i]);
	}

	for(i=0;i < 3;i++){
		int temp = x[i];
		x[i] = x[6 -i];
		x[6-i] = temp;
	}
	puts("反転しました。");
	for(i = 0;i < 7;i++)
		printf("x[%d] = %d\n",i,x[i]);

	return 0;
}