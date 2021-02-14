#include <stdio.h>

int main(int argc, char* argv[])
{
	char ch ='A';
	//char*에는 char형의 주소를 담는다.
	char *pData = &ch;
	//char**에는 char*형의 주소를 담는다.
	char* *ppData = &pData;
	//char***에는 char**형의 주소를 담는다.
	char** *pppData = &ppData;

	printf("%c\n", ch);
	printf("%c\n", *pData);
	printf("%c\n", **ppData);
	printf("%c\n", ***pppData);
	return 0;
}
