public class SQRT_NewtonRaphson {

	static double newtonSQRT(int n) {
		double x = n;
		double root;
		while (true) {
			root = 0.5 * (x + (n / x));

			if (Math.abs(root - x) < 0.5) { // reduce error to get precision
				break;
			}

			x = root;
		}

		return root;
	}

	public static void main(String[] args) {
		System.out.print("Square Root: " + newtonSQRT(40));
	}
}
