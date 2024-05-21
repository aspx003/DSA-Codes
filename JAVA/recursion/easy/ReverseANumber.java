public class ReverseANumber {

    static int ans = 0;

    static void reverse(int n) {
        if (n == 0) {
            return;
        }

        ans = ans * 10 + n % 10; 

        reverse(n / 10);
    }

    public static void main(String[] args) {
        reverse(1342);
        System.out.println(ans);
    }
}
