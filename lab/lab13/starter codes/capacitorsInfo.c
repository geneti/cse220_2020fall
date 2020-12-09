#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "capacitor.h"

int main (int argc, char *argv[]) {
	// Declare four capacitors
	Capacitor cap1 = {"11-123U", 100, 25, 6.00, Film};
	Capacitor cap2 = {"65T91a", 22000, 20, 20.00, Ceramic};
	Capacitor cap3 = {"M-1045", 22, 2.700000, 8.000000, Aluminum};
	Capacitor cap4 = {"M-6600", 6600, 4.500000, 95.000000, Supercapacitor};

    // Declare an array of Capacitors of size 4 and store the above capacitors in it
    Capacitor capArray[4];
	capArray[0] = cap1;
	capArray[1] = cap2;
	capArray[2] = cap3;
	capArray[3] = cap4;

	//Print info for elements in the array
	for(int idx=0; idx<4; idx++) {
		displayCapacitorInfo(capArray[idx]);
    }
	
    printf("\n");
    
    //Find the capacitor with the largest capacitance:
	Capacitor * largestCap = largestCapacitance(capArray, 4);
	printf("Largest cost: %.2f\n", largestCap->cost);

    return 0;

}
