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

void oddeven(node*&head)
{
	if (head == NULL) return;
	node* odd = head;
	node* evenHead = head->next;
	node* even = head->next;
	while (odd && odd->next && even && even->next)   
	{
		odd->next = odd->next->next;			// Jumping from odd to odd
		odd = odd->next;						// updating odd

		even->next = even->next->next;			// Jumping from even to even
		even = even->next;						// updating even
	}
	odd->next = evenHead;						// joining odd list + even list
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