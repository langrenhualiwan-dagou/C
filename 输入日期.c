#include<stdio.h>
typedef struct date{
	int year;
	int month;
	int day;
}Nowdate;


int isleapyear(struct date t){
	int isleap = 0;
	if ((t.year % 4 == 0 && t.year % 100 != 0) || t.year % 400 == 0){
		printf("����Ϊ����\n");
		isleap = 1;
	}
	else{
		printf("����Ϊƽ��\n");
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
		printf("���������������������\n");
	}

	printf("������һ���%d��\n", sum);
}
	
int main(){
	Nowdate thisdate;
	printf("����������(yyyy mm dd):");
	scanf("%d %d %d",&thisdate.year,&thisdate.month,&thisdate.day );
	Howmanydays(thisdate);
    return 0;
}

