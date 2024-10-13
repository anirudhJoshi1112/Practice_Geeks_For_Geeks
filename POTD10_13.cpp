class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        if(head==NULL || head->next==NULL){
            return;
        }
        
        Node* temp=head->next; // 1,2,3,4,5   temp=2
        head->next=temp->next; // 1,2,3,4,5   head->next=3
        delete temp;
        
       deleteAlt(head->next);  //pointing to the 3rd element which is 3
    }
};
