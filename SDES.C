#include <stdio.h>

int main() {
    char input[10] , afterp10[10] , LLS1[5] , LRS1[5] , afterp8[8];

    char combined1[10] , combined2[10];

    char p10[10] = "2416390875";
    char p8[8] = "52637498";
    char afterp8_2[8];

    char leftPermutation2[10] = "23401";

    char LLS2[5] , LRS2[5];

    char leftPermutation[5] = "12340";

    int i;

    printf("\nEnter Input : ");
    scanf("%s" , &input);

    for (i = 0 ; i < 10 ; i++){
	afterp10[i] = input[p10[i] - '0'];
    }

    printf("After p10 : ");
    for (i = 0 ; i < 10 ; i++){
	printf("%c" , afterp10[i]);
    }


    for (i = 0 ; i < 5 ; i++){
	LLS1[i] = afterp10[leftPermutation[i] - '0'];
	LRS1[i] = afterp10[leftPermutation[i] - '0' + 5];
    }

    printf("\n\nLS1 : ");
    for (i = 0 ; i < 5 ; i++){
	printf("%c" , LLS1[i]);
    }

    printf("\nLS1 : ");
    for (i = 0 ; i < 5 ; i++){
	printf("%c" , LRS1[i]);
    }

    for (i = 0 ; i < 10 ; i++){
	if (i<=4){
	    combined1[i] = LLS1[i];
	}
	else{
	    combined1[i] = LRS1[i-5];
	}
    }

    printf("\n\nCombined : ");
    for (i = 0 ; i < 10 ; i++){
	printf("%c" , combined1[i]);
    }


    for (i = 0 ; i < 8 ; i++){
	afterp8[i] = combined1[p8[i] - '0'];
    }

    printf("\n\nAfter p8 (KEY 1) : ");
    for (i = 0 ; i < 8 ; i++){
	printf("%c" , afterp8[i]);
    }
    
    for (i = 0 ; i < 5 ; i++){
	LLS2[i] = combined1[leftPermutation2[i] - '0'];
	LRS2[i] = combined1[leftPermutation2[i] - '0' + 5];
    }

    printf("\n\nLS2 : ");
    for (i = 0 ; i < 5 ; i++){
	printf("%c" , LLS2[i]);
    }

    printf("\nLS2 : ");
    for (i = 0 ; i < 5 ; i++){
	printf("%c" , LRS2[i]);
    }
    
    
    for (i = 0 ; i < 10 ; i++){
        if (i<=4){
            combined2[i] = LLS2[i];
        }
        else{
            combined2[i] = LRS2[i-5];
        }
    }
    
    printf("\n\nCombined 2: ");
    for (i = 0 ; i < 10 ; i++){
        printf("%c" , combined2[i]);
    }
    
    for (i = 0 ; i < 8 ; i++){
        afterp8_2[i] = combined2[p8[i] - '0'];
    }
    
    printf("\n\nAfter p8 (KEY 2) : ");
    for (i = 0 ; i < 8 ; i++){
        printf("%c" , afterp8_2[i]);
    }
    

    return 0;
}