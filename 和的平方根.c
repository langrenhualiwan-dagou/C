#include<stdio.h>
#include<math.h>
double fun(int n);
int main(){
	double k;
	int n;
	scanf("%d", &n);
	k = fun(n);
	printf("%lf\n", k);
    return 0;
}
double fun(int n){
	int sum = 0;
	for (int i = 21; i < n; i++){
		if (i % 3 == 0 && i% 7 == 0){
			sum = sum + i;
		}
	}
		return sqrt(sum); 

}