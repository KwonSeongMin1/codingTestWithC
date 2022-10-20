//
//  15829.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/20.
// APC에 온 것을 환영한다. 만약 여러분이 학교에서 자료구조를 수강했다면 해시 함수에 대해 배웠을 것이다. 해시 함수란 임의의 길이의 입력을 받아서 고정된 길이의 출력을 내보내는 함수로 정의한다. 해시 함수는 무궁무진한 응용 분야를 갖는데, 대표적으로 자료의 저장과 탐색에 쓰인다.

#include <stdio.h>
int main(){
    int len,num=0,sqrt=1;
    scanf("%d",&len);
    char word[len];
    scanf("%s",word);
    
    for(int i=0;i<len;i++){
    
        num += (word[i]-96) * sqrt;
        sqrt *= 31;
    }
    printf("%d",num);
}
