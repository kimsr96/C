#include <stdio.h>

int main(void){
    int i=0,j=0,k=1,l=0;
    int nFlag=1;
	int arr[5][5]={0};
    int way[10]={5,4,4,3,3,2,2,1,1};
    int way2[10]={0,4,1,3,2};
    for(i=0; i<10; i++){
        if(nFlag){
            for(j=0; j<way[i]; j++){
                for(l=0; l<=way2[i]; l++){
                    arr[l][j]= k++;
                }
            }
            nFlag=0;
        }
        else{
            for(j=0; j<way[i]; j++){
                for(l=0; l<=way2[i]; l++){
                    arr[j][l]= k++;
                }
            }
            nFlag=1;
        }   
    }
    

    for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}