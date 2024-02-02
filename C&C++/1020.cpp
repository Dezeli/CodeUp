//[기초-입출력] 주민번호 입력받아 형태 바꿔 출력하기
#include <stdio.h>

int main(){
	
    int a, b;
    scanf("%d-%d",&a,&b);
    printf("%0.6d%0.6d",a,b);
    
    return 0;
}
