public class StackUsingLL<T> {

    private Node<T> head;
    private int size;
    // private Node<T> tail;

    public StackUsingLL(){
        head = null;
        size = 0;
    }

    public int size(){
        return size;
    }

    public boolean isEmpty(){
        if(size == 0) return true;
        else return false;
    }

    public void push (T element){
        Node<T> newNode = new Node<T>(element);
        newNode.next = head;
        head = newNode;
        size++;
    }

    public T top(){
        if(head == null){
            System.out.println("Stack is empty");
            
        }
        return head.data;
    }

    public T pop(){
        T temp = head.data;
        head = head.next;
        size--;
        return temp;
    }
    
    public static void main(String[] args) {
        // System.out.println("Hello world ");
        StackUsingLL<Integer> stack = new StackUsingLL<>();

        int arr[] = {5,6,7,1,9};

        for(int i = 0; i<arr.length; i++){
            stack.push(arr[i]);
        }

        while(! stack.isEmpty()){
            System.out.print(stack.pop() + " ");
        }
    }
}
