//
//  2438.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/18.
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

#include <stdio.h>
int main(){
    int count;
    
    scanf("%d",&count);
    
    for(int i=1;i<=count;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
