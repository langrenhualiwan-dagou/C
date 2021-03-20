//逆序分解输出
#include<stdio.h>
int main(void){
	int x;
	scanf("%d", &x);
	while (x!=0){
		int d = x % 10;
		printf("%d", d);
		if (x > 9){
			printf(" ");
		}
		x /= 10;
	}
	printf("\n");
	return 0;
}


//正序分解输出
#include<stdio.h>
int main(void){
	int x;
	scanf("%d", &x);
	int mask = 1;
	int t = x;
	while (x>9){
		x /= 10;
		mask *= 10;
	}
	printf("x=%d,mask=%d\n", t, mask);
	while (mask!=0){
		int d = t / mask;
		printf("%d", d);
		printf(" ");
	
		t %= mask;
		mask /= 10;

	}
	printf("\n");
	return 0;

}   





