#include<stdio.h>
int main(){
	int N,A,B,C,D,E,i;
	scanf("%d\n",&N);
	i=1;A=0;B=0;C=0;D=0;E=0;
	int score[i];
	while(i<=N){
		scanf(" %d",&score[i]);
		if(score[i]>=90)A++;
		else if(score[i]<90&&score[i]>=80)B++;
		else if(score[i]<80&&score[i]>=70)C++;
		else if(score[i]<70&&score[i]>=60)D++;
		else if(score[i]<60)E++;
		i++;
	}
	printf("%d %d %d %d %d",A,B,C,D,E);
	return 0;
}
