#include <stdio.h>
#include <stdlib.h>

void remove_vowels(char *str) {
    int i, j;
    for (i = j = 0; str[i]; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' && str[i] != 'O' &&
            str[i] != 'U') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    int size;
    char *str;

    printf("Enter the size of the string: ");
    scanf("%d", &size);

    str = (char *)malloc((size + 1) * sizeof(char));

    printf("Enter the string: ");
    scanf("%s", str);

    remove_vowels(str);

    printf("String without vowels: %s\n", str);

    free(str);

    return 0;
}
