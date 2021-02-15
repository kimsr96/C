#include <stdio.h>

int main(void){
	int i=0,j;
	while(i<5){
		j=0;
		while(j<5){
			printf("*");
			j++;
		}
		i++;
		printf("\n");
	}
}
