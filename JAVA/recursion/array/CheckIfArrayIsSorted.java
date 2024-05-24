public class CheckIfArrayIsSorted {

    static boolean sorted(int[] arr, int index) {
        if(index == arr.length - 1) {
            return true;
        }

        return arr[index] < arr[index + 1] && sorted(arr, index + 1);
    }

    public static void main(String[] args) {
        int[] arr = {1, 0, 3, 4, 5};
        System.out.println(sorted(arr, 0));
    }
}
