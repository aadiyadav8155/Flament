#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    
    printf("Enter a string: ");
    scanf("%s", str);

    
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    printf("\nFrequency of each character:\n");

    // Frequency print karna
    for (i = 0; str[i] != '\0'; i++) {

        if (freq[str[i]] != 0) {
            printf("%c => %d\n", str[i], freq[str[i]]);

            freq[str[i]] = 0;
        }
    }

    return 0;
}