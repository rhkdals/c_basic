#include <stdio.h>

int main(void) {
    int num1 = 20, num2 = 10, num3 = 50;
    int temp; 
    // 변수 3개에 각각 다른 값을 담음
    // - 문제 : num1과 num2에 값을 바꿔(체인지)

    // 변수에 값을 서로 교환하는 방법
    
    
    temp = num1;
    num1 = num2;
    num2 = temp;

    
    // 정렬 : num1 > num2 > num3 
    // 조건1 : num1 < num2 → 값 교환 : num1 > num2
    // 조건2 : num1 < num3 → 값 교환 : num1 > num2, num3
    // 조건3 : num2 < num3 → 값 교환 : num2 > num3
    // → num1 > num2 > num3

    if (num1 < num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    } if (num1 < num3)
    {
        temp = num1;
        num1 = num3;
        num3 = temp;
    } if (num2 < num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    
    printf("%d > %d > %d", num1, num2, num3);


}