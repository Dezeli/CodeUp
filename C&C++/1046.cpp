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

