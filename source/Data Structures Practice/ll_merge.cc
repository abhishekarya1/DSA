#include<iostream>

using namespace std;

class node {
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
	node* tail = NULL;
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

node* ll_merge(node* a, node* b){
    if (a == NULL) return b;
    if (b == NULL) return a;

    if (a->data < b->data){
        a->next = ll_merge(a->next, b);
        return a;
    }
    else {
        b->next = ll_merge(a, b->next);
        return b;
    }
return c;
}

void print(node*&head)
{
	node*cur = head;
	while (cur)
	{
		cout << cur->data << " ";
		cur = cur->next;
	}
}

int main()
{
	int n;
	cin >> n;
	node* head = NULL;
	createLL(head, n);
	ll_merge(head);
	print(head);
}