#include <iostream>
#include <malloc.h>
using namespace std;
void create();
void display();
void f_insert();
void m_insert();
void l_insert();
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *head, *first = 0, *temp = 0, *new1;
int count = 0;
int choice = 1;

int main()
{
    create();
    f_insert();
    m_insert();
    l_insert();
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
void f_insert()
{
    new1 = (NODE *)malloc(sizeof(NODE));
    cout << "Enter First Value To insert:";
    cin >> new1->data;
    new1->next = NULL;
    new1->next = first;
    first = new1;
    display();
}
void m_insert()
{
    int k;
    new1 = (NODE *)malloc(sizeof(NODE));
    cout << "Enter Position Value:";
    cin >> k;
    temp = first;
    while (temp->data != k)
    {
        temp = temp->next;
    }
    cout << "Enter Middle Value to Insert:";
    cin >> new1->data;
    new1->next = temp->next;
    temp->next = new1;
    display();
}
void l_insert()
{
    new1 = (NODE *)malloc(sizeof(NODE));
    cout << "Enter Last Value To insert:";
    cin >> new1->data;
    new1->next = NULL;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = new1;
    display();
}
