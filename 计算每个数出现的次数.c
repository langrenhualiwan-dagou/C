#include<stdio.h>
void fun(int m, int a[]){
	for (int i = 0; i < 10; i++){
		a[i] = 0;
	}
	while (m>0){
		int d = m % 10;
		a[d]++;
		m /= 10;
	}

}
int main(){
	int number;
	int a[10];
	scanf("%d", &number);
	fun(number, a);
	for (int i = 0; i < 10; i++){
		printf("%-2d", a[i]);
	}
	printf("\n");
	return 0;
}//����һ��������0-9���ֵĴ�������0-9��˳�����