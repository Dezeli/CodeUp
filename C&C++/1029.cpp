//[기초-데이터형] 실수 1개 입력받아 그대로 출력하기2(설명)
#include <stdio.h>

int main(){
	
    double d;
    scanf("%lf", &d);
    printf("%.11lf", d);

	return 0;
}

