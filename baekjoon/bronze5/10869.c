//
//  10869.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n%d\n%d\n%d\n%d",a+b,a-b,a*b,a/b,a%b);
}
