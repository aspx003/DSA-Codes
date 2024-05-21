package maths;

import java.util.ArrayList;

public class Factors {

	// O(n)
	static void printFactors(int n) {
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				System.out.print(i + " ");
			}
		}
		System.out.println();
	}

	// TC: O(sqrt(n))
	static void printFactors1(int n) {
		for (int i = 1; i <= Math.sqrt(n); i++) {
			if (n % i == 0) {
				if (n / i == i) {
					System.out.print(i + " ");
				} else {
					System.out.print(i + " " + n / i + " ");
				}
			}
		}
		System.out.println();
	}

	// TC: O(sqrt(n)), SC: O(sqrt(n))
	static void printFactors2(int n) {
		ArrayList<Integer> list = new ArrayList<Integer>();
		for (int i = 1; i <= Math.sqrt(n); i++) {
			if (n % i == 0) {
				if (n / i == i) {
					System.out.print(i + " ");
				} else {
					System.out.print(i + " ");
					list.add(n / i);
				}
			}
		}

		for (int i = list.size() - 1; i >= 0; i--) {
			System.out.print(list.get(i) + " ");
		}
		System.out.println();
	}

	public static void main(String[] args) {
		printFactors(20);
		printFactors1(20);
		printFactors2(20);
	}

}
