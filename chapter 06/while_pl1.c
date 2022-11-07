#include <stdio.h>

int main(void) {
    // 1~100±îÁö Á¾ÇÕ µ¡¼À(for)
    for(int i=1; i<=100; i++) {
        total += i;
    }

    // 1~100±îÁö Á¾ÇÕ µ¡¼À(while)
    int num = 1;
    while(num <= 100) {
        total += num;
        num++;

    }
    printf("ÃÑÇÕ: %d\n", total);
}