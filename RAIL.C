#include <stdio.h>
#include <string.h>

void encryptRailFence(char *text, int railCount) {
    int textLength = strlen(text);
    char railFence[100][100];

    int row = 0;
    int direction = 1;

    int i;
    int j;

    for (i = 0; i < railCount; i++) {
	for (j = 0; j < textLength; j++) {
	    railFence[i][j] = ' ';
	}
    }

    for (i = 0; i < textLength; i++) {
	railFence[row][i] = text[i];

	if (row == railCount - 1)
	    direction = -1;
	else if (row == 0)
	    direction = 1;

	row += direction;
    }

    for (i = 0; i < railCount; i++) {
	for (j = 0; j < textLength; j++) {
	    // if (railFence[i][j] != '  ') {
		printf("%c", railFence[i][j]);
	    // }
	}
    }
}

int main() {
    char text[100];
    int railCount;

    printf("\nEnter the text: ");
    // Use fgets to read the entire line including spaces
    fgets(text, sizeof(text), stdin);


    printf("Enter the number of rails: ");
    scanf("%d", &railCount);

    printf("Original Text: %s\n", text);
    printf("Encrypted Text: ");
    encryptRailFence(text, railCount);
    printf("\n");

    return 0; }