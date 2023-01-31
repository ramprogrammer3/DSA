import java.util.Stack;

public class Test {
    
    public static void main(String[] args) {
        System.out.println("Hello world");

        Stack<Integer> stack = new Stack<>();
        stack.push(5);
        stack.push(10);
        stack.push(15);

        System.out.println(stack.pop()+stack.size());
    }
}
