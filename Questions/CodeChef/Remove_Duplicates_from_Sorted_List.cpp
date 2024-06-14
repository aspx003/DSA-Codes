/* Linked List Node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        Node* curr = head;
        
        while(curr != NULL) {
            Node* temp = curr;
            while(temp != NULL && temp->data == curr->data) {
                temp = temp->next;
            }
            
            curr->next = temp;
            curr = curr->next;
        }
        
        return head;
    }
};