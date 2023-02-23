#include <stdio.h>

int min(int, int);

int main(void) {
	int i;
	int minimum;
	int num;
	int a;

	scanf("%d", &num);
	scanf("%d", &minimum);

	for (i = 1; i < num; i++) {
		scanf("%d", &a);
		minimum = min(minimum, a);
	}
	printf("%d\n", minimum);

	return 0;
}

int min(int a, int b) {
    if (a < b){
	return a;
    }else{
	return b;
    }
}
