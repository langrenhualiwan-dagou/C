#include<stdio.h>
#include<stdlib.h>
typedef struct _node{
	int value;
	struct _node* next;
}Node;
int main(){
	int num;
	Node* head = NULL;
	do{
		scanf("%d", &num);
		if (num != -1){
			//add the link-list.
			Node* p = (Node*)malloc(sizeof(Node));
			p->value = num;
			p->next = NULL;
			//find the last.
			Node* last = head;
			if (last)
			{
				while (last->next){
					last = last->next;//如果说Last->next不为空的话说明不是最后一个以后继续把指针指向下一个。
				}//attach
				last->next = p;
			}
			else
			{
				head = p;
			}
		}

	} while (num!=-1);
	
	return 0;
}  //输入一组数据直到输入-1截止。

#include<stdio.h>
#include<stdlib.h>
typedef struct _node{
	int value;
	struct _node* next;
}Node;
typedef struct _list{
	Node* head;
}List;
void add(List* Plist,int number);
int main(){
	int num;
	List list;
	list.head = NULL;
	do{
		scanf("%d", &num);
		if (num != -1){
	    add(&list,num);
		}

	} while (num != -1);
	Node* p=list.head;
	for (; p; p = p->next){
		printf("%d\t", p->value);
	}
	printf("\n");

	return 0;
}
//add the link-list.
void add(List* Plist, int number){
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//find the last.
	Node* last = Plist->head;
	if (last)
	{
		while (last->next){
			last = last->next;//如果说Last->next不为空的话说明不是最后一个以后继续把指针指向下一个。
		}//attach
		last->next = p;
	}
	else
	{
		Plist->head = p;
	}
} //把添加链表专门构造了一个函数。

