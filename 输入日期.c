#include<stdio.h>
typedef struct date{
	int year;
	int month;
	int day;
}Nowdate;


int isleapyear(struct date t){
	int isleap = 0;
	if ((t.year % 4 == 0 && t.year % 100 != 0) || t.year % 400 == 0){
		printf("该年为闰年\n");
		isleap = 1;
	}
	else{
		printf("该年为平年\n");
	}
		return isleap;
}

void Howmanydays(struct date t){
	int sum = 0;
	int k;
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (isleapyear(t))
	{
		month[1] = 29;
	}

	if (t.month == 1){
		sum = t.day;
	}
	else if (t.month > 1 && t.month <= 12){
		for (k = 0; k < t.month - 1; k++){
			sum += month[k];
		}
		sum = sum + t.day;
	}
	else
	{
		printf("输出日期有误请重新输入\n");
	}

	printf("这是这一年的%d天\n", sum);
}
	
int main(){
	Nowdate thisdate;
	printf("请输入日期(yyyy mm dd):");
	scanf("%d %d %d",&thisdate.year,&thisdate.month,&thisdate.day );
	Howmanydays(thisdate);
    return 0;
}

