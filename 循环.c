
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
	printf("���Ѿ������1��100֮�ڵ�һ����\n");
	do{
		printf("��������µ����֣�");
		scanf("%d", &a);
		count++;
		if (a > number)
		{
			printf("��µ���̫��");
		}
		else if (a < number)
		{
			printf("��µ���̫С��");
        }
		
	} while (a != number);
	printf("��¶��ˣ���һ������%d�Ρ�\n", count);
	return 0;


}             //������//




#include<stdio.h>
int main(){
	printf("������Ҫ�׳˵����֣�");
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
	printf("%d!��%d", i, fact);
	return 0;

}


#include<stdio.h>
int main(){
	printf("������һ�����ж��ǲ���������");
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
		printf("��������\n");              //��ò�Ҫ������

	}
	else{
		printf("����������\n");

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

}  //��ǰ��ʮ������


#include<stdio.h>
int main(){
	int one, two, five;
	int x;
	scanf("%d", &x);
	for (one = 1; one < x * 10; one++){
		for (two = 1; two < x * 10 / 2; two++){
			for (five = 1; five < x * 10 / 5; five++){
				if (one + two * 2 + five * 5 == x * 10){
					printf("������%d��һ�Ǽ�%d������%d����ǵõ�%dԪ\n", one, two, five, x);
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
}  //ǰn���



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
}    //���ֽ����� 


#include<stdio.h>
int main(){
	printf("����������������");
	int a, b, t;
	scanf("%d %d", &a, &b);
	int c = a;
	int d = b;
	do{
		t = a%b;
		a = b;
		b = t;
	} while (b != 0);
	printf("%d��%d�����Լ��Ϊ��%d\n", c, d, a);
	return 0;

}  //���Լ��



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
	}   //�žų˷���



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
}                       //ˮ�ɻ�

#include<stdio.h>
int main(){
	int n, m;
	int i;
	int count=0;
	int sum = 0;
	printf("������������������֣�");
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
	  printf("�м���%d������,���ǵĺ�Ϊ%d\n", count, sum);
	  return 0;
	} //��������








