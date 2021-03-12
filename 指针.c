/*#include<stdio.h>
int main(void){
	int a[10];
	printf("%p\n",a);
	printf("%p\n",&a);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	return 0;           //数组a的地址
}*/


/*#include<stdio.h>
void f(int* p);
int main(void){
	int i = 9;
	printf("&i=%p\n", &i);
	f(&i);
    return 0;
}
void f(int* p){
	printf("p=%p\n", p);
	printf("*p=%d\n", *p);
}*/


/*#include<stdio.h>
void swap(int* x, int* y);
int main(void){
	int a, b;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	printf("输入的两个数为a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后值为a=%d,b=%d\n", a, b);
	return 0;
}
void swap(int* x, int* y){
	int t;
	t = *x;
	*x = *y;
	*y = t;
} */          //交换两个数的值


/*#include<stdio.h>
void minmax(int a[], int length,int* max,int* min);
int main(){
	int max, min;
	int a[10];
	int i;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++){
		scanf("%d", &a[i]);
	}
    minmax(a, sizeof(a) / sizeof(a[0]), &max, &min);
	printf("max=%d,min=%d\n", max, min);

	return 0;
}
void minmax(int a[], int length, int* max, int* min){
	*max = *min = a[0];
	int i;
	for (i = 2; i < length; i++){
		if (a[i]>*max){
			*max = a[i];
		}
		if (a[i] < *min){
			*min = a[i];
		}
	}
} */   //求一个数组里面的最大和最小值



/*#include<stdio.h>
int divide(int a,int b,int* result);
int main(void){
	int a, b;
	int c;
	scanf("%d %d", &a, &b);
	if (divide(a, b, &c)){
		printf("%d/%d=%d", a, b, c);
	}
	else{
		printf("该算法有错误请重新输入！\n");
	}
  return 0;
}
int divide(int a, int b, int* result){
	int ret = 1;
	if (b == 0){
		ret = 0;
	}
	else{
		*result = a / b;

	}
	return ret;
}*/

