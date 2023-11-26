#include <stdio.h>

int powMod(int a , int b , int mod){
    int i , result;
    result = 1;
    for(i = 0 ; i < b ; i++){
        result = (result * a) % mod;
    }
    return result % mod;
}

int gcd(int a , int h){
    int temp;
    
    while(1){
        temp = a % h;
        if (temp == 0){
            return h;
        }
        a = h;
        h = temp;
    }
}

int checkprime(int n){
    int i , flag;
    for (i = 2 ; i < n ; i++){
        if (n%i == 0){
            flag = -1;
            break;
        }
        else {
            flag = 1;
        }
    }
    return flag;
}

int main() {
    
    int p , q ,i , flag , n , e , phi , d , msg , c , de;
    
    e = 2;
    d = 2;
    
    printf("\nEnter p : ");
    scanf("%d" , &p);
    
    flag = checkprime(p); 
    if  (flag == -1){
        printf("\nNumber is not prime number");
        
        while(flag == -1){
            printf("\nEnter p : ");
            scanf("%d" , &p);
            flag = checkprime(p);
        }
    }
    
    printf("Enter q : ");
    scanf("%d" , &q);
    
    flag = checkprime(q); 
    if  (flag == -1){
        printf("\nNumber is not prime number");
        
        while(flag == -1){
            printf("\nEnter q : ");
            scanf("%d" , &q);
            flag = checkprime(q);
        }
    }
    
    n = p * q;
    phi = (p-1) * (q-1);
    
    while(e < phi){
        if (gcd(e , phi) == 1){
            break;
        }
        else{
            e++;
        }
    }
    printf("\ne : %d",e);
    
    while(1){
        if (((d * e) % phi) == 1){
            break;
        }
        else{
            d++;
        }
    }
    
    printf("\nd : %d",d);
    
    printf("\nPublic Key : (%d , %d)",e,n);
    printf("\nPrivate Key : (%d , %d)",d,n);
    
    printf("\nEnter Message : ");
    scanf("%d" , &msg);
    
    c = powMod(msg , e , n);
    printf("\nEncrypted message : %d",c);
    
    de = powMod(c , d , n);
    printf("\nDecrypted message : %d",de);

    return 0;
}
