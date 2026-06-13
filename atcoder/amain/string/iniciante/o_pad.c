#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    char str[256]; scanf(" %[^\n]", str);

    int length = 0;
    while (str[++length] != '\0');
    int new_length = length + n + 1;
    char new_str[new_length];

    int i = 0, j = 0;
    for (i = 0; i < n - length; i++) new_str[i] = 'o';
    while (str[j] != '\0') {
        new_str[i] = str[j];
        i++;
        j++;
    }

    new_str[i] = '\0';

    printf("%s\n", new_str);

    return 0;
}
