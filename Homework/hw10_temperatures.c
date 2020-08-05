#include<stdio.h>

#define MAX 500

int temperatures[MAX];
int lastIdx = -1; //Nothing stored yet.

void printOptions();
float averageAll();
float averageLast5();
void insertTemp(int newTemp);
void printSize();
void printTemps();

int main(void) {
	char option;
	float value;
	int newTemp;
	
	while (1) {
		printOptions();
		scanf(" %c", &option);
		if (option == 'A') {
			value = averageAll();
			printf("Average: %.2f\n", value);
		} else if (option == 'B') {
			value = averageLast5();
			printf("Average: %.2f\n", value);
		} else if (option == 'C') {
			printf("Enter the temperature value\n");
			scanf("%d", &newTemp);
			insertTemp(newTemp);
		} else if (option == 'D') {
			printSize();
		} else if (option == 'E') {
			printTemps();
		} else if (option == 'F') {
			printf("Done!\n");
			break;
		} else {
			printf("This is not a valid option!\n");
		}
	}
	
	return 0;

}

void printOptions() {
	printf("SELECT ONE OF THE FOLLOWING OPTIONS\n"); 
	printf("(A)	computed average of all temperatures\n"); 
	printf("(B)	compute the average of the last five\n");
	printf("(C)	add a new temperature\n");
	printf("(D)	print the number of temperatures recorded\n");
	printf("(E)	print the temperatures recorded\n");
	printf("(F)	exit the program\n");

}

float averageAll() {
	int i;
	float sum = 0.0;
	for (i=0; i<=lastIdx; i++) {
		sum += temperatures[i];
	}
	if (lastIdx != -1)
		//Divide sum by nb of elements
		return sum/(lastIdx + 1.0);
	else {
		//If array is empty, return 0
		return 0.0;
	}
}
float averageLast5() {
	if (lastIdx < 5)
		return averageAll();
	
	int i;
	float sum = 0.0;
	for (i=lastIdx; i>lastIdx-5; i--) {
		sum += temperatures[i];
	}
	return sum/5.0;
	
}

void insertTemp(int newTemp) {
	//Check if the array fits any more values
	if (lastIdx < MAX - 1) {
		lastIdx++;
		temperatures[lastIdx] = newTemp;
		printf("New temperature inserted\n\n");
	} else {
		printf("Array is full. Temperature not inserted.\n\n");
	}
}

void printSize() {
	printf("Size is: %d\n", lastIdx + 1);
}

void printTemps() {
	int i;
	for (i=0; i<=lastIdx; i++) {
		printf("%d  ", temperatures[i]);
	}
	printf("\n\n");
}
