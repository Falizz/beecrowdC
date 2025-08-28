#include <stdio.h>
#include <string.h>

int main (void) {

    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        char str[1001];
        fgets(str, sizeof(str), stdin);

        // retira o '\n' no final de cada input
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        for (int j = 0; j < len; j++) {
            if ((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z')) str[j] = str[j] + 3;
        }

        for (int j = 0; j < len / 2; j++) {
            char temp = str[j];
            str[j] = str[len - 1 - j];
            str[len - 1 - j] = temp;
        }

        for (int j = len / 2; j < len; j++) {
            str[j]--;
        }

        printf("%s\n", str);
    }

    return 0;
}