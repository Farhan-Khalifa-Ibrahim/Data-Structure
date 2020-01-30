#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node(int number);
    int getdata();
    Node *next;

private:
    int data;
};

Node::Node(int number)
{
    data = number;
    next = NULL;
}
int Node::getdata()
{
    return data;
}
void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->getdata() << " ";
        n = n->next;
    }
}

int main()
{
    Node *first;
    Node *second;
    Node *third;

    first = new Node(1);
    second = new Node(2);
    third = new Node(3);

    first->next = second;
    second->next = third;
    printList(first);
}