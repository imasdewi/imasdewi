#include <stdio.h>
#include <math.h>

int main()
{
	float alas, tinggi, luas, keliling;
	
	printf("Masukan panjang alas (cm): ");
	scanf("%f", &alas);
	printf("Masukan tinggi (cm): ");
	scanf("%f", &tinggi);
	
	luas = 0.5 * alas * tinggi;
	
	float sisi_miring = sqrt(alas * alas + tinggi * tinggi);
	
	printf("Luas segitiga: %.2f cm^2\n", luas);
	printf("keliling segitigaa: %.2f cm\n", keliling);
	
	return 0;
}
