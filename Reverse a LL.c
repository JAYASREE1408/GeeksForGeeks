
class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
    struct Node *previous,*current,*next;
    previous=NULL;
    current=head;
    while(current!=NULL){
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
    }
    return previous;   
    }
    
