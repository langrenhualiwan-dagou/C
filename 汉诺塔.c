#include<stdio.h>
void move(char x, char y){
	printf("%c->%c\n", x, y);
}
void Hanoi(int n,char one,char two,char three ){
	if (n == 1){
		move(one, three);
	}
	else
	{
		Hanoi(n - 1, one, three, two);
		move(one, three);
		Hanoi(n - 1, two, one, three);
	}

}


int main(){
	int num=0;
	scanf("%d", &num);
	Hanoi(num, 'A', 'B', 'C');
	return 0;
}

