class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node* temp=NULL;
        struct Node* agla=NULL;
        while(head!=NULL){
            agla=head->next;
            head->next=temp;
            temp=head;
            head=agla;
        }
        head=temp;
        return head;
    }
    
};
