import java.util.ArrayList;

public class ArrayListDemo {

    public static void main(String[] args) {
        // System.out.println("Hello world");

        ArrayList<Integer> arr = new ArrayList<>(20);

        // for(int i = 0; i<arr.size(); i++){
        //     System.out.print(arr.get(i) + " ");
        // }

        // System.out.println();

        arr.add(10);
        arr.add(12);
        arr.add(35);
        arr.add(20);

        System.out.println(arr.size());
        System.out.println(arr.get(2));
        for(int i = 0; i<arr.size(); i++){
            System.out.print(arr.get(i) + " ");
        }

    }
}