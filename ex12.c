#include <stdio.h>
void main() {
	int a, b, res;
	scanf("%d", &a);
	scanf("%d", &b);
	res = bigNum(a, b);
	printf("big number : %d\n", res);
	}
	int bigNum(int num1, int num2){
		if(num1>num2) return num1;
		else return num2;
	}
