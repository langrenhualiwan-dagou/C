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
					last = last->next;//���˵Last->next��Ϊ�յĻ�˵���������һ���Ժ������ָ��ָ����һ����
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
}  //����һ������ֱ������-1��ֹ��

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
			last = last->next;//���˵Last->next��Ϊ�յĻ�˵���������һ���Ժ������ָ��ָ����һ����
		}//attach
		last->next = p;
	}
	else
	{
		Plist->head = p;
	}
} //���������ר�Ź�����һ��������

