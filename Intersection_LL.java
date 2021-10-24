A common technique to avoid checking if new head is null then newNode = head = tail else tail.next = newNode : 

Create a dummy node Dummy. Create a tail which points to that dummy node. Now only do tail.next = newNode.. At the end return Dummy.next

public static Node findIntersection(Node head1, Node head2)
    {
        
        
        Node headBefore = new Node(0);
        Node tail = headBefore;
        Node temp1 = head1;
        
        Node temp2 = head2;
        
        while(temp1!=null && temp2!=null){
            
            if(temp1.data == temp2.data){
                
                tail.next = new Node(temp1.data);
                tail = tail.next;
                temp1 = temp1.next;
                temp2 = temp2.next;
                
            }
            
           else if(temp1!=null && temp2!=null){
               
               
               if(temp1.data < temp2.data){
                   temp1 = temp1.next;
               }
               
               else{
                   temp2 = temp2.next;
               }
               
           }
        }
        
        return headBefore.next;
        
        
        // code here.
    }
