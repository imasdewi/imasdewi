#include <stdio.h>

int main() {
	float celcius, fahrenheit, reamur;
	
	printf("Masukan suhu dalam celcius: ");
	scanf("%f", &celcius);
	
	fahrenheit = (celcius * 9.0/5.0) + 32;
	reamur = (celcius * 4.0/5.0);
	
	printf("Suhu dalam fahrenheit: %.2f derajat fahrenheit\n", fahrenheit);
	printf("Suhu dalam reamur: %.2f derajat reamur\n", reamur);
	
	return 0;
}
