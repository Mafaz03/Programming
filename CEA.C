#include <stdio.h>
#include <string.h>

int main() {

    char text[100] , ch;
    int key;
    int i;

    printf("\nEnter Text : ");
    fgets(text , sizeof(text) , stdin);
    
    printf("\nEnter Key : ");
    scanf("%d",&key);

    for(i = 0 ; i < strlen(text) ; i++){
    ch = text[i];

    if (isalpha(ch)){
        if (ch == ' '){
        ch = ' ';
        }
        else if (islower(ch)){
        ch = (ch - 'a' + key) %26 + 'a';
        }
        else {
        ch = (ch - 'A' + key) %26 + 'A';
        }
    }

    text[i] = ch;
    }

    printf("\nEncripted Text : %s",text);

    return 0;
}
