Node* insertInMiddle(Node* head, int x)
{
    Node *newnode=(Node*)malloc(sizeof(Node));
    newnode->data=x;
    Node *temp=head;
    int count=1;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
	for(int i=0;i<count/2-1;i++){
	    temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	
	
	return head;
	
}
