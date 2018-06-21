#include<iostream>

using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d)
	{
		data =d;
		next = NULL;
	}
};

node* createLL()
{
	int x;
	node* head = NULL;
	node* tail = NULL;
	while(true)
		{
			cin >> x;
			if(x == -1) break;
	node* nn = new node(x);
	if(head == NULL) 
	{
		head =nn;
		tail=nn;
	}
	else{
		tail->next=nn;
		tail=nn;
	}

}
return head;
}

void print(node* head)
{
	node*cur = head;
	while(cur)
	{
		cout<<cur->data<<"-->";
		cur = cur->next;
	}
}
int main()
{
	node* head = createLL();	
	print(head);
}