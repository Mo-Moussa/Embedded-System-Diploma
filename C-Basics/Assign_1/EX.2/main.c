/*
 * main.c
 *
 *  Created on: Nov 8, 2021
 *      Author: M.Moussa
 */

#include "stdio.h"

void main ()

{
	int n;
	printf("Enter an integer:");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&n);
	printf("You entered: %d",n);
}
