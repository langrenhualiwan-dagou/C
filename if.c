#include<stdio.h>
void main(){
	int hour1, minute1;
	int hour2, minute2;
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	if (im < 0)
	{
		im = 60 + im;
		ih--;

	}
	printf("时间差是%d小时%d分。\n", ih, im);
}


#include<stdio.h>
int main(){
	int bill=0, price=0;
	printf("请输入金额：");
	scanf("%d", &price);
	printf("请输入票面：");
	scanf("%d", &bill);
	if (bill >= price){
		printf("应该找您%d。\n", bill-price);}
	else{
		printf("你的钱不够。\n");
	}
	return 0;
}


#include<stdio.h>
int main(){
	int a, b;
	int max = 0;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	if (a > b){
		max = a;
}
	else{ max = b; }
	printf("较大的那个数是%d。\n", max);
	return 0;
}

#include<stdio.h>
int main(){
	int a, b, c;
	int max = 0;
	printf("请输入三个数：");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b){
		if (a > c){
			max = a;
		}
		else{
			max = c;
		}
	}
	else{
		if (b > c){
			max = b;
		}
		else{
			max = c;
		}
	}
	printf("最大的数为%d。", max);
	return 0;
}




