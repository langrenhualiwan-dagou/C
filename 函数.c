#include<stdio.h>
void sum(int begin,int end){
	int i;
	int s = 0;
	for (i = begin; i <= end; i++){
		s += i;
	}
	printf("%d��%d�ĺ���%d\n", begin,end,s);

}
int main(){
	sum(1,10);
	sum(25, 30);
	sum(35, 50);
	return 0;
}

#include<stdio.h>
void cheer(int i){
	printf("cheer %d\n", i);

}

int main(){
	double f = 2.4;
	cheer(f);
return 0;
}              //C���Ե�©��


#include<stdio.h>
#include<math.h>
int isPrime(int x);
int main(){
	int x;
	printf("������һ������");
	scanf("%d",&x);
	if(isPrime(x)){
		printf("����Ϊ������\n");
}
	else{
		printf("��������������\n");
}
	return 0;
}
int isPrime(int x){
	int ret=1;
	int i;
	if(x==1||(x%2==0&&x!=2)){
		ret=0;
}
	for(i=3;i<sqrt(x);i+=2){
		if(x%i==0){
			ret=0;
			break;
}
}
	return ret;
}



#include<stdio.h>
void swap(int x, int y);
int main(){
	int a, b;
	printf("��������������");
	scanf("%d %d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	swap(a, b);
	printf("a=%d,b=%d\n", a, b);

	return 0;
}
void swap(int x, int y){
	int t = x;
	x = y;
	y = t;
} //swap�����޷�����


#include<stdio.h>
#include<stdlib.h>
int  arrayAverage(int *a, int length);
int main(void){
	
	int L;
	printf("����������ĳ���:");
	scanf("%d", &L);
	int* number = (int*)malloc(L*sizeof(int));
	int i;
	for ( i = 0; i < L; i++)
	{
		scanf("%d", &number[i]);
	}
	int c=arrayAverage(number, L);
	for (i = 0; i < L; i++){
		if (number[i]>c){
			printf("%-2d", number[i]);
		}
	}
	printf("\n");
	free(number);
	return 0;
}
int arrayAverage(int *a, int length){
	int sum = 0,i;
	for (i = 0; i < length; i++){
		sum += a[i];
	}
	int average = sum / length;
	printf("ƽ��ֵΪ:%d\n", average);
   return  average;
}




