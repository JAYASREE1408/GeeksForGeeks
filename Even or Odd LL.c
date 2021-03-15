int isLengthEvenOrOdd(struct Node* head)
{
     int count=1;
     while(head!=NULL){
         count++;
         head=head->next;
     }
     if(count%2==0){
         return 1;
     }
     else
        return 0;
     
}
