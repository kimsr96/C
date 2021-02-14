#include <stdio.h>
#include <string.h>

int Mystrcpy(char *dst, int size, char *src){
	int i=0, nSrc=0;
    nSrc=strlen(src);
	if(nSrc +1 > size)
		return size - (nSrc +1);
	while(src[i] != '/0')
	{
		dst[i]=src[i];
		++i;
	}
	dst[i]='\0';
	return nSrc;
}
int main(int argc, char* argv[]){
	char szBufferSrc[12] = {"TestString"};
	char szBufferDst[12] = {0};
	
	Mystrcpy(szBufferDst, sizeof(szBufferDst),szBufferSrc);
	puts(szBufferDst);
	return 0;
}
