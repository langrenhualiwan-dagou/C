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
	printf("ʱ�����%dСʱ%d�֡�\n", ih, im);
}


#include<stdio.h>
int main(){
	int bill=0, price=0;
	printf("�������");
	scanf("%d", &price);
	printf("������Ʊ�棺");
	scanf("%d", &bill);
	if (bill >= price){
		printf("Ӧ������%d��\n", bill-price);}
	else{
		printf("���Ǯ������\n");
	}
	return 0;
}


#include<stdio.h>
int main(){
	int a, b;
	int max = 0;
	printf("����������������");
	scanf("%d %d", &a, &b);
	if (a > b){
		max = a;
}
	else{ max = b; }
	printf("�ϴ���Ǹ�����%d��\n", max);
	return 0;
}

#include<stdio.h>
int main(){
	int a, b, c;
	int max = 0;
	printf("��������������");
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
	printf("������Ϊ%d��", max);
	return 0;
}




