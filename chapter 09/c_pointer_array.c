#include <stdio.h>

//  - ���� ������, �ְ��� ,��ĭä���, ox, ������ (1����)
/**
 * ������(Pointer)�� �迭(Array) 
 *  - 
*/

int main(void) {
    int ary[3]; // �迭 ����(3ĭ) ũ��: ?Byte
    int i;      // ����           ũ��: 4Byte

// �迭 �̸� ��  �迭�� ���۹��� ���� ��� ����
    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    puts("3��° �迭 �� �Է�: ");
    scanf("%d", ary + 2);

    for(i=0; i<3; i++ ) {
        printf("%d", *(ary+i));
    }
}