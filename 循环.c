
#include<stdio.h>
int main(){
	int x;
	int n = 0;
	scanf("%d", &x);
	n++;
	x = x / 10;
	while (x > 0){
		n++;
		x = x / 10;
    }
	printf("%d", n);
	return 0;
}

#include<stdio.h>
int main(){
	int x;
	int ret = 0;
	scanf("%d", &x);
	int t = x;
	while (x > 1){
		x = x / 2;
		ret++;
}
	printf("log2 of %d is %d\n", t, ret);
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a;
	printf("我已经想好了1到100之内的一个数\n");
	do{
		printf("请输入你猜的数字：");
		scanf("%d", &a);
		count++;
		if (a > number)
		{
			printf("你猜的数太大。");
		}
		else if (a < number)
		{
			printf("你猜的数太小。");
        }
		
	} while (a != number);
	printf("你猜对了，你一共猜了%d次。\n", count);
	return 0;


}             //猜数字//




#include<stdio.h>
int main(){
	printf("请输入要阶乘的数字：");
	int n;
	scanf("%d", &n);
	int i = n;
	int fact=1;
	//for (i = 1; i <= n; i++){
		//fact *= i;
     // }
	for (; n> 1; n--){
		fact *= n;
	}
	printf("%d!是%d", i, fact);
	return 0;

}


#include<stdio.h>
int main(){
	printf("请输入一个数判断是不是素数：");
	int x,i;
	//int isprime = 1;
	scanf("%d", &x);
	for (i = 2; i < x; i++){
		if (x%i == 0){
			//isprime = 0;
			break;
		}
	}
	if (i==x){
		printf("是素数。\n");              //最好不要这样做

	}
	else{
		printf("不是素数。\n");

	}
	return 0;
}


#include<stdio.h>
int main(){
	int x;
	int count = 0;
	int i;
	for (x = 1; count<50; x++){
		int isPrime = 1;
		for (i = 2; i < x; i++){
			if (x%i == 0){
				isPrime = 0;
			}
		}
		if (isPrime == 1){
			printf("%-5d\t", x);
			count++;
			if (count % 5 == 0){
				printf("\n");
			}
         }
	}
	
	return 0;

}  //求前五十个素数


#include<stdio.h>
int main(){
	int one, two, five;
	int x;
	scanf("%d", &x);
	for (one = 1; one < x * 10; one++){
		for (two = 1; two < x * 10 / 2; two++){
			for (five = 1; five < x * 10 / 5; five++){
				if (one + two * 2 + five * 5 == x * 10){
					printf("可以用%d个一角加%d个两角%d个五角得到%d元\n", one, two, five, x);
					goto out;
				}

			}
		}
	}
	out:
	return 0;

}




#include<stdio.h>
int main(){
	int i;
	int n;
	double sign = 1.0;
	double sum = 0.0;
	scanf("%d",&n);
	for (i = 1; i <= n; i++){
		sum = sum + sign / i;
		sign = -sign;
	}
	printf("f(%d) is %f", n, sum);
	return 0;
}  //前n项和



#include<stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	int mask=1;
	int t = x;
	while (x > 9){
		x /= 10;
		mask *= 10;
	}
	printf("x is %d,mask is %d\n", t, mask);
	do{
		int d = t/ mask;
		printf("%d", d);
		if(t>9){
			printf(" ");
		}
		t = t%mask;
		mask = mask / 10;
	} while (mask>0);
	printf("\n");
	return 0;
}    //正分解整数 


#include<stdio.h>
int main(){
	printf("请输入两个整数：");
	int a, b, t;
	scanf("%d %d", &a, &b);
	int c = a;
	int d = b;
	do{
		t = a%b;
		a = b;
		b = t;
	} while (b != 0);
	printf("%d和%d的最大公约数为：%d\n", c, d, a);
	return 0;

}  //最大公约数



#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, j;
     i = 1;
	while (i <= n){
		j = 1;
		while (j <= i){
			printf("%d*%d=%d", j, i, j*i);
			if (i*j <10){
				printf("   ");
			}
			else{
				printf("  ");
           	}
			j++;
			}
		printf("\n");

		i++;

		}
	return 0;
	}   //九九乘法表



#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i=1;
	int first=1;
	while (i<n){
		first *= 10;
		i++;
	}
	int x = first;
	while (x < first * 10){
		int t = x;
		int sum = 0;
		do{
			int d = t % 10;
			t /= 10;
			int p=d;
			int j = 1;
			while (j<n){
				p *= d;
				j++;
			}
			sum += p;
         } while (t>0);
		if (sum == x){
			printf("%d\n", x);
          }
		x++;
	}
	return 0;
}                       //水仙花

#include<stdio.h>
int main(){
	int n, m;
	int i;
	int count=0;
	int sum = 0;
	printf("请输入两个区间的数字：");
	scanf("%d %d", &n, &m);
	if (n == 1)
		n = 2;
      for (i = n; i <= m;i++){
		  int isPrime = 1;
		  int k;
		  for (k = 2; k < i; k++){
			  if (i%k == 0){
				  isPrime = 0;
				  break;
			  }
		  }
		  if (isPrime){
			  count++;
			  sum += i;
            }

		  }
	  printf("中间有%d个素数,它们的和为%d\n", count, sum);
	  return 0;
	} //求素数和








