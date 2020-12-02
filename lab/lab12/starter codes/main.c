#include "iocontroller.h"
#include "volume.h"
#include <stdio.h>
int main(){
	char c = 'Y'; 
	while(c == 'Y' || c == 'y'){
		char type = getType(); 
		float f = getInput(type); 
		float volume = 0.0; 
	    if(type == 'C'){
			volume = getCubeVolume(f); 
			printCube(volume, f);
        } else if (type == 'S'){
			volume = getSphereVolume(f); 
			printSphere(volume, f); 
		}
		printf("Would you like to try again? (y/n): ");
    char temp[4]; 
    scanf("%s", temp);
    c = temp[0]; 
    }
    printf("Exiting…\n");
    return 0; 
}
