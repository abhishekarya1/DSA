#include<iostream>

using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void insertathead(node* &head, int d)
{
	node* nn = new node(d);
	nn->next= head;
	head = nn;
}

void insertatend(node* &head, int d)
{
	node* nn = new node(d);	
	node* cur = head;
	while(cur->next!=NULL)
	{
		cur = cur->next;
	}
	cur->next = nn;
	nn->next = NULL;
}

int length(node*head)
{
	int len=0;
	node* cur =head;
	while(cur)
	{
		cur = cur ->next;
		len+=1;
	}
	return len;
}

void insertatmiddle(node*&head, int pos, int d){
	
	if(head == NULL || pos==0) insertathead(head, d);
	else if(pos>length(head)) insertatend(head, d);
	else{
	node*cur = head;
	node*nn = new node(d);
	while(pos-1)
	{
		cur=cur->next;
		pos--;
	}
	nn->next= cur->next;
	cur->next = nn;
}
}

bool searchRecursive(node* &head, int x)
{
	if(head == NULL) return false;
	if(head->data == x) return true;
	else{return searchRecursive(head->next, x); }

}

bool searchIterative(node*&head, int x)
{
	node* cur = head;
	while(cur)
	{
		if(cur->data == x) return true;
		cur=cur->next;
	}

	return false;
}

void print(node*&head)
{	
	node* cur = head;
	while(cur){
		cout<<cur->data<<"-->";
		cur = cur->next;
	}
}

void deleteathead(node*&head)
{
	node* cur = head;
	head = cur->next; 
	delete cur;
}

int main()
{
	node*head = NULL;
	insertathead(head, 1);
	insertatend(head, 2);
	insertatend(head, 7);
	insertatend(head, 8);
	insertatmiddle(head, 2, 4);
	// searchRecursive(head, 7) == true? cout<<"Found":cout<<"Not Found";
	// searchIterative(head, 3) == true? cout<<"Found":cout<<"Not Found";
	deleteathead(head);
	print(head);

}