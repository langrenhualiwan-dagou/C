/*#include<stdio.h>
int main(){
	int x;
	int count = 0;
	double sum = 0;
	int number[100];
	int i;
	scanf("%d", &x);
	while (x != -1){
		number[count] = x;
		sum += x;
		count++;
		scanf("%d", &x);
}
	double average = sum / count;
	if (count > 0){
		printf("%f\n", average);
}
	for (i = 0; i < count; i++){
		if(number[i]>average){
			printf("%-3d", number[i]);

		}
	}
return 0;
} */   //求一组数的平均值并求出大于平均值的数




/*#include<stdio.h>
int main(){

	int x;
	int count;
	int a[10];
	for (count = 0; count < 10;count++){
		a[count] = 0;
	}
	scanf("%d", &x);
	while (x != -1){
		if (x >= 0 && x <= 9){
			a[x]++;
          }
		scanf("%d", &x);
     }
	for (count = 0; count < 10; count++){
		printf("%d is %d\n", count, a[count]);
	}

return 0;
}*/


/*#include<stdio.h>
int main(){
	int a[13] = {[1]=2,3,4,[5]=5};
	int i;
	for (i = 0; i < 13; i++){
		printf("%-2d", a[i]);
	}
	return 0;
}*/

/*#include<stdio.h>
int search(int key, int a[], int length);
int main(){
	int x;
	int loc;
	printf("请输入一个数字：");
	int a[13] = { 1, 2, 4, 5, 7, 8, 9, 12, 13, 14, 15, 17, 18, };
	scanf("%d", &x);
	loc = search(x, a, sizeof(a) / sizeof(a[0]));
	if (loc !=-1){
		printf("%d在第%d个位置上\n", x, loc);
	}
	else
	{
		printf("不存在\n");
	}
return 0;
}
int search(int key, int a[], int length){
	int i;
	int ret = -1;
	for (i = 0; i < length; i++){
		if (key == a[i]){
			ret = i+1;
			break;
		}
	}
	return ret;
}*/

/*#include<stdio.h>
int isPrime(int x,int knownPrime[],int numberOFunknownPrimes );
int main(){
	int prime[100]={2};
	int count=1;
	int i=3;
	while (count<100){
    if(isPrime(i,prime,count)){
		prime[count++]=i;
	}
	i++;
	}
	for(i=0;i<100;i++){
		printf("%d",prime[i]);
		if((i+1)%5){
			printf("\t");
	}
		else{	printf("\n");}
	}
	return 0;
	}

 int isPrime(int x,int knowPrime[],int numberOFunkownPrimes ){
	 int ret=1;
	 int i;
	 for(i=0;i<numberOFunkownPrimes;i++){
		 if(x%knowPrime[i]==0){
			 ret = 0;
		    break;
}
}
	 return ret;
}*/    //输出100个素数。




/*#include<stdio.h>
int main(){
	int x;
	int i;
	int prime[30];
	for (i = 0; i < 30; i++){
		prime[i] = 1;
	}
	for (x = 2; x < 30; x++){
		if (prime[x]){
			for (i = 2; i*x < 30; i++){
				prime[i*x] = 0;
			}
		}
	}
	for (i = 2; i < 30; i++){
		if (prime[i]){
			printf("%d\t", i);
		}
	}
	printf("\n");
return 0;

}*/  //构造素数表















