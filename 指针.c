/*#include<stdio.h>
int main(void){
	int a[10];
	printf("%p\n",a);
	printf("%p\n",&a);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	return 0;           //����a�ĵ�ַ
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
	printf("��������������");
	scanf("%d %d", &a, &b);
	printf("�����������Ϊa=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("������ֵΪa=%d,b=%d\n", a, b);
	return 0;
}
void swap(int* x, int* y){
	int t;
	t = *x;
	*x = *y;
	*y = t;
} */          //������������ֵ


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
} */   //��һ�����������������Сֵ



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
		printf("���㷨�д������������룡\n");
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

