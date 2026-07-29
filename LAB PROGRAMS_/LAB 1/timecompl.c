
#include <stdio.h>
int main() {
    unsigned long n = 1UL<<63;
    int counter = 0;
    for (int i=1;i<=n;i=1<<i) {
        counter++;
    }
    printf("%d\n", counter);
    return 0;
}