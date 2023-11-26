#include <stdio.h>

int powMod(int a , int b , int mod){
    int i , result;
    result = 1;
    for (i = 0 ; i < b ; i++){
        result = (result * a) % mod;
    }
    return result % mod;
}

int checkprime (int n){
    int flag , i ;
    for (i = 2 ; i<n ; i++){
        if (n % i == 0){
            flag = -1;
            break;
        }
        else{
            flag = 1;
        }
    }
    return flag;
}


int main() {
    
    int p , q , alpha , Xa , Xb , Ya , Yb , Ka , Kb , flag;
    
    printf("\nEnter p (PRIME NUMBER) : ");
    scanf("%d" , &p);
    flag = checkprime(p);
    while (flag == -1){
        printf("\nNot a prime number");
        printf("\nEnter p (PRIME NUMBER) : ");
        scanf("%d" , &p);
        flag = checkprime(p);
    }
    
    printf("\nEnter q (PRIME NUMBER) : ");
    scanf("%d" , &q);
    flag = checkprime(q);
    while (flag == -1){
        printf("\nNot a prime number");
        printf("\nEnter p (PRIME NUMBER) : ");
        scanf("%d" , &q);
        flag = checkprime(q);
    }
    
    printf("\nEnter Alice Key : ");
    scanf("%d" , &Xa);
    printf("\nEnter Bob Key : ");
    scanf("%d" , &Xb);
    
    printf("\nEnter Primitive root : ");
    scanf("%d" , &alpha);
    
    Ya = powMod(alpha , Xa , p);
    Yb = powMod(alpha , Xb , p);
    
    printf("\nYa : %d" , Ya);
    printf("\nYb : %d" , Yb);
    
    Ka = powMod(Yb , Xa , p);
    Kb = powMod(Ya , Xb , p);
    
    printf("\n\nka : %d" , Ka);
    printf("\nkb : %d" , Kb);
    
    if(Ka == Kb){
        printf("\n\nKey exchange was successful");
    }

    return 0;
}













