#include <stdio.h>

// 1~10�� ���� ���� ���
int main(void) {
    int sum = 0;  // ���� ����

    // �ۼ��غ�����.(for�� Ȱ��)
    1~10���� ���� 1�� ���� i ��ü!
    for�� Ȱ���ؼ� 1~10���� ���� �����ϴ� �ڵ� �ۼ�

    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
        // sum += i;
    }
    printf("���� ����: %d\n", sum);
}
