//[기초-논리연산] 하나라도 참이면 참 출력하기(설명)
#include <stdio.h>

int main(){
	
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 1 || b == 1){
        printf("1");
    }
    else {
        printf("0");
    }

	return 0;
}

