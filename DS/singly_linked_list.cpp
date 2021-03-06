#include <iostream>
using namespace std;
/* author: Nitesh Thali
C++ implementation for singly linked list#
*/
struct node
{
	int data;
	struct node * next;
}*head=NULL;

node* getNode(int data)
{
	node *tmp = new node();
	tmp->data= data;
	tmp->next =NULL;
	return tmp;
}
void insert_back(int data)
{
	node *tmp = head;
	if(head == NULL)
		head = getNode(data);
	else
	{
		while(tmp->next !=NULL)
			tmp = tmp->next;
		tmp->next = getNode(data);
	}
}
void insert_front(int data)
{
	if (head == NULL)
		head = getNode(data);
	else
	{
		node *tmp = getNode(data);
		tmp->next = head;
		head = tmp;
	}
}
void delete_list(int data)
{
	// check on empty list before deletion is missing.
	node *tmp = head, *prev;
	if (data == head->data)
	{
		head = head->next;
	}
	else
	{
		while(tmp != NULL && tmp->data != data )
		{	prev = tmp;
			tmp = tmp->next;
		}
		if(tmp == NULL)
			cout <<"Node to be deleted not found in the linked list" << endl;
		else
			prev->next = tmp->next;
	}
	free (tmp);
}
void display()
{
	node *tmp = head;
	cout << "Linked List";
	while(tmp)
	{
		cout <<"->" << tmp->data;
		tmp = tmp->next;
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	/*
	insert_front(10);
	insert_front(20);
	insert_front(30);
	insert_front(40);
	insert_front(50);
	insert_front(60);	
	display();
	delete_list(10);
	display();
	delete_list(60);
	display();
	delete_list(30);
	display();
	*/
	/*
	insert_back(10);
	insert_back(20);
	insert_back(30);
	insert_back(40);
	insert_back(50);
	insert_back(60);	
	display();
	delete_list(10);
	display();
	delete_list(60);
	display();
	delete_list(30);
	display();
	*/
	insert_front(10);
	insert_front(20);
	insert_back(30);
	insert_back(40);
	insert_front(50);
	insert_back(60);	
	display();
	delete_list(10);
	display();
	delete_list(60);
	display();
	delete_list(30);
	display();
	delete_list(100);
	return 0;
}