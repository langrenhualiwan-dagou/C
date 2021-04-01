#include<stdio.h>
#include<math.h>
void TwoRoots(int a,int b,int c){
	double x1, x2;
	x1 = sqrt(-b + (b*b - 4 * a*c)) / 2 * a;
	x2 = sqrt(-b - (b*b - 4 * a*c)) / 2 * a;
	printf("%f %f\n", x1, x2);
}
void OneRoot(int a,int b,int c){
	double x;
	x = -b / 2 * a;
	printf("%f\n", x);
}
void NoRoot(){
	printf("There is no root\n");
}
int main(){
	int a, b, c;
	printf("Please enter A B C:");
	scanf("%d %d %d",&a, &b, &c);
	if ((pow(b,2)-4*a*c)>0){
		TwoRoots(a, b, c);
	}
	else if ((pow(b, 2) - 4 * a*c)==0){
		OneRoot(a, b, c);
	}
	else{
		NoRoot();
	}
	return 0;
}