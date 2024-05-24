#include <iostream>
#include <malloc.h>
using namespace std;
void create();
void display();
void f_del();
void m_del();
void l_del();
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *head, *first = 0, *temp = 0;
int count = 0;
int choice = 1;

int main()
{
    create();
    f_del();
    m_del();
    l_del();
    return 0;
}
void create()
{
    while (choice)
    {
        head = (NODE *)malloc(sizeof(NODE));
        cout << "Enter the data item:";
        cin >> head->data;
        if (first != 0)
        {
            temp->next = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }
        fflush(stdin);
        cout << "Do you want to continue?\nYes(Type 1):\nNo(Type 0):\n";
        cin >> choice;
    }
    temp->next = 0;
    display();
    cout<<"\nList Created"<<endl;
}
void display()
{
    count = 0;
    temp = first;
    cout << "\nStatus of the linked list is\n";
    while (temp != 0)
    {
        cout << temp->data << "=>";
        count++;
        temp = temp->next;
    }
    cout << "NULL\n";
    cout << "No. of nodes in the list =" << count << endl;
}
void f_del()
{
	temp=first;
	first=first->next;
	free(temp);
	cout<<"\nFirst Element Deleted"<<endl;
    display();
}
void m_del()
{
    NODE *del;
	int loc,i;    
    cout<<"\n Enter the Value to delete \n";  
    cin>>loc;  
    head=first;
	del=head;  
    while(del->data!=loc) 
    {  
        temp = del;       
        del = del->next;  
              
        if(del == NULL)  
        {  
            cout<<"\nCan't delete";  
            return;  
        }  
    }  
    temp ->next = del ->next;  
    free(del);  
    cout<<"\nDeleted Node";  
	display();
}
void l_del()
{  
	NODE *del;
	head=first; 
  	temp = head;   
    while(temp->next != NULL)  
    {  
        del = temp;  
        temp = temp ->next;  
    }  
    del->next = NULL;  
    free(temp);  
    cout<<"\nLast Node from the last ...\n";
	display(); 
}
