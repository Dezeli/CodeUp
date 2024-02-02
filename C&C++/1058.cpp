//[기초-논리연산] 둘 다 거짓일 경우만 참 출력하기
#include <stdio.h>

int main(){
    
	int a , b;
    scanf("%d %d", &a, &b);
    if(a&&b){
        printf("0");
    }
    else if(a!=b){
        printf("0");
    }
    else {
        printf("1");
    }
    
	return 0;
}

