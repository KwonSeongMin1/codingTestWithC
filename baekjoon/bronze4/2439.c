//
//  2439.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/18.
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

//하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");    // 공백 반복
        }
        for(int k=1;k<=i;k++){
            printf("*");    // 별 반복
        }
        printf("\n");
    }
}
