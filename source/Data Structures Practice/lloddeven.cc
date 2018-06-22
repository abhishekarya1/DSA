#include<iostream>

using namespace std;

class  node {

public:
	int data;
	node* next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void createLL(node*&head, int n)
{
	int x;
	node*tail = NULL;
	while (n)
	{
		cin >> x;
		node* nn = new node(x);
		if (head == NULL)
		{
			head = nn;
			tail = nn;
		}
		else {
			tail->next = nn;
			tail = nn;
		}
		n--;
	}
}

void shifttohead(node*&head, node*&cur, node*&prev)
{
	prev->next = cur->next;
	cur->next = head;
	head = cur;
}

void oddeven(node*&head)
{
	node* cur = head;
	node* str = NULL;
	node* prev = NULL;
	if (head == NULL) return;
	while (cur)
	{
		if(head->data %2 != 0){ cur=cur->next; continue; }
		if (cur->data % 2 != 0) {shifttohead(head, cur, prev);
		cur = prev->next; continue;}
		prev = cur;
		cur= cur->next;

	}
}

void print(node*&head)
{
	node* tmp = head;
	while (tmp)
	{
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}

int main()
{
	int n;
	node* head = NULL;
	cin >> n;
	createLL(head, n);
	oddeven(head);
	print(head);

}