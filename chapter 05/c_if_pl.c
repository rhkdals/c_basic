#include <stdio.h>

// �ַ� �Ǹű�!
// - �������� ���̸� �Է¹ް�
// - ���̿� ���� �ַ��Ǹ�/����
int main(void) {
    // ����ڷκ��� ���̸� �Է�
    int age;

    printf("����: ");
    scanf("%d", &age);

    if(age >= 20) { // ����
        printf("�����Դϴ�. \n");
        printf("�ַ� ���Ű� �����մϴ�.\n");
    } else {
        printf("�̼������Դϴ�. \n");
        printf("�ַ� ���Ű� �Ұ����մϴ�.\n");
    }

    // else if(age <= 19) {
    //     printf("�̼����ھдϴ�. \n");
    //     printf("�ַ� ���Ű� �Ұ����մϴ�. \n");
    // }
     

}
