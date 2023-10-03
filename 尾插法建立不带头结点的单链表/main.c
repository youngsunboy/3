#include <stdio.h>
#include <stdlib.h>

//定义一个类型的新名
typedef char datatype;
//单链表结构体
typedef struct node {
	datatype data;
	struct node* next;
}linklist;

linklist* CreatListR() {
	//不带头结点的尾插法，返回单链表的头指针
	linklist* head, * p,* r;
	datatype ch;
	head = NULL;r = NULL;//建立空表，尾指针置空
	while ((ch = getchar()) != '\n') {
		p = (linklist*)malloc(sizeof(linklist));//生成新结点
		p->data = ch;//对结点的数据域进行赋值
		if (!head) {
			head = p;//新结点插入到空表
		}
		else {
			r->next = p;
		}
		r = p;
	}
	if (r) {
		r->next = NULL;//对于非空表，将终端结点的指针域置空
	}
	return head;
}
//主函数
int main() {
	linklist* head = (linklist*)malloc(sizeof(linklist));
	linklist* p = (linklist*)malloc(sizeof(linklist));
	head = CreatListR();
	p = head;
	while (p != NULL) {
		printf("%c", p->data);
		p = p->next;
	}
	system("pause");
	return 0;
}