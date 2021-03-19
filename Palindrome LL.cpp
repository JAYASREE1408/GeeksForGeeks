bool isPalindrome(Node *head)
{
    Node *last,*temp1,*temp=head;
    int count=0,i,flag=0;
    while(temp!=NULL)
     {
     count++;
     temp=temp->next;
     }
   Node *previous;
   temp=last;
   temp1=head;
   for(i=0;i<count/2;i++)
   {
        previous=head;
   while(previous->next!=temp)
     previous=previous->next;
   if(temp->data!=temp1->data)
   {
    flag++;
    break;
   }
   temp1=temp1->next;
   temp=previous;
   }
    if(flag==0)
      return 1;
      
return 0;


}

