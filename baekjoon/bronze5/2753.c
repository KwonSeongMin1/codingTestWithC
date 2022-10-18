//
//  2753.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/18.
// 연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.

// 윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.

// 예를 들어, 2012년은 4의 배수이면서 100의 배수가 아니라서 윤년이다. 1900년은 100의 배수이고 400의 배수는 아니기 때문에 윤년이 아니다. 하지만, 2000년은 400의 배수이기 때문에 윤년이다.

#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    
    if(year%4==0 && year%100!=0){   // 4의 배수 충족, 100의 배수 아님 충족
        printf("1");
    }
    else if(year%400==0){   // 위의 값이 틀리더라도 400의 배수이면 윤년
        printf("1");
    }
    else{
        printf("0");    // 다 아니면 윤년이 아님
    }
}