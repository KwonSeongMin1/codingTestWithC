//
//  10871.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
    int n,x;
    int num;
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(x>num) printf("%d ",num);
    }
}
