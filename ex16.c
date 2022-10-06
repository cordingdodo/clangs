#include <stdio.h>
void main(){
	int data;
	printf("prime discriminations\' number input :");
	scanf("%d", &data);
	
	for(int a=2;a<=data;a++){
		if(data%a==0){
			if(data==a) printf("\n input number is prime!");
			return 0;	
		}
		else break;
	}
	printf("\ninput number is not prime~!");
}