#include <iostream>
using namespace std;
int data,choice=1;	
class Node {
public:
    int data;
    Node* next;
    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Linkedlist {
    Node* head;
  
public:
    // Default constructor
    Linkedlist() { head = NULL; }
    void insertNode();
    void display();
    void f_insert();
    void m_insert();
    void l_insert();
    void deleteNode();
};
int main()
{
    Linkedlist list;
    while(choice)
	{
		list.insertNode();
		cout<<"Want to continue:\n1.Yes(Type-1)\n2.No(Type-0):"<<endl;
	    cin>>choice;
	}
	cout << "Elements of the list are: ";
    list.display();
	list.f_insert(); 
	cout << "Elements of the list are: ";
    list.display();
    list.m_insert();
    cout << "Elements of the list are: ";
    list.display();
	list.l_insert();
	cout << "Elements of the list are: ";
    list.display();
    list.deleteNode();
    cout << "Elements of the list are: ";
    list.display();
    return 0; 
}
void Linkedlist::insertNode()
{		
		cout<<"Enter Data Item:";
	    cin>>data;
		Node* newNode = new Node(data);
	    if (head == NULL) 
	    {
	        head = newNode;
	        return;
	    }
	    Node* temp = head;
	    while (temp->next != NULL) 
		{
	        temp = temp->next;
	    }
	    temp->next = newNode;
}
void Linkedlist::display()
{
    int count=0;
	Node* temp = head;
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
    while (temp != NULL) 
	{
        cout << temp->data << "=>";
        temp = temp->next;
        count++;
    }
    cout<<"NULL"<<endl;
    cout<<"Number Of Elements in the List:";
    cout<<count<<endl;
}
void Linkedlist::f_insert()
{
	cout << "Enter First Value To insert:";
	cin >> data;
	Node *new1 = new Node(data);
    new1->next = NULL;
    new1->next = head;    
	head = new1;
}
void Linkedlist::m_insert()
{
    int k;
    cout << "Enter Position Value:";
    cin >> k;
    Node* temp=head;
	while (temp->data != k)
    {
        temp = temp->next;
    }
    cout << "Enter Middle Value to Insert:";
    cin >> data;
	Node* new1 = new Node(data);
    new1->next = temp->next;
    temp->next = new1;
}
void Linkedlist::l_insert()
{
    cout << "Enter Last Value To insert:";
    cin >> data;
	Node *new1 = new Node(data);
    Node* temp=head;
	while (temp->next != NULL)
    {
        temp= temp->next;
    }
    temp->next = new1;
    new1->next = NULL;
}
void Linkedlist::deleteNode()
{
    int delnode;
    cout<<"Enter Position to Delete:";
    cin>>delnode;
	Node *temp1 = head, *temp2 = NULL;
    int count = 0;
    if (head == NULL) {
        cout << "List empty." << endl;
        return;
    }
    while (temp1 != NULL) {
        temp1 = temp1->next;
        count++;
    }
	if (count < delnode) {
        cout << "Index out of range"<< endl;
        return;
    }
    temp1 = head;
    if (delnode == 1) 
	{
        head = head->next;
        delete temp1;
        return;
    }
    while (delnode-- > 1) 
	{
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    delete temp1;
}
