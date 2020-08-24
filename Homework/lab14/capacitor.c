#include <stdio.h>
#include "capacitor.h"

void displayCapacitorInfo(Capacitor cap) {
	printf("Capacitor %s:\n"
        "\t*Capacitance: %d uF\n"
		"\t*Voltage: %.2f V\n"
        "\t*Cost: $%.2f\n"
		"\t*Type: %d\n",
		cap.modelNumber, cap.capacitance, cap.voltage, cap.cost, cap.type);
}

Capacitor * largestCapacitance(Capacitor caps[], int n) {
	int idx, largest = 0;
	Capacitor *result;
	for (idx = 0; idx<n; idx++) {
		if (largest < caps[idx].capacitance) {
			caps[idx].capacitance;
			result = caps + idx;
		}
	}
	return result;
}

void saveCapacitor(const char *filename, Capacitor cap) {
	FILE *fp = fopen(filename, "w");
	if (fp == NULL) {
		printf("Failed to open file for writing\n");
		return;
	}
	fprintf(fp, "%s %d %f %f %d\n",
		cap.modelNumber, cap.capacitance, cap.voltage, cap.cost, cap.type);
	
	fclose(fp);
}
void saveCapacitors(const char *filename, Capacitor caps[], int n) {
	FILE *fp = fopen(filename, "w");
	if (fp == NULL) {
		printf("Failed to open file for writing\n");
		return;
	}
	int idx;
	for (idx=0; idx<n; idx++) {
		fprintf(fp, "%s %d %f %f %d\n",
			caps[idx].modelNumber, caps[idx].capacitance, caps[idx].voltage, caps[idx].cost, caps[idx].type);
	}
	fclose(fp);
}

Capacitor loadCapacitor(const char *filename) {
	FILE *fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("Failed to open file for reading\n");
		return;
	}
	Capacitor cap;
	fscanf(fp, "%s %d %f %f %d\n",
			cap.modelNumber, &cap.capacitance, &cap.voltage, &cap.cost, &cap.type);
	fclose(fp);
	return cap;
}	
	