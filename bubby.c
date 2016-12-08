#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int *bubby=(int *)malloc(sizeof(int)*20);
	memset(bubby,0,20);
	bubby[0]=1;
	bubby[1]=1;
	for(int i=2;i<20;i++){
		bubby[i]=bubby[i-1]+bubby[i-2];
	}
	for(int i=0;i<20;i++){
		printf("bubby[%d]=%d\n",i,bubby[i]);
	}
	printf("\n");
	return 0;
}
