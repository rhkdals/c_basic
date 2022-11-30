#include <stdio.h>

//  - 시험 객관식, 주관식 ,빈칸채우기, ox, 서술형 (1문제)
/**
 * 포인터(Pointer)와 배열(Array) 
 *  - 
*/

int main(void) {
    int ary[3]; // 배열 선언(3칸) 크기: ?Byte
    int i;      // 변수           크기: 4Byte

// 배열 이름 →  배열이 시작번지 값을 담고 있음
    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    puts("3번째 배열 욧 입력: ");
    scanf("%d", ary + 2);

    for(i=0; i<3; i++ ) {
        printf("%d", *(ary+i));
    }
}