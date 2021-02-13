#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    // int *pList = NULL, *pNewList = NULL;

    // int aList[3]={0};

    // pList = (int*)malloc(sizeof(int)*3);
    // memset(pList, 0, sizeof(int)*3);

    // pNewList = (int*)calloc(3, sizeof(int));

    // free(pList);
    // free(pNewList);
    // return 0;

    char *pszData = NULL;

    pszData = (char*)malloc(sizeof(char)*6);
    printf("%d\n", malloc_usable_size(pszData));
    free(pszData);
    return 0;
}
