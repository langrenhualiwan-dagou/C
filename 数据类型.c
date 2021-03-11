#include<stdio.h>
int main(){
	char c = 255;
	int i = 255;
	printf("c=%d i=%d\n", c, i);
	return 0;
}

#include<stdio.h>
int main(){
	int a = 0;
	int b = 1;
	while (++a > 0)
		;
	printf("int数据类型的最大值为：%d\n", a - 1);
	while ((a = a / 10) != 0){
		b++;
	}
	printf("int数据类型最大的数的数位是：%d\n", b);
	return 0;
}

#include<stdio.h>
int main(){
	printf("%.3f\n",-0.0049);
	printf("%.30f\n",-0.0049);
	printf("%.3f\n",-0.00049);
    
	return 0;

}
#include<stdio.h>
int main(){
	int a = 2;
	double b = 4.0;
	printf("%f\n", a + b);
	return 0;
}




