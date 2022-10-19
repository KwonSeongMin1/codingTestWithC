//
//  2920.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// 다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

//1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.
//
//연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
    int n;
    int ascend=1,descend=1;
    for(int i=1;i<=8;i++){
        scanf("%d",&n);
        
        if(i==n && ascend) ascend=1;    // 순서대로 잘 이어가고 있는지 체크
        else ascend=0;
        
        if(i==9-n && descend) descend=1;    // 역순으로 잘 이어가고 있는지 체크
        else descend=0;
    }
    
    if (ascend) printf("ascending");
    else if (descend) printf("descending");
    else printf("mixed");
}
