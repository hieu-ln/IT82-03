//bai1_chuong3:xep thu tu, tim kiem
#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;

#define MAX 5000
//cau1.1
int a[MAX];
int n;

//Cau1.2: Nhap danh sach
void init(int a[], int &n)
{
	cout << "Nhap vao so luong phan tu cua ds: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 1000 + 1;
	}
	cout << "Danh sach da duoc nhap ngau nhien nhu sau: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
// 1.2: nhap danh sach 
void input(int a[], int &n)
{
	cout << "Nhap so luong phan tu cua ds: ";
	cin >> n;
	cout << "Nhap vao cac phan tu cua ds: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i <<  "] = ";
		cin >> a[i];
	}
}
//1.3 Xuat danh sach
void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "";
	}
	cout << endl;
}
void CopyArray(int a[], int b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
}
//1.4: Insertion Sort 
void InsertionSort(int a[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = a[i];
		j = i - 1;

		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
}
// ham doi cho hai so nguyen
void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
//1.5 selection sort
void SelectionSort(int a[], int n)
{
	int i, j, min_idx;
	//di chuyen ranh gioi cua mang da sap xep va chua sap xep
	for (i = 0; i < n - 1; i++)
	{
		//tim phan tu nho nhat trong mang chua sap xep
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[min_idx])
				min_idx = j;
		//doi cho phan tu nho nhat voi phan tu dau tien
		swap(a[min_idx], a[i]);
	}
}
//cau 1.6: interchangeSort
void interchangeSort(int a[], int n)
{
	for (int i = 0; i < n; i ++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
}
//cau 1.7: bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	bool haveSwap = false;
	for (i = 0; i < n; i++)
	{
		//i phan tu cuoi cung da duoc sap xeo 
		haveSwap = false;
		for (j = 0; j < n; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				haveSwap = true; // kiem tra lần nhập có swap không
			}
		}
		// neu khong co swap nao thuc hien  -> mang da duoc sap xep khong can lap them
		if (haveSwap == false)
			break;
	}
}
int partition(int a[], int low, int high)
{
	int pivot = a[high];
	int left = low;
	int right = high - 1;
	while (true)
	{
		while (left <= right && a[left] < pivot)
			left ++;
		while (right >= left && a[right] > pivot)
			right--;
		if (left >= right)
			break;
		swap(a[left], a[right]);
		left++;
		right--;
	}
	swap(a[left], a[high]);
	return left;
}

