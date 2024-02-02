//[기초-삼항연산] 정수 3개 입력받아 가장 작은 수 출력하기(설명)
#include <stdio.h>

int main(){
	
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    printf("%d",(a<b ? a:b)<c ? (a<b ? a:b):c);

	return 0;
}

