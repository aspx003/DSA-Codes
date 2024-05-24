public class CountZeroes {

    // can be used as a helper function
    static int count(int n, int c) {
        if (n == 0) {
            return c;
        }

        if (n % 10 == 0) {
            return count(n / 10, c + 1);
        }

        return count(n / 10, c);
    }

    public static void main(String[] args) {
        System.out.println(count(304070, 0));
    }
}
