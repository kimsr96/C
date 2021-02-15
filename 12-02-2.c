include <stdio.h>

int MyStrcpy(char *dst, int num, char *src){
	int i=0;
	while(src[i]!='\0'){
		dst[i]=src[i];
		i++;
	}
	//dst[i]='\0';
	return i;
}

int main(int argc, char* argv[])
{
	char szBufferSrc[12]={"TestString"};
	char szBufferDst[12]= {0};

	printf("%ld\n", sizeof(szBufferDst));
	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);
	return 0;
}
