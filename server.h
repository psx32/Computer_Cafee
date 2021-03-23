#include "computer_1.h"
#include "computer_2.h"
#include "computer_3.h"
#include <stdio.h>
#ifndef COMPUTER_SERVER_H
#define COMPUTER_SERVER_H

/* Computer information output identifiers 
 * ---------------------------------------
 * 1. computerOneInfoOutput()
 * 2. computerTwoInfoOutput()
 * 3. computerThreeInfoOutput()*/


/* Output all computer information */
void outputAllInformation()
{
	computerOneInfoOutput();

	printf("\n\n");

	computerTwoInfoOutput();

	printf("\n\n");

	computerThreeInfoOutput();
}

/* Output a specific machine */
void outputMachineOne() // Machine: 1
{
	computerOneInfoOutput();
}

void outputMachineTwo() // Machine: 2
{
	computerTwoInfoOutput();
}

void outputMachineThree() // Machine: 3
{
	computerThreeInfoOutput();
}

void adminMenu()
{
	int choice;

	printf("-- COMPKAFE ~{$ADMIN}~ -- \n");
	printf("(1) VIEW ALL COMPUTERS INFORMATION\n");
	printf("(2) VIEW COMPUTER_1 \n");
	printf("(3) VIEW COMPUTER_2 \n");
	printf("(4) VIEW COMPUTER_3 \n");

	printf("\n>> ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			outputAllInformation();
			break;
		case 2:
			outputMachineOne(); // Machine: 1
			break;
		case 3:
			outputMachineTwo(); // Machine: 2
			break;
		case 4:
			outputMachineThree(); // Machine: 3
			break;
	}
}

#endif
