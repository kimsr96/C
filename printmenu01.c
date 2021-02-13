#include <stdio.h>
#include <curses.h>
#include <stdlib.h>

int PrintMenu(void){
	int nInput = 0;

	system("cls");
	printf("1.New\t2.Search\t3.Print\t4.Remove\t0.exit\n:");
	scanf("%d",&nInput);

	return nInput;
	}

int main(void){
	int nMenu = 0;
	
	while((nMenu = PrintMenu()) !=0){
		switch(nMenu)
		{
		case 1:
			puts("새 항목을 추가합니다.");
			break;
		
		default:
		puts("알 수 없는 명령어 입니다");

		}

		getchar();
	}

	puts("Bye");
	return 0;
}
		



