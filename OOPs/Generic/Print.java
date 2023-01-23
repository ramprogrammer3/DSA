public class Print {

    public static<T extends Vehicle> void printArray(T arr[]){
        for(int i = 0; i<arr.length; i++){
            // System.out.print(arr[i] + " ");
            arr[i].print();
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        // System.out.println("hello world");

        // Integer arr[] = new Integer[5];

        // for(int i = 0; i<arr.length; i++){
        //     arr[i] = i + 1;
        // }

        // printArray(arr);

        // String str[] = new String[5];

        // for(int i = 0; i<str.length; i++){
        //     str[i] = "abc";
        // }
        // printArray(str);

        Vehicle v[] = new Vehicle[5];
        for(int i = 0; i<v.length; i++){
            v[i] = new Vehicle(10*i, "ram");
        }
        printArray(v);
    }
}
