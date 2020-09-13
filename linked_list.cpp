#include <iostream>

using namespace std;

struct node
{
    int data;
    node *link;
};

node *top = NULL;
node *ptr = NULL;

void insertHead()
{
    ptr = new node;
    if (ptr == NULL)
        cout << "\nOverflow";
    else
    {
        cout << "\nEnter data";
        cin >> ptr->data;
        ptr->link = top;
        top = ptr;
    }
}

void insert()
{
    int pos;
    cout << "\nEnter position";
    cin >> pos;
    if (pos == 1)
    {
        insertHead();
        return;
    }
    node *temp1 = new node;
    node *temp2 = new node;
    temp1->link = NULL;
    cout << "\nEnter data";
    cin >> temp1->data;
    temp2 = top;
    for (int i = 0; i < pos - 2; i++)
    {
        temp2 = temp2->link;
    }
    temp1->link = temp2->link;
    temp2->link = temp1;
}

void deleteTop()
{
    if (top == NULL)
    {
        cout << "\nUnderflow: LIST EMPTY ";
        return;
    }
    node *temp = top;
    cout << "\nDeleted" << temp->data;
    top = temp->link;
    delete temp;
}

void del()
{
    int pos;
    cout << "\nEnter position ";
    cin >> pos;
    if (pos == 1)
    {
        deleteTop();
        return;
    }
    if (top == NULL)
    {
        cout << "\nUnderflow: LIST EMPTY ";
        return;
    }
    node *temp1 = top;
    node *temp2;
    for (int i = 0; i < pos - 2; i++)
    {
        temp1 = temp1->link;
    }
    temp2 = temp1->link;
    cout << "\nDeleted: " << temp2->data;
    temp1->link = temp2->link;
    delete temp2;
}
void print()
{
    ptr = top;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
}
int main()
{
    int ch;
    do
    {
        cout << "\nSelect option" << '\n';
        cout << "1. Insert at top";
        cout << "\n2. Insert at position";
        cout << "\n3. Delete top";
        cout << "\n4. Delete at position";
        cout << "\n5. Print\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insertHead();
            break;
        case 2:
            insert();
            break;
        case 3:
            deleteTop();
            break;
        case 4:
            del();
            break;
        case 5:
            print();
            break;
        }
    } while (ch < 6);
}
