public class LCM {
	
	static int lcm(int a, int b) {
		return a * b / GCD.gcd(a, b);
	}
	
	public static void main(String[] args) {
		System.out.println(lcm(10, 5));
	}

}
