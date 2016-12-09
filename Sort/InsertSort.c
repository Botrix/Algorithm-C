/*直接插入排序*/
void InsertSort(int a[], int n) { //对a[n]按递增进行直接插入排序
	int i, j, tmp;
	for(j = 1; j < n; j++) {
		tmp = a[j];
		i = j - 1;
		//从右向左在有序区a[0..j-1]中顺序查找a[j]的插入位置
		while(i >= 0 && a[i] > tmp) {
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = tmp;
	}
}

void InsertSort(int a[], int n) {
	int i, j, tmp;
	for(j = 1; j < n; j++) {
		tmp = a[j];
		for(i = j; i > 0 && a[i-1] > tmp; i--)
			a[i] = a[i-1];
		a[i] = tmp;
	}
}

/*折半插入排序*/
void BInsertSort(int a[], int n) {
	int i, j, low, high, mid, tmp;
	for(j = 1; j < n; j++) {
		tmp = a[j];
		low = 0; high = j - 1;
		while(low <= high) {
			mid = (low + high)/2;
			if(a[mid] > tmp)
				high = mid - 1;
			else 
				low = mid + 1;
		}
		for(i = j - 1; i >= high + 1; i--)
			a[i+1] = a[i];
		a[high+1] = tmp; 
	}
}
