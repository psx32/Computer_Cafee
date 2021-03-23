#include "server.h"
#include <stdio.h>

int main()
{
	int choice;

	printf(" -- COMPKAFE MENU -- \n");
	printf("(1) SERVER \n");
	
	printf("\n>> ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			adminMenu();
			break;
	}

	return 0;
}
