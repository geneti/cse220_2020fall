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
