
public Node moveLastToFront(Node head){


  if(head == null || head.next == null){
  
    return head;
  
  }

  Node last = head;
  
  Node secLast = null;
  
  while(last.next!=null){
  
    secLast = last;
    
    last = last.next;
    
    
  }
  
  
  last.next = head;
  head = last;
  secLast.next = null;
  
  
  
  return head;



}
