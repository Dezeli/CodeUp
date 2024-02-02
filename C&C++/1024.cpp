//[기초-입출력] 단어 1개 입력받아 나누어 출력하기(설명)
#include <stdio.h>

int main(){
	
    char d[30];
	scanf("%s", d);
	for(int i=0; d[i]!='\0'; i++){
  		 printf("\'%c\'\n", d[i]);
	}

	return 0;
}

