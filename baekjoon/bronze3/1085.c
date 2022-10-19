//
//  1085.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// 한수는 지금 (x, y)에 있다. 직사각형은 각 변이 좌표축에 평행하고, 왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w, h)에 있다. 직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
    int x,y,w,h,min=1001;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    if (x<min) min=x;   // 0 ~ x 거리
    if (y<min) min=y;   // 0 ~ y 거리
    if (w-x<min) min=w-x;   //  w ~ x 거리
    if (h-y<min) min=h-y;   // h ~ y 거리
    
    printf("%d",min);
}
