#include<stdio.h>
#include<stdlib.h>

int main(){
	int nums[] = {1,2,3,3,4,3,5,9};
	int *dp = malloc(sizeof(int)*10);
	for(int i=0; i < 10; i++){
		dp[i]=0;
	}
	printf("WTF!!!\n");
	dp[0] = 1;
	for(int i = 1; i < 9; i++){
		int hash[10]={0};
		hash[nums[i - 1]] = 1;
		for(int j = i-1 ; j >=0 ; j--){
			if(hash[nums[j-1]] == 1&&j!=0){
				dp[i]+=dp[j];
				break;
			}
			dp[i]+=dp[j];
			hash[nums[j-1]] = 1;
		} 
		printf("dp[%d] = %d\n",i,dp[i]);
	}
	return dp[8];
}
