#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, temp;
	printf("(1)\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (j == 9 || j == 0 || i == 9 || i == 0) {
				printf("X");
			}
			else {
				printf("-");
			}
		}
		printf("\n");
	}



	printf("(2)\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i==0||i==1||i==2||i==7||i==8||i==9||j==0||j==1||j==2||j==7||j==8|j==9) {
				printf("X");
			}
			else {
				printf("-");
			}
		}
		printf("\n");
	}



	printf("(3)\n");
	temp = 5;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i==4||i+j==4||i<5&&j==temp) {
				printf("X");
			}
			else {
				printf("-");
			}
			
			
		}
		temp++;
		printf("\n");
	}





	printf("(4)\n");
	temp = 0;
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == 0 || (i + j == 9 && i < 5) || (i == temp && j == temp && i < 5)) {
				printf("X");
			}
			else {
				printf("-");
			}
		}
		temp++;
		printf("\n");
	}
	



	temp = 0;
	printf("(5)\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i+j==9||i==temp&&j==temp) {
				printf("X");
			}
			else {
				printf("-");
			}
		}
		temp++;
		printf("\n");
	}
	return 0;
}