#include <stdio.h>

int main(){
	int n;
	printf("Masukan bilangan: ");
	scanf("%d", &n);
	
	if(n > 50){
		n -= 25;
	} else {
		n += 10;
	}
	printf("Nilai akhir : %d\n", n);
	
	return 0;
}
