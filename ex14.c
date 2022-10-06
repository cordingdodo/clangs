#include <stdio.h>
void main(){
	int kor, eng, math, tot, avg, rank, num;
	//printf("국어 ,영어, 수학 점수를 입력하세요");
	scanf("%d", &kor);
	scanf("%d", &eng);
	scanf("%d", &math);
	tot=kor+eng+math;
	avg=(double) tot/3;
	
}	
	if(avg=>90){
	printf("rank a");
	} else if(avg=>70){
		printf("rank b");
	} else if(avg=>60){
		printf("rank c");
	} printf("rank d")
	printf("총점은 %d 평균은 %d 입니다" tot,avg);