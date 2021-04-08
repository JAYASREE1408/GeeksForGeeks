struct Node * mergeResult(Node *l1,Node *l2)
{
    if(l1==NULL){
        return l2;
    }
    if(l2==NULL){
        return l1;
    }
    if(l1->data > l2->data){
        struct Node* t=l1;
        l1=l2;
        l2=t;
    }
    struct Node* res=l1;
    while(l1!=NULL && l2!=NULL){
        struct Node *t1,* temp=NULL;
        while(l1!=NULL && l1->data<=l2->data){
            temp=l1;
            l1=l1->next;
        }
        temp->next=l2;
        t1=l1;
        l1=l2;
        l2=t1;
    }
    
    Node *pre,*cur,*next;
        pre=NULL;
        cur=res;
        while(cur!=NULL){
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
            
        }
        return pre;
}
