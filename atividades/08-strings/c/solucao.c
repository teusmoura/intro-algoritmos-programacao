/*
 * Lê uma palavra e imprime: comprimento, em maiusculas e invertida.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[101];
    int len, i;

    scanf("%100s", s);
    len = (int)strlen(s);

    /* comprimento */
    printf("%d\n", len);

    /* maiusculas */
    for (i = 0; i < len; i++) {
        printf("%c", toupper((unsigned char)s[i]));
    }
    printf("\n");

    /* invertida */
    for (i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}
