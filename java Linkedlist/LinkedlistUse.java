
public class LinkedlistUse {

    public static void CreateLinkedList(Node<Integer> head, int data){


        // Node<Integer> n2 = new Node<Integer>(20);
        // Node<Integer> n3 = new Node<Integer>(30);
        // Node<Integer> n4 = new Node<Integer>(40);
        
        Node<Integer> temp = head;
        Node<Integer> n1 = new Node<Integer>(data);
        temp.next = n1;
        head = n1;

        // return n1;
    }

    public static void printLinkedList(Node<Integer>head){

        Node<Integer> temp = head;

        while(temp.next != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }
    

    public static void main(String[] args) {
        
        Node<Integer> n1 = new Node<Integer>(10);
        Node<Integer> head = n1;
        CreateLinkedList(head, 20);
        CreateLinkedList(head, 30);
        CreateLinkedList(head, 40);

        // int head = n1;

        // System.out.println(head);

        System.out.println(n1.data);
        // System.out.println(n1.next);
        // System.out.println(n1);

        printLinkedList(head);
    }
}
