#include <stdio.h>

// 1~10���� ���� ���� ¦���� ¦�� ��� Ȧ���� Ȧ�� ���
int main(void) {
    for (int i=1; i<=10; i++) {
        // if(0) �� fales
        // if(1) �� true
        if(i % 2) {  // ¦���Ǻ�
            printf("Ȧ��\n");
        } else {
            printf("¦��\n");
        }
    }
    
}