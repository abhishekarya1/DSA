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

node* createLL()
{
	int x;
	node* head = NULL;
	node*tail = NULL;
	while (true)
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
	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1;
	if(head1->data < head2->data)
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
	node* head1  = createLL();
	print(head1);
	node* head2 = createLL();
	print(head2);
	mergell(head1, head2);
}