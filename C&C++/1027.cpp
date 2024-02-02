//[기초-입출력] 년월일 입력 받아 형식 바꿔 출력하기(설명)
#include <stdio.h>

int main(){
	
    int h, m, s;
    scanf("%d.%d.%d", &h, &m, &s);
    printf("%02d-%02d-%04d", s, m, h);

	return 0;
}

