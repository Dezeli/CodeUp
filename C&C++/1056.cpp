//[기초-논리연산] 참/거짓이 서로 다를 때에만 참 출력하기(설명)
#include <stdio.h>

int main(){
	
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == b){
        printf("0");
    }
    else {
        printf("1");
    }

	return 0;
}

