#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct userdata{
	int nAge;
	char szName[32];
	char szPhone[32];

} Userdata;

int main(void){
	Userdata *pUser = NULL;
	pUser = (Userdata*)malloc(sizeof(Userdata));

	pUser->nAge =10;
	strcpy(pUser->szName, "Hoon");
	strcpy(pUser->szPhone, "9876");

	printf("%d살\t%s\t%s\n", pUser->nAge, pUser->szName, pUser->szPhone);
	free(pUser);
	return 0;
}
