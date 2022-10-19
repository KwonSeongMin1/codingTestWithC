//
//  1152.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

#include <stdio.h>
#include <string.h>

int main(){
    int count=1;
    char word[1000002];
    fgets(word,1000002,stdin);  // fgets는 마지막 Null terminator + \n 이 부착된다...
    
    if(word[0]==' ' && strlen(word)==2){
        count -= 1;
        printf("%d",count);
        return 0;
    }
    
    for(int i=1;i<strlen(word)-2;i++){
        if(word[i]==' ') count += 1;
    }
    printf("%d",count);
}
