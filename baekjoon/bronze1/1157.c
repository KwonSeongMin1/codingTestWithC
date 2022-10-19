//
//  1157.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/19.
// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

#include <stdio.h>
#include <string.h>
int main(){
    char word[1000001];
    int alphabet[26]={ 0 },max=0,flag=0;
    char res;
    scanf("%s",word);
    
    unsigned long len = strlen(word);
    
    for(int i=0;i<len;i++){
        if(word[i] > 95) alphabet[word[i]-'a'] += 1;    // 소문자일 때
        else alphabet[word[i]-'A'] += 1;    // 대문자일 때
    }
    
    for(int i=0;i<26;i++){
        if(alphabet[i]>max){
            max = alphabet[i];
            res = 65+i;
            flag = 0;   // 중복 검사
        }
        else if(alphabet[i] == max && alphabet[i]) flag = 1;    // 중복 검사
    }
    if(flag) printf("?");   // 중복일 때
    else printf("%c",res);
}
