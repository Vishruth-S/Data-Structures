#include <iostream>

using namespace std;

struct node
{
    int data;
    node *link;
};

node *head = NULL;

void insertHead(int data)
{
    node *ptr = new node;
    ptr->data = data;
    ptr->link = head;
    head = ptr;
}

void print(node *p)
{
    if (p == NULL)
        return;
    cout << " " << p->data;
    print(p->link);
}

void reversePrint(node *p)
{
    if (p == NULL)
        return;
    reversePrint(p->link);
    cout << " " << p->data;
}

int main()
{
    insertHead(20);
    insertHead(40);
    insertHead(10);
    insertHead(30);
    insertHead(50);
    //LISt = {50,30,10,40,20}
    print(head);
    cout << '\n';
    reversePrint(head);
    return 0;
}