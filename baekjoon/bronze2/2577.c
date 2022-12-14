//
//  2577.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// 세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
//
//예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

#include <stdio.h>
int main(){
    int a,b,c,d,count[10] = { 0 };
    scanf("%d %d %d",&a,&b,&c);
    d = a * b * c;
    while(d){
        count[d%10] += 1;
        d/=10;
    }   // 가장 오른쪽에 있는 수 부터 차근차근 알아가기
    for(int i=0;i<10;i++){
        printf("%d\n",count[i]);
    }
}
