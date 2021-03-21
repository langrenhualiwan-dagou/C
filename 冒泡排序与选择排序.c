//选择排序
#include<stdio.h>
void SelectSort(int* a){
	int i, j;
	for (i = 0; i < 9; i++){
		for (j = i+1; j < 10 ; j++){
			if (a[i]>a[j]){
				int t = 0;
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}

}
int main(){
	int a[10];
	int i;
	printf("请输入需要排序的数字：");
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
     }
	SelectSort(a);
	for (i = 0; i < 10; i++){
		printf("%-5d", a[i]);
	}
	printf("\n");
	return 0;
}


//冒泡排序
#include<stdio.h>
void BubbleSort(int* a){
	int i, j;
	for (i = 0; i < 9; i++){
		for (j = 0; j < 9-i; j++){
			if (a[j]>a[j+1]){
				int t = 0;
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
	}

}
int main(){
	int a[10];
	int i;
	printf("请输入需要排序的数字：");
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	BubbleSort(a);
	for (i = 0; i < 10; i++){
		printf("%-5d", a[i]);
	}
	printf("\n");
	return 0;
}