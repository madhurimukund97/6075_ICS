#include <stdio.h>
#include <stdlib.h>

int htoi(char s[]) {
    int i;
    int ch, num;
    num = 0;
    for (i = 0; (ch = s[i]) != '\0'; ++i) {
        num *= 16;
        if (i == 0 && ch == '0') {
            ch = s[++i];
            if (ch != 'x' && ch != 'X')
                --i;
        } else if (ch >= '0' && ch <= '9')
            num += ch - '0';
        else if (ch >= 'a' && ch <= 'f')
            num += 10 + (ch - 'a');
        else if (ch >= 'A' && ch <= 'F')
            num += 10 + (ch - 'A');
        else
            return num;
    }
    return num;
}

int main(void) {
    char str[1024];
    int i, ch;
    for (i=0; (ch = getchar()) != '\n'; i++)
        str[i] = ch;
    str[i] = '\0';
    printf("%s: %d\n", str, htoi(str));
    return EXIT_SUCCESS;
}

