#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	
	printf("input seconds : ");
	scanf("%i", &a);
	
	printf("The time is %i : %i : %i \n", a/3600 , ((a%3600)/60) , a%60);
			
	return 0;
	
}