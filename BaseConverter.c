/*
 * @Name: Base Converter C
 * @Author: Max Base
 * @Date: 2022/10/31
 * @Repository: https://github.com/BaseMax/BaseConverterC
*/

#include <stdio.h>
#include <stdlib.h>

// Convert number `a` from base `f` to base `t`
void base_convert(int a, int f, int t) {
    int i = 0;
    int b[100];
    while (a > 0) {
        b[i] = a % t;
        a /= t;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        if (b[j] < 10) {
            printf("%d", b[j]);
        } else {
            printf("%c", b[j] + 55);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s [number] [base] [base]\n", argv[0]);
        return 1;
    }

    int number = atoi(argv[1]);
    int base1 = atoi(argv[2]);
    int base2 = atoi(argv[3]);

    printf("Convert %d from base %d to base %d\n", number, base1, base2);
    base_convert(number, base1, base2);

    return 0;
}
