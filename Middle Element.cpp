int getMiddle(Node *head)
{
   Node *slow=head,*fast=head;
   while(fast!=NULL && fast->next!=NULL){
       fast=fast->next->next;
       slow=slow->next;
   }
   return slow->data;
}


int getMiddle(Node *head)
{
   int count=0;
   Node *temp,*ans;
   temp=head;
   while(temp!=NULL){
       temp=temp->next;
       count++;
   }
   int i;
   for(i=0;i<count/2;i++){
       head=head->next;
   }
   return head->data;
}
