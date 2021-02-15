#include <stdio.h>

char* mystr(char *input)
{
	while(*input != '\0'){
		printf("%c\n",*input);
		input++;
	}
	return input;
}

int main(void){
	mystr("hello,world");
	return 0;
}
