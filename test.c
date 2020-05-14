#include <stdio.h>
#include <stdlib.h>

#define N 10
int main(){
	int a[N] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }, i, tmp;
	printf("\nthe original Array is:\n");
	for (i = 0; i < N; i++){
		printf("%4d", a[i]);
	}

	for (i = 0; i < N / 2; i++){		//交换数组元素使之逆序
		tmp = a[i];
		a[i] = a[N - i - 1];
		a[N - i - 1] = tmp;
	}
	printf("\nthe changed Array is:\n");
	for (i = 0; i < N; i++){
		printf("%4d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}