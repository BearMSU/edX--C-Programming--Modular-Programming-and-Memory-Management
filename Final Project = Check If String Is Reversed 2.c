#include <stdio.h>

int isReverse(char *w1, char *w2);
int strlength(char *w);

int main(void) {
    char w1[100];
    char w2[100];
    
    //printf("Please enter first word: ");
    scanf("%s", w1);
    //printf("Please enter second word: ");
    scanf("%s", w2);
    
    if (isReverse(w1, w2)) {
        printf("%s is the reverse of %s\n", w1, w2);
    } else {
        printf("%s is not the reverse of %s\n", w1, w2);
    }
    
    return 0;
}

int isReverse(char *w1, char *w2) {
    int i, l1, l2;
    int rev = 1;
    
    l1 = strlength(w1);
    l2 = strlength(w2);
    if (l1!=l2) {
        rev=0;
    } else {
        for (i=0; i<l1; i++) {
            if (w1[i] != w2[l1-i-1]) {
                rev = 0;
            }
        }
    }
    return rev;
}

int strlength(char *w) {
    int i = 0;
    while (w[i]!='\0') {
        i++;
    }
    return i;
}