// cau 1.8: Quick sort
void quickSort(int a[], int left, int right)
{
	int x = a[(left + right) / 2];
	int i = left;
	int j = right;
	while (i < j)
	{
		while (a[i] < x)
			i++;
		while (a[j] > x)
			j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (left < j)
		quickSort(a, left, j);
	if (i < right)
		quickSort(a, i, right);
}

// cau 1.9: HeapSort
void shift(int a[], int i, int n)
{
	int j = 2 * i + 1;
	if (j >= n)
		return;
	if (j + 1 < n)
		if (a[j] < a[j + 1])
			j++;
	if (a[i] >= a[j])
		return;
	else
	{
		int x = a[i];
		a[i] = a[j];
		a[j] = x;
		shift(a, j, n);
	}
}

void heapSort(int a[], int n)
{
	int i = n / 2 - 1;
	while (i >= 0)
	{
		shift(a, i, n);
		i--;
	}
	int right = n - 1;
	while (right > 0)
	{
		swap(a[0], a[right]);
		right--;
		if(right > 0)
			shift(a, 0, right);
	}
}
// cau 1.10: tim kiem tuan tu 
int searchSequence(int a[], int n, int x)
{
	int i = 0;
	while (i < n && a[i] != x)
	{
		i++;
	}
	if (i == n)
		return -1;
	else
		return i;
}
//cau 1.11: tim kiem nhi phan 
int searchBinary(int a[], int l, int r, int x)
{
	if (r >= 1)
	{
		int mid = 1 + (r - 1) / 2; //tuong duong (l + r)/ 2(uu diem tranh tran so khi l,r lớn)

	//neu a[mid]= x, tra ve chi so va ket thuc
		if (a[mid] == x)
			return mid;
		// neu a[mid] > x, thuc hien tim kiem nua trai cua ham 
		if (a[mid] == x)
			return searchBinary(a, l, mid - 1, x);
		//neu a[mid] < x, thuc hien tim kiem nua phai cua ham
		return searchBinary(a, l, mid - 1, x);
	}
	//neu khong tim thay 
	return -1;
}
int main()
{
	int b[MAX];
	clock_t start;
	double duration;
	int choice, x, i;
	system("cls");
	cout << " -------- BAI TAP 1, CHUONG 3, XEP THU TU & TIM KIEM --------" << endl;
	cout << "0. Khoi tao danh sach ngau nhien" << endl;
	cout << "1. Nhap danh sach" << endl;
	cout << "2. Xuat danh sach" << endl;
	cout << "3. Xep thu tu danh sach bang Selection Sort" << endl;
	cout << "4. Xep thu tu danh sach bang Insertion Sort " << endl;
	cout << "5. Xep thu tu danh sach bang Bubble Sort" << endl;
	cout << "6. Xep thu tu danh sach bang Interchange Sort" << endl;
	cout << "7. Xep thu tu danh sach bang Quick Sort" << endl;
	cout << "8. Xep thu tu danh sach bang Heap Sort" << endl;
	cout << "9. Tim kem phan tu x bang TIM KIEM TUAN TU" << endl;
	cout << "10. Tim kem phan tu x bang TIM KIEM NHI PHAN" << endl;
	cout << "11. Thoat" << endl;

	do
	{
		cout << "\nVui long chon so de thuc hien: ";
		cin >> choice;

		switch (choice)
		{
		case 0: //Khởi tạo random
			init(a, n);
			break;
		case 1:
			input(a, n);
			break;

		case 2:
			cout << "Danh sach la: " << endl;
			output(a, n);
			break;

		case 3:
			CopyArray(a, b, n);
			start = clock();
			SelectionSort(b, n);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (n < 100)
			{
				cout << "DS sau khi xap thu tu voi Selection Sort la: " << endl;
				output(b, n);
			}
			if (duration > 0)
				cout << "Thoi gian Selection Sort: " << duration * 1000000 << " Microseconds" << endl;
			break;

		case 4:
			CopyArray(a, b, n);
			start = clock();
			InsertionSort(b, n);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (n < 100)
			{
				cout << "DS sau khi xap thu tu voi Intertion Sort la: " << endl;
				output(b, n);
			}
			if (duration > 0)
				cout << "Thoi gian Intertion Sort: " << duration * 1000000 << " Microseconds" << endl;
			break;

		case 5:
			CopyArray(a, b, n);
			start = clock();
			bubbleSort(b, n);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (n < 100)
			{
				cout << "DS sau khi xap thu tu voi Bubble Sort la: " << endl;
				output(b, n);
			}
			if (duration > 0)
				cout << "Thoi gian Bubble Sort: " << duration * 1000000 << " Microseconds" << endl;
			break;


		case 6:
			CopyArray(a, b, n);
			start = clock();
			interchangeSort(b, n);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (n < 100)
			{
				cout << "DS sau khi xap thu tu voi Interchange Sort la: " << endl;
				output(b, n);
			}
			if (duration > 0)
				cout << "Thoi gian Interchange Sort: " << duration * 1000000 << " Microseconds" << endl;
			break;

		case 7:
			CopyArray(a, b, n);
			start = clock();
			quickSort(b, 0, n - 1);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (n < 100)
			{
				cout << "DS sau khi xap thu tu voi Quick Sort la: " << endl;
				output(b, n);
			}
			if (duration > 0)
				cout << "Thoi gian Quick Sort: " << duration * 1000000 << " Microseconds" << endl;
			break;

		case 8:
			CopyArray(a, b, n);
			start = clock();
			heapSort(b, n);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (n < 100)
			{
				cout << "DS sau khi xap thu tu voi Heap Sortla: " << endl;
				output(b, n);
			}
			if (duration > 0)
				cout << "Thoi gian Heap Sort: " << duration * 1000000 << " Microseconds" << endl;
			break;

		case 9:
			cout << "Vui long nhap gia tri x = ";
			cin >> x;
			start = clock();
			i = searchSequence(a, n, x);
			if (i == -1)
				cout << "Khong tim thay x = " << x << " trong mang!" << endl;
			else
				cout << "Tim thay x = " << x << " tai vi tri i = " << i << endl;
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (duration > 0)
				cout << "Thoi gian tiem kiem TUAN TU la: " << duration * 1000000 << " Microseconds" << endl;
			break;

		case 10:
			cout << "Vui long nhap gia tri x = ";
			cin >> x;
			start = clock();
			i = searchBinary(b, 0, n, x);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (i == -1)
				cout << "Khong tim thay x = " << x << " trong mang!" << endl;
			else
				cout << "Tim thay x = " << x << " tai vi tri i = " << i << endl;

			if (duration > 0)
				cout << "Thoi gian tiem kiem NHI PHAN la: " << duration * 1000000 << " Microseconds" << endl;
			break;

		case 11:
			cout << "\nGoodbye!" << endl;
			break;
		default:
			break;
		}

	} while (choice != 11);
	system("pause");
	return 0;
}
