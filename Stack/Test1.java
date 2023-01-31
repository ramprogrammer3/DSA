import java.util.Stack;

public class Test1 {
    
    public static void main(String[] args) {
        System.out.println("Hello world");

        Stack<Integer> stack = new Stack<>();

        while(stack.isEmpty()){
            stack.push(10);
        }
        System.out.println(stack.pop() + " " + stack.size());
    }
}
