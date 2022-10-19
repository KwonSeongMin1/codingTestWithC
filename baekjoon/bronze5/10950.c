//
//  10950.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
}
