#include <stdio.h>
#include <stdlib.h>

//����һ�����͵�����
typedef char datatype;
//������ṹ��
typedef struct node {
	datatype data;
	struct node* next;
}linklist;

linklist* CreatListR() {
	//����ͷ����β�巨�����ص������ͷָ��
	linklist* head, * p,* r;
	datatype ch;
	head = NULL;r = NULL;//�����ձ�βָ���ÿ�
	while ((ch = getchar()) != '\n') {
		p = (linklist*)malloc(sizeof(linklist));//�����½��
		p->data = ch;//�Խ�����������и�ֵ
		if (!head) {
			head = p;//�½����뵽�ձ�
		}
		else {
			r->next = p;
		}
		r = p;
	}
	if (r) {
		r->next = NULL;//���ڷǿձ����ն˽���ָ�����ÿ�
	}
	return head;
}
//������
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