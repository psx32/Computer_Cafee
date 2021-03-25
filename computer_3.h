#include "registerToSystem.h"
#include <stdio.h>
#ifndef COMPUTER_THREE_H
#define COMPUTER_THREE_H

/* Hardware information */
void hardwareInfoThree(char OSName[45], char version[45], char OSMan[45], char sysType[45], char sysName[45])
{
	printf("> OS NAME: 		%s \n", OSName);
	printf("> VERSION: 		%s \n", version);
	printf("> OS MANUFACTURER: 	%s \n", OSMan);
	printf("> SYSTEM TYPE: 		%s \n", sysType);
	printf("> SYSTEM NAME: 		%s \n", sysName);
}

/* Network Information */
void networkInfoThree(char DNSsuffix[60], char IPv6[60], char IPv4[35])
{
	printf("> DNS Suffix: 	%s \n", DNSsuffix);
	printf("> IPv6: 	%s \n", IPv6);
	printf("> IPv4:		%s \n", IPv4);
}

void computerThreeInfoOutput()
{
	// Hardware Information
	char OSName[45] = "Microsoft Windows 10 Pro";
	char version[45] = "10.0.16299 Build 16299";
	char OSMan[45] = "Microsoft Corporation";
	char sysType[45] = "x64-BASED PC";
	char sysName[45] = "BATMAN-DESKTOP-3";

	// Network Information
	char DNSsuffix[60] = "hsd1.al.comcast.net";
	char IPv6[60] = "2601:7c1:100:ef69::ba33";
	char IPv4[35] = "192.168.44.2";

	// Computer information output
	printf("---~ | %s | ~---\n", sysName);
	printf("\n");

	printf("-- HARDWARE INFORMATION --\n");
	hardwareInfoThree(OSName, version, OSMan, sysType, sysName);

	printf("\n");

	printf("-- NETWORK INFORMATION --\n");
	networkInfoThree(DNSsuffix, IPv6, IPv4);
}

void computerThreeFunctions()
{
	int choice;

	printf("--- COMPUTER: 3 ~{B4TM4N}~ ---\n");
	printf("(1) View Computer information\n");
	printf("(2) Register to the Cafe\n");

	printf("> ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			computerThreeInfoOutput();
			break;
		case 2:
			registerToSystem();
			break;

	}
}

#endif
