#include<stdio.h>
#include<stdlib.h>
#include "geometry.h"

void printUsage();

int main(int argc, char * argv[]) {
	if (argc < 3) {
		printUsage();
		return 1;
	}
	
	float area;
	if (strcmp(argv[1], "R") == 0) {
		if (argc < 4) {
			printUsage();
			return 1;
		}
		
		float length = atof(argv[2]);
		float width = atof(argv[3]);
		area = computeRectangleArea(length, width);
	} else  if (strcmp(argv[1], "C") == 0) {
		float radius = atof(argv[2]);
		area = computeCircleArea(radius);
	} 
	printf("%s %.2f\n", argv[1], area);
}


void printUsage() {
	printf("Missing parameters\n");
	printf("Correct usage:\n");
	printf("\t<program-name> Type value [value]\n");
	printf("Type is either R or C\n");
	printf("R takes to values, C one value\n");
}