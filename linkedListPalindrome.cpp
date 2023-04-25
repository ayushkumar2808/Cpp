#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void insertList(struct Node **head_new, int value)
{
    struct Node *newnode = new Node();
    struct Node *last = *head_new;
    newnode->data = value;
    newnode->next = NULL;
    if ((*head_new) == NULL)
    {
        *head_new = newnode;
        return;
    }
    else
    {
        while ((last->next) != NULL)
        {
            last = last->next;
        }
        last->next = newnode;
    }
}

void printList(struct Node *head_ref)
{
    Node *temp = head_ref;
    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
}

void insertBeginning(struct Node **head_new, int value)
{
    struct Node *newnode = new Node();
    newnode->data = value;
    newnode->next = NULL;

    if ((*head_new) == NULL)
    {
        *head_new = newnode;
        return;
    }
    else
    {
        newnode->next = *head_new;
        *head_new = newnode;
    }
}
bool isPalindrome(struct Node *head_new)
{
    stack<int> s;
    struct Node *temp = head_new;
    while (temp != NULL)
    {
        s.push(temp->data);
        temp = temp->next;
    }
    temp = head_new;
    while (temp != NULL)
    {
        int result = s.top();
        s.pop();
        if (result != temp->data)
        {
            return 0;
        }
        temp = temp->next;
    }
    return 1;
}

int main()
{
    struct Node *head = NULL;

    while (1)
    {
        int element;
        cin >> element;
        if (element < 0)
        {
            break;
        }
        else
        {
            insertList(&head, element);
        }
    }
    if (isPalindrome(head))
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}