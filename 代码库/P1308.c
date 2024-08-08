#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 1000000

void toLowerCase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int WordEqual(const char* word, const char* text, int start, int len) {
    for (int i = 0; i < len; i++) {
        if (tolower(word[i]) != tolower(text[start + i])) {
            return 0;
        }
    }

    if ((start == 0 || text[start - 1] == ' ') && 
        (text[start + len] == ' ' || text[start + len] == '\0')) {
        return 1;
    }
    return 0;
}

int main() {
    char word[11]; 
    char text[MAXLEN + 1];
    
    scanf("%s", word);
    getchar(); 
    fgets(text, MAXLEN + 1, stdin);

    int wordLen = strlen(word);
    int textLen = strlen(text);
    int count = 0;
    int Position = -1;

    for (int i = 0; i <= textLen - wordLen; i++) {
        if (WordEqual(word, text, i, wordLen)) {
            count++;
            if (Position == -1) {
                Position = i;
            }
        }

        while (i < textLen && text[i] != ' ' && text[i] != '\0') {
            i++;
        }
    }

    if (count > 0) {
        printf("%d %d\n", count, Position);
    } else {
        printf("-1\n");
    }

    return 0;
}
