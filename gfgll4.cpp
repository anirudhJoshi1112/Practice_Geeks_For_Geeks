class Solution
{
public:
    Node* deleteNode(Node *head, int x)
    {
        // Handle the case when the list is empty
        if (head == NULL)
            return head;

        // Special case: delete the head node
        if (x == 1)
        {
            Node* temp = head;
            head = head->next;
            if (head != NULL)
                head->prev = NULL;
            delete temp;
            return head;
        }

        Node* curr = head;
        int cnt = 1;

        // Traverse to the node to be deleted
        while (cnt < x && curr != NULL)
        {
            curr = curr->next;
            cnt++;
        }

        // If x is greater than the number of nodes in the list, return the original list
        if (curr == NULL)
            return head;

        // Update the pointers to remove the node
        Node* prev = curr->prev;
        Node* nextNode = curr->next;

        if (prev != NULL)
            prev->next = nextNode;

        if (nextNode != NULL)
            nextNode->prev = prev;

        // Delete the node
        delete curr;

        return head;
    }
};
