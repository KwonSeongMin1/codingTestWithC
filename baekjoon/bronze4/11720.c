//
//  11720.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/18.
// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);
    char num[n];
    scanf("%s",num);
    for(int i=0;i<n;i++){
        sum += num[i]-48;
    }
    printf("%d",sum);
}
