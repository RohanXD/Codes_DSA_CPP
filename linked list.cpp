#include <iostream>
#include <malloc.h>
using namespace std;
void create();
void display();
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
    display();
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
}
void display()
{
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
