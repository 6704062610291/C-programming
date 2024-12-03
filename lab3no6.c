#include<stdio.h>
int main() {
	int score;
	scanf("%d",&score);
	
	if (score>=68) {
		if (score>=88){
			printf("You get grade A \n");
		}
		else if(score>=78){
			printf("You get grade B \n");
		}
		else if(score>=68){
			printf("You get grade C \n");
		}
	}
	
	else{
		if(score>=58){
			printf("You get grade D \n");
		}
		if(score<58){
			printf("You get grade F \n");
		}
	}
}
