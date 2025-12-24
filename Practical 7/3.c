#include <stdio.h>
int main() {
    int n = 4;
    for(int i=1; i<=n; i++) {
        for(char ch='A'; ch<'A'+i; ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}

// EXPECTED OUTPUT
// A
// AB
// ABC
// ABCD