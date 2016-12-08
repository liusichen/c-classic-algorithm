#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a==0||b==0){
		printf("a or b must greater than 0\n");
		return 0;
	}
	int *array=(int *)malloc(sizeof(int)*1000);
	int i=0;
	array[i++]=a;
	array[i++]=b;
	while(a%b!=0){
		a=array[i-2];
		b=array[i-1];
		array[i++]=a%b;
	}
	free(array);
	printf("the max yinzi is %d\n",b);
	return 0;
}
