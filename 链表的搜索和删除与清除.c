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
void print(List* plist);
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
print(&list);
scanf("%d", &num);
Node* p;
int isfound = 0;
for (p = list.head; p; p->next){
if (p->value == num){
printf("�ҵ���\n");
isfound = 1;
break;
}
}   
if (!isfound){
printf("û�ҵ�\n");
}
Node* q;
for (q = NULL; p = list.head; q = p, p->next){
	if (p->value == num){
		if (q){
			q->next = p->next;
		}
		else{ list.head = p->next; }
		free(p);
		break;    //ɾ�������е�ĳһ������
	}
}
for (p = list.head; p;p=q){
	q = p->next;
	free(p);  //��������
}
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
	}//���������ר�Ź�����һ��������
void print( List* plist){
Node* p;
for (p=plist->head; p; p = p->next){
printf("%d\t", p->value);
}
printf("\n");
}