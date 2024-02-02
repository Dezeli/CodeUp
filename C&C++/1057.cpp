//[기초-논리연산] 참/거짓이 서로 같을 때에만 참 출력하기
#include <stdio.h>

int main(){
	
    int a, b;
    scanf("%d %d", &a, &b);
    if (a==b){
        printf("1");
    }
    else {
        printf("0");
    }

	return 0;    
}

