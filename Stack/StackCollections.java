import java.util.Stack;

public class StackCollections {
    
    public static void main(String[] args) {
        System.out.println("Hello world ");
        Stack<Integer> s = new Stack<>();
        s.push(10);
        System.out.println(s.peek());
        System.out.println(s.size());
        s.pop();
        System.out.println(s.size());
        System.out.println(s.isEmpty());
        
        int arr[] = {1,2,3,4,5};

        for(int elem : arr){
            s.push(elem);
        }

        while(!s.isEmpty()){
            System.out.print(s.peek() + " ");
            s.pop();
        }
    }
}
