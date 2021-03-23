#include <stdio.h>
#ifndef COMPUTER_ONE_H
#define COMPUTER_ONE_H

/* Hardware information */
void hardwareInfoOne(char OSName[45], char version[45], char OSMan[45], char sysType[45], char sysName[45])
{
	printf("> OS NAME: 		%s \n", OSName);
	printf("> VERSION: 		%s \n", version);
	printf("> OS MANUFACTURER: 	%s \n", OSMan);
	printf("> SYSTEM TYPE: 		%s \n", sysType);
	printf("> SYSTEM NAME: 		%s \n", sysName);	
}
/* Network Information*/
void networkInfoOne(char DNSsuffix[60], char IPv6[60], char IPv4[35])
{
	printf("> DNS Suffix: 	%s \n", DNSsuffix);
	printf("> IPv6: 	%s \n", IPv6);
	printf("> IPv4: 	%s \n", IPv4);
}

/* Computer information output */
void computerOneInfoOutput()
{
	// Hardware Information
	char OSName[45] = "Microsoft Windows 10 Pro";
	char version[45] = "10.0.16299 Build 16299";
	char OSMan[45] = "Microsoft Corporation";
	char sysType[45] = "x64-BASED PC";
	char sysName[45] = "WALTER-DESKTOP-1";

	// Network Information
	char DNSsuffix[60] = "hsd1.al.comcast.net";
	char IPv6[60] = "2601:7c1:100:ef69::ba33";
	char IPv4[35] = "192.168.45.2";
	
	// Computer information output
	printf("---~ | %s | ~---\n", sysName);
	printf("\n");
	
	printf("-- HARDWARE INFORMATION --\n");
	hardwareInfoOne(OSName, version, OSMan, sysType, sysName);
	
	printf("\n");

	printf("-- NETWORK INFORMATION --\n");
	networkInfoOne(DNSsuffix, IPv6, IPv4);
}

#endif
