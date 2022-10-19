//
//  4153.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// 과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다. 주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하시오.

#include <stdio.h>
int main(){
    int a,b,c;
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(!a&&!b&&!c) break;   // 0 0 0 탈출
        
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            printf("right\n");
        else printf("wrong\n");
    }
}
