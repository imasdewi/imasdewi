#include <stdio.h>

int main() {
    char A[8] = "JAKARTA";
    int i, flag = 0;
    
    // Memeriksa huruf yang sama dalam array
    for (  i = 0; i < 7; i++) {
        if (A[0] == A[i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
        	printf("\nADA");
		} else{
			printf("\nTIDAK ADA");
		}
    return 0;
}
