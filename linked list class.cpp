// C++ program for the above approach
#include <iostream>
using namespace std;
class NODE
{
public:
    int data;
    NODE *next;
    // Default constructor
    NODE()
    {
        data = 0;
        next = NULL;
    }
    // Parameterised Constructor
    NODE(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Linkedlist
{
    NODE *head, *first = 0, *temp = 0, *new2;
    int count = 0;
    int choice = 1;
    ;

public:
    Linkedlist() { head = NULL; } // Default constructor
    void create(int n);
    void f_insert();
    void m_insert();
    void l_insert();
    void display();
};
// MAIN
int main()
{
    int n;
    Linkedlist list;
    cout << "Enter Data Item:";
    cin >> n;
    list.create(n);
    list.f_insert();
    list.display();
    list.m_insert();
    list.display();
    list.l_insert();
    list.display();
    cout << endl;
    return 0;
}
void Linkedlist::create(int n)
{
    NODE *newNode = new NODE(n);
    while (choice)
    {
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        NODE *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        fflush(stdin);
        cout << "Do you want to continue?\nYes(Type 1):\nNo(Type 0):\n";
        cin >> choice;
    }
    temp->next = newNode;
}
void Linkedlist::m_insert()
{
    NODE *new1 = new NODE();
    int k;
    cout << "Enter Position Value:";
    cin >> k;
    while (temp->data != k)
    {
        temp = temp->next;
    }
    cout << "Enter Middle Value to Insert:";
    cin >> new1->data;
    new1->next = temp->next;
    temp->next = new1;
}
void Linkedlist::f_insert()
{
    NODE *new1 = new NODE();
    cout << "Enter First Value To insert:";
    cin >> new1->data;
    new1->next = NULL;
    new1->next = new2;
    head = new1;
}
void Linkedlist::l_insert()
{
    NODE *new1 = new NODE();
    cout << "Enter Last Value To insert:";
    cin >> new1->data;
    new1->next = NULL;
    while (new1->next != NULL)
    {
        new1 = head->next;
    }
    new1->next = new1;
}

void Linkedlist::display()
{
    int count = 0;
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
