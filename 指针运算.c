#include<stdio.h>
int main(void){
	char ac[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	char* i = ac;
	char* i1 = &ac[5];
	printf("i=%p\n",i);
	printf("i1=%p\n", i1);
	printf("i+1=%p\n",i+1 );
	printf("*(i+1)=%d\n",*(i+1) );
	printf("i1-i=%d\n", i1 - i);
	int  av[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	int* k = av;
	int* k1 = &av[5];
	printf("k=%p\n", k);
	printf("k1=%p\n", k1);
	printf("k+1=%p\n", k + 1);
	printf("*(k+1)=%d\n", *(k + 1));
	printf("k1-k=%d\n", k1 - k);
	return 0;
}


