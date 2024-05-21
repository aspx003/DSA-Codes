void bubbleSort(int a[], int n) {
	int i, j, temp, swapped = 1;
	for (i = 0; i < n - 1 && swapped; i++)
	{
		swapped = 0;
		for(j = 0; j < n - 1 - i; j++)
		{
			if(a[j] > a[j+1])
			{
				swapped = 1;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

void bubbleSortRecursive(int a[], int n) {
	int i, temp, swapped = 0;
	if(n == 1) {
		return;
	}

	for(int i = 0; i < n - 1; i++) {
		if(a[i] > a[i+1]) {
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
			swapped = 1;
		}
	}

	if(swapped == 1) {
		bubbleSortRecursive(a, n - 1);
	}
}