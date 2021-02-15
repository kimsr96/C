#include <stdio.h>
#include <string.h>

char* mystrcat(char *pszDst, char *pszSrc)
{
	//pszDst의 끝을 찾기
	while(*pszDst != '\0')
		++pszDst;
	//pszSrc의 끝을 찾아 pszDst끝에 붙이기
	while(*pszSrc != '\0')
		*pszDst++ = *pszSrc++;
	//pszDst 마지막에 NULL추가
	*pszDst++ ='\0';

	return --pszDst;
}
int main(void){
	char szPath[128]={0};
	char *pszEnd =NULL;
	pszEnd = mystrcat(szPath, "C:\\Program Files\\");
	pszEnd = mystrcat(pszEnd,"CHS\\");
	pszEnd = mystrcat(pszEnd, "C programming");

	puts(szPath);
	return 0;
}
