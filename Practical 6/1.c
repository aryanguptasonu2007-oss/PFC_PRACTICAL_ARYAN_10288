#include <stdio.h>
int main() {
    int a, b;
    printf("Enter start and end: ");
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    return 0;
}