//
//  3052.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// 두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다.

//수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
    int num,check[42]={ 0 },count=0;
    for(int i=0;i<10;i++){
        scanf("%d",&num);
        check[num%42] += 1; // 나머지 숫자의 위치 배열에 카운팅
    }
    for(int i=0;i<42;i++){
        if(check[i]) count += 1;    // 나머지 개수 체크
    }
    printf("%d",count);
}
