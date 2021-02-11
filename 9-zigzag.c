#include <stdio.h>

int main(void){
	int arr[5][5]={0};
	int i=0, j=0,k=1;
	
		for(i=0; i<5; i++){
			if(i%2==1){
				for(j=4; j>=0; j--){
					arr[i][j]=k;
					k++;
				}
			}
			else{
				for(j=0; j<5; j++){
					arr[i][j]=k;
					k++;
					
				} 
			}
		}
		for(i=0; i<5; i++){
			for(j=0; j<5; j++){
				printf("%d\t",arr[i][j]);
			}
				printf("\n");
		}
	
	return 0;

}

