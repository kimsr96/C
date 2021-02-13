#include <stdio.h>

int GetData(void){
	int nInput =0;	
	printf("정수를 입력하세요: ");
	scanf("%d", &nInput);
	
	return nInput;
}

int GetMax(int a, int b, int c){
	if(a>b && a>c)
		return a;
		
	else if(b>a && b>c)
		return b;
	else
		return c;
}

void PrintData(int a, int b, int c, int d)
{
	printf("%d\t%d\t%d\t%d\t", a,b,c,d);
}


int main(void){
	int aList[3]={0};
	int i=0;
	int nMax =-9999;
	for (i=0; i<3; ++i)
		aList[i] = GetData();

	nMax = GetMax(aList[0], aList[1], aList[2]);

	PrintData(aList[0], aList[1], aList[2], nMax);
	return 0;
}
