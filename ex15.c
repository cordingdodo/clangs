#include <stdio.h>
void main() {
	int a, b, divide=1, gcd=1;
	printf("number of first: ");
	scanf("%d", &a);
	printf("number of second : ");
	scanf("%d", &b);
	while(1){
		if(a%divide==0 && b%divide==0) gcd=divide;	
		if(divide>=a || divide>=b) break;	
		divide++;
		}
		printf("between %d and %d = G.C.D : %d\n", a, b, gcd);
	}
