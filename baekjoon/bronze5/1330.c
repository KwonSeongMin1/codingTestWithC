//
//  1330.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/18.
// 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b) printf(">");
    else if (a<b) printf("<");
    else printf("==");
}
