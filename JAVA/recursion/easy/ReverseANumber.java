public class ReverseANumber {

    // using outer variable
    static int ans = 0;

    static void reverse(int n) {
        if (n == 0) {
            return;
        }

        ans = ans * 10 + n % 10;

        reverse(n / 10);
    }
    
    // method 2 : Using helper function
    static int rev2(int n) {
        int digits = (int) (Math.log10(n)) + 1;
        return helper(n, digits);
    }

    private static int helper(int n, int digits) {
        if (n % 10 == n) {
            return n;
        }

        int rem = n % 10;
        return rem * (int)Math.pow(10, digits - 1) + helper(n / 10, --digits);
    }


    public static void main(String[] args) {
        // reverse(1342);
        // System.out.println(ans);

        System.out.println(rev2(1342));
    }
}
