// Without using tail pointer
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

public:
    LinkedList()
    {
        head = NULL;
    }

    void append(int data)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            Node *tmp = head;
            while (tmp->next != NULL)
            {
                tmp = tmp->next;
            }
            tmp->next = n;
        }
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