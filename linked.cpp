#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        next = NULL;
    }
};

Node* deleteFirstNode() {
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

bool search(Node *head, int x)
{
    while(head != NULL){
        if(head->data == x){
            return true;
        }
        head = head->next;
    }
}
int search1(Node *head, int x){
    int position =1;
    while(head != NULL){
        if(head-> data ==  x){
            return position;
        }else{
            position++;
        }
        head = head->next;
    }
    return  0;
}

int main()
{
    Node *n1 = new Node(5);
    Node *n2 = new Node(6);
    Node *n3 = new Node(7);
    Node *n4 = new Node(8);
    Node *n5 = new Node(9);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    cout << head->next->next->next->next->data;
    if(search(n1,8)){
        cout << "Element found!!" << endl;
    }else{
        cout << "Element not found" << endl;
    }
    int p = search1(n1, 8);
    cout << "Element found at position " << p;
}