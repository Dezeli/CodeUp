//[기초-산술연산] 정수 3개 입력받아 합과 평균 출력하기
#include <stdio.h>

int main(){
	
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    float avg;
    avg = h + m + s;
    int sum;
    sum = h + m + s;
    printf("%d\n", sum);
    printf("%0.1f", avg / 3);

	return 0;
}

