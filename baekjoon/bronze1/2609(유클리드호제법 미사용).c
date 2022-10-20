//
//  2609.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/20.
//

#include <stdio.h>
int main(){
    //유클리드 호제법 미사용
    int a,b,min,max;
    scanf("%d %d",&a,&b);
    if(a<b){
        int tmp = a;
        a=b;
        b=tmp;
    }
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            min=i;
        }
    }
    for(int j=1;j<=a*b;j++){
        if(j%a==0 && j%b==0){
            max=j;
            break;
        }
    }
    printf("%d\n%d",min,max);
}
