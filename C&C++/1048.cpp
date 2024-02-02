//[기초-비트시프트연산] 한 번에 2의 거듭제곱 배로 출력하기(설명)
#include <stdio.h>

int main(){
	
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a << b;
    printf("%d", c);

	return 0;
}

