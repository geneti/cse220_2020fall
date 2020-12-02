#include "iocontroller.h"
#include <stdio.h>
char getType(){
	char temp[3]; 
	printf("Please enter the first letter of the shape that you want to find the volume of: ");
	scanf("%s", temp); 
	return temp[0]; 	 
}

float getInput(char type){
	float f = 0.0; 
    if(type == 'C'){
		printf("Please enter the side length of the cube: ");
		scanf("%f", &f);  
	} else if (type == 'S'){
		printf("Please enter the radius of the sphere: ");
		scanf("%f", &f);
	} else {
		printf("INVALID OPTION\n");
	}
	return f; 
}

void printSphere(float volume, float radius){
	printf("The volume of a sphere with radius %f is: %f\n", radius, volume); 
}

void printCube(float volume, float length){
	printf("The volume of a cube with side length %f is: %f\n", length, volume); 
}
