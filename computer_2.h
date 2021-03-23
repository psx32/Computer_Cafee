#include <stdio.h>
#ifndef COMPUTER_TWO_H
#define COMPUTER_TWO_H

/* Hardware information */
void hardwareInfoTwo(char OSName[45], char version[45], char OSman[45], char sysType[45], char sysName[45])
{
	printf("> OS NAME: 		%s \n", OSName);
	printf("> VERSION: 		%s \n", version);
	printf("> OS MANUFACTURER: 	%s \n", OSman);
	printf("> SYSTEM TYPE: 		%s \n", sysType);
	printf("> SYSTEM NAME: 		%s \n", sysName);
}
/* Network informatin */
void networkInfoTwo(char DNSsuffix[60], char IPv6[60], char IPv4[35])
{
	printf("> DNS Suffix: 	%s \n", DNSsuffix);
	printf("> IPv6: 	%s \n", IPv6);
	printf("> IPv4: 	%s \n", IPv4);
}

void computerTwoInfoOutput()
{
	// Hardware information
	char sysName[45] = "SCHEINDER-DESKTOP-2";
	char OSName[45] = "Microsoft Windows 10 Pro";
	char version[45] = "10.0.16299 Build 16299";
	char OSman[45] = "Microsoft Corporation";
	char sysType[45] = "x64-BASED PC";

	// Network information
	char DNSsuffix[60] = "hsd1.al.comcast.net";
	char IPv6[60] = "2601:7c1:c1:100:ef69::ba33";
	char IPv4[60] = "192.168.46.2";

	// Computer information output
	printf("---~ | %s | ~---\n", sysName);
	printf("\n");

	printf("-- HARDWARE INFORMATION --\n");
	hardwareInfoTwo(OSName, version, OSman, sysType, sysName);
	
	printf("\n");

	printf("-- NETWORK INFORMATION --\n");
	networkInfoTwo(DNSsuffix, IPv6, IPv4);
}

 #endif
