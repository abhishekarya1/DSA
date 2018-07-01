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

node* createLL(int n)
{
	int x;
	node* head = NULL;
	node*tail = NULL;
	while (n)
	{
		cin >> x;
		if (x == -1) break;
		node* nn = new node(x);
		if (head == NULL)
		{
			head = nn;
			tail = nn;
		}
		else
		{
			tail->next = nn;
			tail = nn;
		}
		n--;
	}
	return head;
}

void print(const node* head)
{
	const node* tmp = head;
	while (tmp)
	{
		cout << tmp -> data << " ";
		tmp = tmp->next;
	}
}

node* mergell(node* head1, node* head2)
{
	if (head1 == NULL) return head2;
	if (head2 == NULL) return head1;
	if (head1->data < head2->data)
	{
		head1->next = mergell(head1->next, head2);
		return head1;
	}
	else {
		head2->next = mergell(head1, head2->next);
		return head2;
	}

}

int main()
{
	int n;
	cin >> n;
	//cout << endl;
	while (n)
	{
		int n1, n2;
		cin >> n1;
		//cout << endl;
		node* head1  = createLL(n1);
		//print(head1);
		//cout << endl;
		cin >> n2;
		//cout << endl;
		node* head2 = createLL(n2);
		//print(head2);
		//cout << endl;
		node* mhead = mergell(head1, head2);
		print(mhead)
		cout << endl;
		n--;
	}
}