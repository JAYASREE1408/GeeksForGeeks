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


or 


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reve(struct ListNode* head);
bool isPalindrome(struct ListNode* head){
  if(head==NULL || head->next==NULL)
    return true;
  struct ListNode *slow,*fast;
  slow=fast=head;
  while(fast->next && fast->next->next){
    fast=fast->next->next;
    slow=slow->next;
  }
  slow->next=reve(slow->next);
  slow=slow->next;
  while(slow!=NULL){
    if(head->val!=slow->val)
      return false;
    head=head->next;
    slow=slow->next;
  }
  return true;
}
struct ListNode* reve(struct ListNode* head){
  struct ListNode *cur,*prev,*next;
  cur=head;
  prev=NULL;
  while(cur!=NULL){
    
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }
  return prev;
  }

