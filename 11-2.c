#include <stdio.h>
#include <string.h>

int main(void){
	char szBuffer[32] = {"You are a girl."};
	char *pszData = szBuffer +4;

	printf("%c\n",szBuffer[0]); //Y
	printf("%c\n",pszData[0]); //a
	printf("%c\n",pszData[6]); //g

	printf("%s\n",szBuffer+4); //are~
	printf("%s\n",pszData); // are~
	printf("%s\n",pszData+4); //a~
	
	return 0;
}
