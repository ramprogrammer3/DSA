public class Node<T> {
    
    public T data;
    public Node<T> next;

    public Node(T data){
        this.data = data;
        next = null;
    }

    public static void main(String[] args) {
        System.out.println("hello world ");
    }
}
