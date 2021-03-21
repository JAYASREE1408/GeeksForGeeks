class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *node)
    {
       Node *del=node->next;
       node->data=del->data;
       node->next=del->next;
       free(del);
    }

};
