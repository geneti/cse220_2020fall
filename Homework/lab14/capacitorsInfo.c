#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "capacitor.h"

void trimNewLine(char *str);

int main (int argc, char *argv[]) {
	Capacitor cap1 = {"11-123U", 100, 25, 6.00, Film};
	Capacitor cap2 = {"65T91a", 22000, 20, 20.00, Ceramic};

	printf("Cap1 Model: %s\n", cap1.modelNumber);
	printf("Cap2 Voltage: %.1f\n", cap2.voltage);

    //Add a third capacitor and initialize it from user input
    Capacitor cap3;
	printf("Enter model number: ");
	fgets(cap3.modelNumber, 20, stdin);
	//fgets adds a newline to the string, remove it
	trimNewLine(cap3.modelNumber);
	printf("Enter the capacitance:\n");
    scanf("%d", &cap3.capacitance);
    printf("Enter the voltage: \n");
    scanf("%f",&cap3.voltage);
    printf("Enter the cost: \n");
    scanf("%f", &cap3.cost);

    //Print members of the third capacitor
	printf("Cap3 Model: %s\n", cap3.modelNumber);
	printf("Cap3 Capacitance: %d\n", cap3.capacitance);
	printf("Cap3 Voltage: %.1f\n", cap3.voltage);
	printf("Cap3 Cost: %.2f\n", cap3.cost);

    //Declare an array of Capacitors of size 4
    Capacitor capArray[4];
	
	//Copy cap1,2,3 into the first 3 elements of the array
	capArray[0] = cap1;
	capArray[1] = cap2;
	capArray[2] = cap3;
	
	//Populate the fourth element from user input
	printf("Enter model number: ");
	fgets(capArray[3].modelNumber, 20, stdin); //consume the newline left from previous call
	fgets(capArray[3].modelNumber, 20, stdin); //Read the intended input
	//fgets adds a newline to the string, remove it
	trimNewLine(capArray[3].modelNumber);
	
    printf("Enter the capacitance:\n");
    scanf("%d", &capArray[3].capacitance);
    printf("Enter the voltage: \n");
    scanf("%f", &capArray[3].voltage);
    printf("Enter the cost: \n");
    scanf("%f", &capArray[3].cost);

    //Assign a value for type for array elements
    capArray[0].type = Ceramic;
    capArray[1].type = Film;
    capArray[2].type = Aluminum;
    capArray[3].type = Supercapacitor;

	//Print info for elements in the array
	int idx=0;
	for(idx=0; idx<4; idx++) {
		displayCapacitorInfo(capArray[idx]);
    }
	
    //Find the capacitor with the largest capacitance:
	Capacitor * largestCap = largestCapacitance(capArray, 4);
	printf("Largest capacitance cost: %.2f\n", largestCap->cost);
	
    //Save the first capacitor into file cap1.txt
    saveCapacitor("cap1.txt", capArray[0]);

    //Save the array into file allCaps.txt
    saveCapacitors("allCaps.txt", capArray, 4);

	//Load from cap1.txt
    Capacitor savedCap = loadCapacitor("cap1.txt");
    displayCapacitorInfo(savedCap);

    return 0;

}

void trimNewLine(char *str) {
	int len = strlen(str);
	*(str+len-1) = '\0';
}