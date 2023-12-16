#include <stdio.h>
int main() {
	int A[5] = {12, 8, 17, 5, 15};
	int B[7] = {5, 11, 7, 25, 9, 12, 14};
	int C[12] = {0};
	int i,J;
	
	//cetak Isi Array A
	printf("\n Isi Array A : ");
	for (i=0; i<5; i++){
		printf("%3i", A[i]);
	}
	
	//Cetak Isi Array B
	printf("\n isi Array B : ");
	for (i=0; i<7; i++){
		printf("%3i", B[i]);
	}
	J=0;
	//Index ini untuk Array C
	for (i=0; i<12; i++){
		C[J] = A[i],B[i];
		J++;
	}
	
	//Cetak Isi Array C
	printf("\n isi Array C : ");
	for (i=0; i<12; i++){
		printf("%3i", C[i]);
	}
	return 0;
}
