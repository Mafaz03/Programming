#include <stdio.h>

int main() {
    int A1, A2, A3, B1, B2, B3, Q;
    int temp1 , temp2 , temp3;

    A1 = 1;
    A2 = 0;

    B1 = 0;
    B2 = 1;

    printf("\nFirst Number: ");
    scanf("%d", &A3);

    printf("\nSecond Number: ");
    scanf("%d", &B3);

    while (1) {
	Q = A3 / B3;

	printf("%d || %d | %d | %d | %d | %d | %d\n", Q, A1, A2, A3, B1, B2, B3);
    	temp1 = A1;
    	temp2 = A2;
    	temp3 = A3;
    
    	A1 = B1;
    	A2 = B2;
        A3 = B3;

        B1 = temp1 - (Q * B1);
        B2 = temp2 - (Q * B2);
        B3 = temp3 - (Q * B3);

        if (B3 == 0) {
            // printf("GCD: %d\n", A3);
            break;
        } else if (B3 == 1) {
            // printf("GCD: %d\nInverse: %d\n", A3, A2);
            break;
        }
    }
    
    
    if (B3 == 0) {
        printf("%d || %d | %d | %d | %d | %d | %d\n", Q, A1, A2, A3, B1, B2, B3);
        printf("GCD: %d\n", A3);
    } 
    else if (B3 == 1) {
        printf("%d || %d | %d | %d | %d | %d | %d\n", Q, A1, A2, A3, B1, B2, B3);
        printf("GCD: %d\nInverse: %d\n", B3, B2);
    }
    
    

    return 0;
}



