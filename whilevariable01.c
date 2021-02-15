#include <stdio.h>

int main(void){
	char ch =0;
	int nIndex=0;

	while((ch =getchar()) != '\n')
	{
		printf("%c\n",ch);
	}
	return 0;
}
