//
//  1259.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/20.
// 어떤 단어를 뒤에서부터 읽어도 똑같다면 그 단어를 팰린드롬이라고 한다. 'radar', 'sees'는 팰린드롬이다.

#include <stdio.h>
int main(){
    int num;
    while(1){
        scanf("%d",&num);
        if(!num) break;
        //한자리수는 yes
        if(num<=9) printf("yes\n");
        //두자리수는 11로 나눠지면 yes
        else if(num>9 && num<=99 && num%11==0) printf("yes\n");
        //세자리수는 첫번째 세번째 수 같으면 yes
        else if(num>99 && num<=999 && num/100 == num%10) printf("yes\n");
        //네자리수는 14 23 같으면 yes
        else if(num>999 && num<=9999 && num/1000 == num%10 && num%1000/100 == num/10%10) printf("yes\n");
        //다섯자리수는 15 24 같으면 yes
        else if(num>9999 && num<=99999 && num/10000 == num%10 && num/1000%10 == num%100/10) printf("yes\n");
        else printf("no\n");
    }
}
