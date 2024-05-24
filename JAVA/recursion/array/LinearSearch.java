public class LinearSearch {

    static int search(int[] arr, int key, int index) {
        if(arr[index] == key) {
            return index;
        }

        if(index == arr.length - 1) {
            return -1;
        }

        return search(arr, key, index + 1);
    }

    public static void main(String[] args) {
        int[] arr = {1, 0, 3, 4, 5};
        System.out.println(search(arr, 5, 0));
    }
}