#include <stdio.h>
#ifndef REGISTER_TO_SYSTEM_H
#define REGISTER_TO_SYSTEM_H

void registerToSystem()
{
	char firstName[30];
	char lastName[30];
	char email[50];
	char phoneNumber[50];

	printf("-- Register --\n");
	printf("> First name: ");
	scanf(" %c \n", firstName);
	printf("> Last name: ");
	scanf(" %s \n", lastName);
	printf("> Email: ");
	scanf(" %s \n", email);
	printf("> Phone number: ");
	scanf(" %s \n", phoneNumber);
}

#endif
