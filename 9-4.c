#include <stdio.h>

int main(void){
	int i=0,j=0,k=1;
	int arr[5][5]={0};
	int nFlag=1;
	int tmp=0,tmp2=0;
	int way=5;
	for(i=0; i<5; i++){
		//가로
		if(nFlag){
			for(j=0; j<way; j++){
				if(tmp != 0){
					arr[tmp][i+1-j]= k++;
					tmp2=i+1-j;
				}
				else if(j == 5){
					break;
				}
				else
				{
					arr[tmp][j]= k++;
					tmp2 =j;
				}
					
			}
			nFlag=0;
		}
		//세로
		else{
			for(j=0; j<way; j++){
				if(tmp2 == 4 || tmp2 ==3){
					arr[j+1][tmp2]= k++;
					tmp=j+1;
				}
				else{
					arr[tmp2-j+1][4-i]= k++;
					tmp=tmp2-j+1;
				}
					
			}
			nFlag=1;
		}
		way-1;
	}

	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
