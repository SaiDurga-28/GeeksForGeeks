/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
          if (x == 1) {
            return head->next;
        }

        int count = 1;
        Node* temp = head;

        while (temp != nullptr && count < x - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr || temp->next == nullptr) {
            // x is out of bounds
            return head;
        }

        temp->next = temp->next->next;
        return head;
        
    }
};