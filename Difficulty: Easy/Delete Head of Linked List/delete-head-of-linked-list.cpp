/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node *deleteHead(Node *head) {
        // code here
        head=head->next;
        Node* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
        }
        return head;
    }
};
