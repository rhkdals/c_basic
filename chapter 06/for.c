#include <stdio.h>
/**
 *  for��: �ʱ��, ���ǽ�, ���������� ����
 *   - �ݺ�Ƚ���� ���� ����(i)�� �ݺ���
 *     �ȿ��� ���� ���� (������ ��Ģ)
*/
int main(void) {
    int a = 1;

    // �ݺ�Ƚ���� ������
    // �� �ݺ�Ƚ�� count : 1 ����
    // i = 0, 1, 2 �� 3�� �ݺ�
    for (int i=0; i<3; i++) {
        a = a * 2;
        // i = i + 1; x
    }
    printf("a : %d\n", a);
}