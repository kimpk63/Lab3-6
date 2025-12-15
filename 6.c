#include <stdio.h>

int main() 
{
	int score;
	scanf ("%d",&score);
	if (score < 0){
		printf("Error");
	}
	else if (score > 100){
		printf("Error");
	}
	
	else if (score >= 68){
		if (score >= 80){
			printf("A");
		}
		else if (score >= 70){
			printf("B");
		}
		else {
			printf("C");
			printf("Need %d more Score\n",70 - score);
		}
	}
	else {
		if (score >= 50){
			printf("D");
		}
		else {
			printf("F");
		}
	}
	return 0;
}
