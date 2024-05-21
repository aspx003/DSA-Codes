public class SQRT_BinarySearch {

    public static double findSquareRoot(int num, int precision) {
        double root = 0.0;

        int s = 0;
        int e = num;
        while(s < e) {
            int m = s + (e - s) / 2;

            if(m * m == num) return m;

            if(m*m > num) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }
        
        root = e;
        
        double incr = 0.1;
        for (int i = 0; i < precision; i++) {
            while(root * root <= num) {
                root += incr;
            }
            
            root -= incr;
            incr /= 10;
        } 

        return root;
    }

    public static void main(String[] args) {
        System.out.println(findSquareRoot(40, 3));
        // findSquareRoot(40, 3);
    }
}
