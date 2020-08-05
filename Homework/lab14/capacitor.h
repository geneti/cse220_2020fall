#ifndef  CAPACITOR_H
#define CAPACITOR_H

enum CapType {Ceramic, Aluminum, Film, Supercapacitor};

typedef struct{
	char modelNumber[20];
	int capacitance;
	float voltage;
	float cost;
	enum CapType type;
} Capacitor;

void displayCapacitorInfo(Capacitor cap);
Capacitor * largestCapacitance(Capacitor caps[], int n);

void saveCapacitor(const char *filename, Capacitor cap);
void saveCapacitors(const char *filename, Capacitor caps[], int n);
Capacitor loadCapacitor(const char *filename);

#endif