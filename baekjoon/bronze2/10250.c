//
//  10250.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/20.
// ACM 호텔 매니저 지우는 손님이 도착하는 대로 빈 방을 배정하고 있다. 고객 설문조사에 따르면 손님들은 호텔 정문으로부터 걸어서 가장 짧은 거리에 있는 방을 선호한다고 한다. 여러분은 지우를 도와 줄 프로그램을 작성하고자 한다. 즉 설문조사 결과 대로 호텔 정문으로부터 걷는 거리가 가장 짧도록 방을 배정하는 프로그램을 작성하고자 한다.

#include <stdio.h>
int main(){
    int t,H,W,N;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&H,&W,&N);
        if(N%H==0) printf("%d%02d\n",H,N/H);
        else printf("%d%02d\n",N%H,N/H+1);
    }
}
