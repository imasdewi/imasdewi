#include <stdio.h>

int main()
{
	//Deklarasi Variable
	float alas, tinggi, sisi_miring;
	
	//Panjang Alas dan Tinggi
	alas = 4.0;
	tinggi = 5.0;
	
	//Menghitung Panjang Sisi Miring dengan rumus Pythagoras Sisi_Miring = sqrt(alas * alas + tinggi * tinggi
	
	//Menampilkan Hasil
	printf("Panjang alas: %.2f cm\n", alas);
	printf("Panjang tinggi: %.2f cm\n", tinggi);
	printf("Rumus: a x a + t x t\n");
	printf("Panjang sisi miring (hipotenusa): %.2f cm\n", sisi_miring);
	
	return 0;
	
}
