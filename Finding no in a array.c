#include <stdio.h>
‎
‎int main() {
‎    int a[8] = {1, 2, 3, 4, 5, 6, 7, 9};
‎    int index = 0;
‎
‎    for (int i = 0; i < 8; i++) {
‎        if (a[i] == 4) {
‎            printf("The number is present at index %d\n", i);
‎            index = 1;
‎        }
‎    }
‎
‎    if (index == 0) {
‎        printf("4 not found\n");
‎    }
‎
‎    return 0;
‎}
‎