/**
 * StackUsingArray
 */
public class StackUsingArray {

    private int data[];
    private int topIndex;

    public StackUsingArray() {
        data = new int[10];
        topIndex = -1;
    }
    public StackUsingArray(int size) {
        data = new int[size];
        topIndex = -1;
    }

    public boolean isEmpty() {

        // if(topIndex == -1){
        // return true;
        // }
        // else{

        // return false;
        // }

        return topIndex == -1;

    }

    public int size() {
        return topIndex + 1;
    }

    public void push(int element) {

        if (topIndex == data.length - 1) {
            doubleCapacity();
            // System.out.println("Stack is full ");
            // return;
        }
        topIndex++;
        data[topIndex] = element;
    }
    private void doubleCapacity(){
        int temp[] = data;
        data = new int[ 2 * temp.length];

        for(int i = 0; i <temp.length; i++){
            data[i] = temp[i];
        }
    }

    public int top() {
        if (topIndex == -1) {
            return -1;
        }
        return data[topIndex];
    }

    public int pop() {
        if (topIndex == -1) {
            System.out.println("STack is empty ");
            return -1;
        }
        int ans = data[topIndex];
        topIndex--;
        return ans;
    }

    public static void main(String[] args) {

    }
}