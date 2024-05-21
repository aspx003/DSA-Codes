public class Prime_FIndPrimeSieve {
    public static void countPrimes(int n, boolean[] sieve) {
        for (int i = 2; i * i <= n; i++) {
            if (!sieve[i]) {
                for (int j = i * 2; j <= n; j += i) {
                    sieve[j] = true;
                }
            }
        }

        for (int i = 2; i <= n; i++) {
            if (!sieve[i]) {
                System.out.print(i + " ");
            }
        }
    }

    public static void main(String[] args) {
        int n = 40;
        boolean[] sieve = new boolean[n + 1];

        countPrimes(n, sieve);
    }
}
