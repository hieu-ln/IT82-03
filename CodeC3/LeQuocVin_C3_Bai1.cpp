//#include <iostream>
//#include <iomanip>
//#include <ctime>
//#include <stdio.h>
//using namespace std;
//#define MAX 5000
//int a[MAX], n;
//void output(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << setw(4) << a[i];
//	cout << endl;
//}
//void input(int a[], int &n)
//{
//	for (int i = 0; i < n; i++)
//		a[i] = rand() % 100;
//	output(a, n);
//}
//void copy(int a[], int b[], int n)
//{
//	for (int i = 0; i < n; i++)
//		b[i] = a[i];
//}
//void swap(int &a, int &b)
//{
//	int tamp = a;
//	a = b;
//	b = tamp;
//}
//void SelectionSort(int a[], int n)
//{
//	int min_pos;
//	for (int i = 0; i < n - 1; i++)
//	{
//		min_pos = i;
//		for (int j = i + 1; j < n; j++)
//			if (a[j] < a[min_pos])
//				min_pos = j;
//		swap(a[min_pos], a[i]);
//	}
//}
//void InsertionSort(int a[], int n)
//{
//	int x, j;
//	for (int i = 1; i < n; i++)
//	{
//		x = a[i];
//		j = i - 1;
//		while (0 <= j && x < a[i])
//		{
//			a[j + 1] = a[j];
//			j--;
//		}
//		a[j + 1] = x;
//	}
//}
////void BubbleSort(int a[], int n)
////{
////	for (int i = 0; i < n - 1; i++)
////	{
////		for (int j = n - i - 1; j > i; j--)
////			if (a[j - 1] > a[j])
////				swap(a[j], a[j - 1]);
////	}
////}
//void BubbleSort(int a[], int n)
//{
//	bool kq = false;
//	for (int i = 0; i < n - 1; i++)
//	{
//		kq = false;
//		for (int j = 0; j < n - 1; j++)
//			if (a[j - 1] > a[j]) {
//				kq = true;
//				swap(a[j], a[j + 1]);
//			}
//		if (kq == false)
//			break;
//	}
//}
//void InterchangeSort(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//		for (int j = i + 1; j < n; j++)
//			if (a[i] > a[j])
//				swap(a[i], a[j]);
//}
//int partition(int a[], int low, int high)
//{
//	int pivot = a[high];
//	int left = low;
//	int right = high - 1;
//	while (true) {
//		while (left <= right && a[left] < pivot)
//			left++;
//		while (right >= left && a[right] > pivot)
//			right++;
//		if (left >= right)
//			break;
//		swap(a[left], a[right]);
//		left++;
//		right--;
//	}
//	swap(a[left], a[high]);
//	return left;
//}
//void QuickSort(int a[], int low, int high)
//{
//	if (low < high)
//	{
//		int pi = partition(a, low, high);
//		QuickSort(a, low, pi - 1);
//		QuickSort(a, pi + 1, high);
//	}
//}
//void heapify(int a[], int n, int i)
//{
//	int largest = i;
//	int l = 2 * i + 1;
//	int r = 2 * i + 2;
//	if (l < n && a[l] > a[largest])
//		largest = l;
//	if (r < n && a[r] > a[largest])
//		largest = r;
//	if (largest != i)
//	{
//		swap(a[i], a[largest]);
//		heapify(a, n, largest);
//	}
//}
//void HeapSort(int a[], int n)
//{
//	for (int i = n / 2 - 1; i >= 0; i--)
//		heapify(a, n, i);
//	for (int i = n - 1; i >= 0; i--)
//	{
//		swap(a[0], a[i]);
//		heapify(a, i, 0);
//	}
//}
//int search(int a[], int n, int x)
//{
//	int i = 0;
//	while (i < n && a[i] != x)
//		i++;
//	if (i < n)
//		return i;
//	return -1;
//}
//int BinarySearch(int a[], int n, int x)
//{
//
//	int left = 0, right = n - 1, mid;
//	while (left <= right)
//	{
//		mid = right + (right - left) / 2;
//		if (a[mid] == x)
//			return mid;
//		if (x > a[mid])
//			left = mid + 1;
//		else
//			right = mid - 1;
//	}
//	return -1;
//}
//int binary(int a[], int l, int r, int x)
//{
//	int mid;
//	if (r >= l)
//		mid = l + (r - l) / 2;
//	if (a[mid] == x)
//		return mid;
//	if (a[mid] > x)
//		return binary(a, l, mid - 1, x);
//	if (a[mid] < x)
//		return binary(a, mid + 1, r, x);
//	return -1;
//}
//int main()
//{
//	int n, choice, kq, b[MAX], x;
//	clock_t start;
//	double duration;
//	cout << "------- BAI TAP CHUONG 1, CHUONG 3, SAP XEP DANH SACH -------" << endl;
//	cout << "1.Khoi tao danh sach." << endl;
//	cout << "2.Xuat danh sach." << endl;
//	cout << "3.Danh sach tang theo InsertionSoft." << endl;
//	cout << "4.Danh sach tang theo SelectionSoft." << endl;
//	cout << "5.Danh sach tang theo InterchangSoft." << endl;
//	cout << "6.Danh sach tang theo BubbleSort." << endl;
//	cout << "7.Danh sach tang theo QuickSort." << endl;
//	cout << "8.Danh sach tang theo HeapSort." << endl;
//	cout << "9.Tim kiem phan tu theo tuan tu." << endl;
//	cout << "10.Tim kiem phan tu theo tim kiem nhi phan." << endl;
//	cout << "11.Danh sach tang theo QuickSort." << endl;
//	do {
//		cout << "Chon muc: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			cout << "So phan tu trong danh sach: ";
//			cin >> n;
//			input(a, n);
//			break;
//		case 2:
//			cout << "Cac phan tu hien co trong danh sach:\n";
//			output(a, n);
//			break;
//		case 3:
//			copy(a, b, n);
//			start = clock();
//			InsertionSort(b, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			cout << "Sau khi sap xep:\n";
//			if (duration > 0)
//				cout << "Thoi gian InsertionSort la: " << duration * 1000000 << " milisecond" << endl;
//			output(b, n);
//			break;
//		case 4:
//			copy(a, b, n);
//			start = clock();
//			SelectionSort(b, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			cout << "Sau khi sap xep:\n";
//			if (duration >	0)
//			cout << "Thoi gian SelectionSort la: " << duration * 1000000 << " milisecond" << endl;
//			output(b, n);
//			break;
//		case 5:
//			copy(a, b, n);
//			start = clock();
//			InsertionSort(b, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			cout << "Sau khi sap xep:\n";
//			if (duration > 0)
//				cout << "Thoi gian InsertionSort la: " << duration * 1000000 << " milisecond" << endl;
//			output(b, n);
//			break;
//		case 6:
//			copy(a, b, n);
//			start = clock();
//			BubbleSort(b, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			cout << "Sau khi sap xep:\n";
//			if (duration > 0)
//				cout << "Thoi gian la: " << duration * 1000000 << " milisecond" << endl;
//			output(b, n);
//			break;
//		case 7:
//			copy(a, b, n);
//			start = clock();
//			QuickSort(b, 0, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			cout << "Sau khi sap xep:\n";
//			if (duration > 0)
//				cout << "Thoi gian QuickSort la: " << duration * 1000000 << " milisecond" << endl;
//			output(b, n);
//			break;
//		case 8:
//			copy(a, b, n);
//			start = clock();
//			HeapSort(b, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			cout << "Sau khi sap xep:\n";
//			if (duration > 0)
//				cout << "Thoi gian HeapSort la: " << duration * 1000000 << " milisecond" << endl;
//			output(b, n);
//			break;
//		case 9:
//			cout << "Nhap so ban muon tim: ";
//			cin >> x;
//			start = clock();
//			kq = search(a, n, x);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			if (kq == -1)
//				cout << "Khong tim thay!" << endl;
//			else
//				cout << "Tim thay tai vitri " << kq << endl;
//			break;
//		case 10:
//			cout << "Nhap so ban muon tim: ";
//			cin >> x;
//			start = clock();
//			kq = search(a, n, x);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			if (kq == -1)
//				cout << "Khong tim thay!" << endl;
//			else
//				cout << "Tim thay tai vitri " << kq << endl;
//			break;
//		case 11:
//			cout << "Tam biet!" << endl;
//			break;
//		default:
//			cout << "Nhap sai, nhap lai!" << endl;
//			break;
//		}
//	} while (choice != 11);
//	system("pause");
//	return 0;
//}