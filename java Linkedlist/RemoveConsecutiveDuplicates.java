public class RemoveConsecutiveDuplicates {

    public static int[] removeConsecutive(int arr[]){

        for(int i = 0; i<arr.length;  i++){
            if(i + 1 < arr.length){
                if(arr[i] == arr[i+1]) {
                    arr[i] = arr[i + 1];
                    i++;
                }
            }
        }
        return arr;
    }

    public static void main(String[] args) {
        // System.out.println("Hello world");
        int arr[] = {10, 10, 20,20,20,12,15,23,34};
        System.out.println(arr.length);
        removeConsecutive(arr);
        System.out.println(arr.length);
    }
}
