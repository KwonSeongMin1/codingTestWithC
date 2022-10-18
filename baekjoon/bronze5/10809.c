//
//  10809.c
//  codingTestWithC
//
//  Created by 권성민 on 2022/10/18.
// 알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#include <string.h>

int main(){
    int alphabet[26];
    char word[101]; // 마지막 입력엔 null문자가 들어감.
    
    for(int i=0;i<26;i++){
        alphabet[i] = -1;
    }
    
    scanf("%s",word);
    for(int i=0;i<strlen(word);i++) { // strlen(word) -> 문자열 길이 (string.h)
        if(alphabet[word[i]-97] != -1){
            continue;
        }   // 이미 출현한 단어일시 continue
        alphabet[word[i]-97] = i;
        
    }
    
    for(int i=0;i<26;i++){
        printf("%d ",alphabet[i]);
    }
}
