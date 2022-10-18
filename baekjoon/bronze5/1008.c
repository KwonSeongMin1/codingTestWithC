//
//  1008.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/18.
// 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
    double A,B;
    scanf("%lf %lf",&A,&B);
    printf("%.9lf",A/B);    // 출력 형식 준수
}
