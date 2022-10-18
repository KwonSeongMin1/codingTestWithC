//
//  2741.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/18.
// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
}
