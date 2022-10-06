#include <stdio.h>
void main(){
	int jum[5][4]={{1,90,80,70},{2,100,90,80},{3,80,75,80},{4,80,90,100}};
	int tot[5] = {0,0,0,0,0};
	float avg[5] = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
	char hak [5] = {'A', 'A', 'A', 'A', 'A'};
	int rank[5] = {1,1,1,1,1};
	int hap[3] = {0,0,0};
	float py[3] = {0.0f,0.0f,0.0f};
	int max[3] = {0,0,0};
	int min[3] = {100,100,100};
	
	for(int i=0;i<5;i++){
		for(int j=1;j<=3;j++){
			tot[i]+=jum[i][j];
			hap[j-1]+=jum[i][j]; //0번부터 해야 하기 때문에
		}
		avg[i] = (float) tot[i] /3;
		if(avg[i]>=90) hak[i]='A';
		else if(avg[i]>=80) hak[i]='B';
		else if(avg[i]>=70) hak[i]='C';
		else if(avg[i]>=60) hak[i]='D';
		else hak[i]='F';
	}
	//석차 : 석차를 구하는 사람의 총점과 나머지 사람의 총점을 반복 비교 석차를 구하는 사람의 총점이 더 작으면 석차는 밀린다(중가)
		for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(tot[i]<tot[j]) ++rank[i];
		}
	}

		printf("번호\t\t국어\t\영어\t\수학\t\총점\t평균\t학점\t석차\n");
		for(int i=0;i<5;i++){
		printf("%d\t\t%d\t%d\t%d\t%d\t%2.2f\t%c\t%d\t%d\n"), jum[i][0],jum[i][1],jum[i][2],jum[i][3],tot[i],avg[i],hak[i],rank[i]);
	}
	//과목별 평균
	for(int i=.;i<3;i++){
		py[i] = (float) hap[i] / 5;
	}
	
	//과목별 최대/최소값 -> 점수를 피비교되는 점수와 비교하여 피비교되는  점수가 더 크면 최대점수 바뀜
	for(int i=0;i<3;i++){ //무슨 과목인지?
		for(int j=0;j<5;j++){ //몇번째 사람인지?
			if(max[i]<jum[j][i+1]) max[i] == jum[j][i+1];
			if(min[i]>jum[j][i+1]) min[i] == jum[j][i+1];]
			
		}
	}
	printf("-----------------------------------------------\n")
	printf("total of part\t%d\t%d\t%d\n", tot[0], tot[1], tot[2]);
	printf("avg of part \t%.2f\t%.2f\t%.2f\n", avg[0], avg[1], avg[2]);
	printf("max of part\t%d\t%d\t%d",max[0],max[1],max[2]);
	printf("min of part\t%d\t%d\t%d",min[0],min[1],min][2]);
	
}