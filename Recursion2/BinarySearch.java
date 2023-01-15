public class BinarySearch {
    public static int search(int arr[], int si, int ei, int x) {

        if (si > ei)
            return -1;

        int mid = si + (ei - si) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x) {
            return search(arr, si, mid - 1, x);
        } else {
            return search(arr, mid + 1, ei, x);
        }
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 4, 8, 9, 10, 25, 100 };

        System.out.println(search(arr, 0, arr.length - 1, 1001));

    }
}
