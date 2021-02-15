#include <stdio.h>

int main(void){
	int i;
	int j=0;
	scanf("%i",&i);

	if(i<0){
		i=1;
	}
	else if(i>9){
		i=9;
	}


	while(j<i){
		printf("*");
		j++;
	}
	printf("\n");
	return 0;
}
