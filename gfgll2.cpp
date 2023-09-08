class Solution
{
    public:
    int count(struct node* head, int search_for){
        int count=0;
        struct node* temp=head;
        while(temp!=NULL){
            if(temp->data==search_for)
                count++;
            temp=temp->next;
        }
        return count;
    }
};
