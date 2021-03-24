#include "server.h"
#include <stdio.h>

int main()
{
	int choice;

	printf(" -- COMPKAFE MENU -- \n");
	printf("(1) COMPUTER-ONE \n");
	printf("(2) COMPUTER-TWO\n");
	printf("(3) COMPUTER-THREE\n");
	printf("(4) SERVER\n");
	
	printf("\n>> ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1: // Computer: 1
			computerOneFunctions();
			break;
		case 2: // Computer: 2
			computerTwoFunctions();
			break;
		case 3: // Computer: 3
			computerThreeFunctions();
			break;
		case 4: // Server
			adminMenu();
			break;

	}

	return 0;
}
