class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node* start=head;
        Node* end=head;

        while(end!=NULL && end->next!=NULL){
            end=end->next->next;
            start=start->next;

            if(end==start){
                return true;
            }
        }
        return false;
    }
};
