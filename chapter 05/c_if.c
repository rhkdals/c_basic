#include <stdio.h>

/**
 * if문(제어문) 기본 문법
 * 
 * if(조건) {
 *    실행문
 * }  else if(조건) {
 *    실행문
 * }  else if(조건) {
 *    실행문
 * }  else if(조건) {
 *    실행문 
 * }  else if(조건) {
 *    실행문
 * }
*/



int main(void) {
    int a = 20;
    int b = 0;

    // 조건을 보고
    // 참(Ture) 블록문 안에 있는 코드 실행
    // 거짓(False) 다음으로 넘어감
    if(a > 30) {
    printf("a가 30보다 커요!");
    }
    return 0;
}
