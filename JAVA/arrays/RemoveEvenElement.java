package arrays;
// Very Easy
public class RemoveEvenElement {
	
	static int[] removeEvenElement(int[] arr) {
		int oddCount = 0;
		for(int i = 0; i < arr.length; i++) {
			if(arr[i] % 2 != 0) {
				oddCount++;
			}
		}
		
		int[] ans = new int[oddCount];
		int j = 0;
		for(int i = 0; i < arr.length; i++) {
			if(arr[i] % 2 != 0) {
				ans[j++] = arr[i];
			}
		}
		
		return ans;
	}

	public static void main(String[] args) {
		int[] array = {3, 2, 4, 7, 10, 6, 5};
		ArrayBasics.printArray(removeEvenElement(array));
	}

}
