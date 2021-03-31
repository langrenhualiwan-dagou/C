#include<stdio.h>
int main(){
	int a[2][3] = { 1, 2, 3, 4, 5, 6 };
	int b[3][2];
	int i, j;
	printf("arry A:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
			if ((j+1)%3==0){
				printf("\n");
			}
		}
	}
	printf("\n");
	printf("arry B:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			printf("%5d", b[i][j]);
			if ((j+1)%2==0){
				printf("\n");
			}
		}
	}
	printf("\n");
	return 0;

}



#include<stdio.h>
int main(){
	int a[3][4] = { { 1, 2, 3, 4 }, { 9, 8, 7, 6 }, {10,-1,-4,-12} };
	int row = 0, colum = 0,max;
	int i, j;
	max = a[0][0];
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			if (a[i][j]>max){
				max = a[i][j];
				row = i;
				colum = j;
			}
		}
	}
	printf("max=%d\nrow=%d\ncolum=%d\n", max,row,colum);
	return 0;
}





