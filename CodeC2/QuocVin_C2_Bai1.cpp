//#include <iostream>
//#include <iomanip>
//#include <conio.h>
//using namespace std;
//#define MAX 100
//int a[MAX], n;
//void output(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << setw(4) << a[i];
//	cout << endl;
//}
//void input(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//		a[i] = rand() % 10;
//	output(a, n);
//}
//int search(int a[], int n, int x)
//{
//	int i = 0;
//	while (i < n && a[i] != x)
//	{
//		i++;
//		if (i == n)
//			return -1;
//	}
//	return i;
//}
//int insert_last(int a[], int &n, int x)
//{
//	if (n < MAX)
//	{
//		a[n] = x;
//		n++;
//		return 1;
//	}
//	return 0;
//}
//int Delete_i(int a[], int &n, int i)
//{
//	if (i >= 0 && i < n)
//	{
//		for (int j = i; j < n - 1; j++)
//			a[j] = a[j + 1];
//		n--;
//		return 1;
//	}
//	return 0;
//}
//int delete_last(int a[], int &n)
//{
//	if (n > 0)
//	{
//		n--;
//		return 1;
//	}
//	return 0;
//}
//int Search_Delete(int a[], int &n, int x)
//{
//	int b = search(a, n, x);
//	if (b >= 0 && b < n)
//	{
//		for (int j = b; j < n - 1; j++)
//			a[j] = a[j + 1];
//		n--;
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int chon, n, x, kq;
//	cout << "---------- BAI TAP 1, CHUONG 2, DANH SACH DAC ----------	" << endl;
//	cout << "1.Nhap danh sach. " << endl;
//	cout << "2.Xuat danh sach. " << endl;
//	cout << "3.Tim phan tu co gia tri x trong danh sach. " << endl;
//	cout << "4.Them phan tu vao cuoi danh sach. " << endl;
//	cout << "5.Xoa phan tu cuoi danh sach. " << endl;
//	cout << "6.Xoa phan tu tai vi tri i." << endl;
//	cout << "7.Tim phan tu tai vi tri x va xoa no neu co." << endl;
//	cout << "8.Thoat" << endl;
//	do{
//		cout << "chon muc: ";
//		cin >> chon;
//		switch(chon)
//		{
//		case 1:
//			cout << "nhap so phan tu co trong ds: ";
//			cin >> n;
//			input(a,n);
//			break;
//		case 2:
//			cout << "Cac phan tu hien co trong danh sach:" << endl;
//			output(a, n);
//			break;
//		case 3:
//			cout << "nhap so can tim: ";
//			cin >> x;
//			kq = search(a, n, x);
//			if (kq == -1)
//			cout << "Khong tim thay!" << endl;
//			else
//				cout << "Xuat hien tai vitri " << kq << endl;
//			break;
//		case 4:
//			cout << "nhap gia tri can them vao: ";
//			cin >> x;
//			insert_last(a,n,x);
//			cout << "ban da them phan tu vao cuoi danh sach" << endl;
//			break;
//		case 5:
//			cout << "danh sach sau khi xoa phan tu cuoi:" << endl;
//			delete_last(a,n);
//			break;
//		case 6:
//			cout << "nhap vtri muon xoa: ";
//			cin >> x;
//			kq = Delete_i(a,n,x);
//			if (kq == 0)
//				cout << "khong tim thay!" << endl;
//			else
//				cout << "Danh sach sau khi xoa:" << endl;
//			output(a,n);
//			break;
//		case 7:
//			cout << "nhap gia tri x muon xoa: ";
//			cin >> x;
//			kq = Search_Delete(a, n, x);
//			if (kq == 0)
//				cout << "Khong tim thay!" << endl;
//			else
//				cout << "ds sau khi xoa:" << endl;;
//			output(a, n);
//			break;
//		case 8:
//			cout << "tam biet!" << endl;
//			break;
//		default:
//			cout << "nhap sai, nhap lai!" << endl;
//			break;
//		}
//	}while(chon != 8);
//	_getch();
//	return 0;
//}
