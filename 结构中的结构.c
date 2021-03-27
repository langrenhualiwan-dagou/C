#include<stdio.h>
struct time{
	int hours;
	int minutes;
	int seconds;
};
struct time updatetime(struct time now);
int main(){
	struct time testTimes[5] = { { 3, 45, 46 }, { 14, 34, 59 }, { 13, 45, 34 }, { 12, 59, 59 }, {23,59,59} };
	for (int i = 0; i < 5; i++){
		printf("The time is %.2i:%.2i:%.2i", testTimes[i].hours, testTimes[i].minutes, testTimes[i].seconds);
		testTimes[i] = updatetime(testTimes[i]);
		printf("....one secend later the time is %.2i:%.2i:%.2i\n", testTimes[i].hours, testTimes[i].minutes, testTimes[i].seconds);
	}
	return 0;
}
struct time updatetime(struct time now){
	++now.seconds;
	if (now.seconds == 60){
		now.seconds = 0;
		++now.minutes;
		if (now.minutes == 60){
			now.seconds = 0;
			now.minutes = 0;
			++now.hours;
			if (now.hours == 24){
				now.hours = 0;
				now.minutes = 0;
				now.seconds = 0;
			}
		}
	}
	return now;
}   //利用结构体可以直接赋给另一个结构体的优点构造一个结构体类型的函数，该程序是计算下一秒时时间是多少。


#include<stdio.h>
struct point{
	int x;
	int y;
};
struct recetangle{
	struct point p1;
	struct point p2;

};
void printfRcetangle(struct recetangle r){
	printf("<%d %d> to <%d %d>\n", r.p1.x, r.p1.y, r.p2.x, r.p2.y);
}
int main(){
	struct recetangle rcet[] = { { { 1, 2 }, { 3, 4 } }, 
	                             { { 5, 6 }, { 7,8 } } };
	for (int i = 0; i < 2; i++){
		printfRcetangle(rcet[i]);
	}
	return 0;
}   //可以在一个结构体中再用另一个结构体的变量作为里面的数据成员，构成结构中的结构。


