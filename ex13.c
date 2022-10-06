#include <stdio.h>
void main(){
	int data;
	scanf("%d", &data);
	printf("sum of 1~%d: %d", data, rSum(data));
}
	int rSum(int n){
		if(n==1) return 1;
		return n+rSum(n-1);		
	}
	
s