//
//  10818.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
    int count,num,min=1000000,max=-1000000;
    scanf("%d",&count);
    
    for(int i=0;i<count;i++){
        scanf("%d",&num);
        if(num<min) min=num;
        if(num>max) max=num;
    }
    
    printf("%d %d",min,max);
}
