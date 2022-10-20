//
//  2798.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/20.
// 카지노에서 제일 인기 있는 게임 블랙잭의 규칙은 상당히 쉽다. 카드의 합이 21을 넘지 않는 한도 내에서, 카드의 합을 최대한 크게 만드는 게임이다. 블랙잭은 카지노마다 다양한 규정이 있다.

#include <stdio.h>
int main(){
    int n,m,sum,max=0;
    scanf("%d %d",&n,&m);
    int card[n];
    for(int i=0;i<n;i++){
        scanf("%d",&card[i]);
    }
    
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){ // 경우의수 반복하기. 브루트포스 알고리즘
                sum = card[i] + card[j] + card[k];
                if(sum==m){
                    printf("%d",m);
                    return 0;
                }   // 아예 값이 같으면 출력 후 종료
                if(sum<m && sum>max){
                    max=sum;
                }   // 넘지 않는 값을 요구하므로 max값으로 설정
            }
        }
    }
    printf("%d",max);
}
