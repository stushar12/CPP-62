Node* pairWiseSwap(struct Node* head) 
{
     Node *start=NULL;
 Node *currentNode=head;
 Node *last=NULL;
 Node *actualNode=NULL;

 while(currentNode!=NULL)
 {
 Node *prev=NULL;
  Node *nextNode=NULL;
     actualNode=currentNode;
     int count=1;
     int k=2;
     while(currentNode !=NULL && count<=k)
     {
         nextNode=currentNode->next;
         currentNode->next=prev;
         prev=currentNode;
         currentNode=nextNode;
         count++;
     }
     if(start==NULL)
     {
         start=prev;
     }
     if(last != NULL)
     {
         last->next=prev;
     }
     last=actualNode;
 }
 return start;
}