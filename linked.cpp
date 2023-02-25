#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
Node *reverse(Node *head){
    Node *previous = NULL;
    Node *ahead=  NULL;
    Node *current = head;
    while(current != NULL ){
        ahead= current->next;
        current->next = previous;
        previous=current;
        current= ahead;
    }
    return previous;
}

Node* deleteThirdNode(Node* head) {
    if (head == NULL || head->next == NULL || head->next->next == NULL) {
    }
    Node* second = head->next;
    Node* third = head->next->next;
    second->next = third->next;
    delete third;
    return head;
}


 Node *midnode(Node *head){
    Node *fast= head;
    Node *slow=  head ;

    while (fast !=NULL&& fast->next!=NULL && fast->next->next!=NULL){
        fast= fast->next->next;
        slow= slow->next;

    }
    return slow;
    cout << "The mid element is "<< slow << endl;
 }

void displayList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *deleteNode(Node *head, int i){
    if(i<0){
        return head;
    }
    if(i==1 && head){
        Node *newHead = head->next;
        head->next=NULL;
        delete head;
        return newHead;

    }
    Node *curr =head;
    int count = 1;
    while(count<i && curr != NULL){
        curr = curr->next;
        count++;

    }
    if(curr && curr->next){
        Node *temp = curr->next;
        curr->next =  curr->next->next;
        temp->next = NULL;
        delete temp;
        return head;

    }
    return head;
}

int main() {
    Node* n1 = new Node(5);
    Node* n2 = new Node(6);
    Node* n3 = new Node(8);
    Node* n4 = new Node(10);
    Node* n5 = new Node(15);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    cout << "Before deleting third node: ";
    displayList(n1);

    n1 = deleteThirdNode(n1);

    cout << "After deleting third node: ";
    displayList(n1);


    Node n = new Node(1);
    midnode(Node *head);

  

    return 0;
}