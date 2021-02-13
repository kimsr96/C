#include <stdio.h>

int main(void){
	int i=0,j=0,k=1;
	int arr[5][5]={0};
	int nFlag=1;
	
	for(i=0; i<5; i++){

		if(nFlag){
			for(j=0; j<5; j++){
				if(j+1 == '\n' || j+1 != 0){
				nFlag=0;
				}
			arr[i][j]=k;
			k++;
			}	
		}
			
		else{
			for(j=0; j<5; j++){
				arr[j][5-i]=k;
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
}
