// Using tail pointer
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void append(int data)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        size++;
    }

    void printList()
    {
        Node *cur = head;
        while (cur != NULL)
        {
            cout << cur->data << endl;
            cur = cur->next;
        }
    }
};

int main()
{
    LinkedList list;
    int n;
    cin >> n;
    while (n--)
    {
        int data;
        cin >> data;
        list.append(data);
    }
    list.printList();
    return 0;
}