public class StackUse {
    public static void main(String[] args) {

        StackUsingArray stack = new StackUsingArray(2);

        System.out.println("size of stack is " + stack.size());

        int arr[] = { 1, 2, 3, 4, 5 };

        for (int i = 0; i < arr.length; i++) {
            stack.push(arr[i]);
        }

        System.out.println("Printing element of stack ");

        while (!stack.isEmpty()) {
            System.out.print(stack.top() + " ");
            stack.pop();
        }
        System.out.println();

        stack.push(10);
        System.out.println(stack.top());
        System.out.println("size of stack is " + stack.size());

        stack.pop();
        if (stack.isEmpty()) {
            System.out.println("Stack is empty ");
        } else {
            System.out.println("Stack is not empty");
        }
        System.out.println("size of stack is " + stack.size());
    }
}
