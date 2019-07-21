//#include <iostream>
//using namespace std;
//#define MAX 10
//void xuat(int a[], int n)
//{
//	for (int i = n; i >= 0; i--)
//	{
//		if (i == 0)
//			cout << a[i];
//		else
//			if (a[i] != 0)
//				cout << a[i] << "x^" << i << " + ";
//	}
//	cout << endl;
//}
//void nhap(int a[], int &n)
//{
//	do {
//		cout << "Bac cua da thuc: ";
//		cin >> n;
//		if (n < 1)
//			cout << "bac cua da thuc phai >= 1" << endl;
//		} while (n < 1);
//		for (int i = n; i >= 0; i--)
//		{
//			cout << "Nhap he so thu " << i << ": ";
//			cin >> a[i];
//		}
//		xuat(a,n);
//}
//void cong(int a[], int b[], int c[], int n, int m)
//{
//	int nc;
//	if (n > m)
//		nc = n;
//	else
//		nc = m;
//	for (int i = nc; i >= 0; i--)
//	{
//		if (a[i] != 0 && b[i] != 0)
//			c[i] = a[i] + b[i];
//		else
//		{
//			if (a[i] == 0)
//				c[i] = b[i];
//			else
//				if (b[i] == 0)
//					c[i] = a[i];
//		}
//	}
//	xuat(c, nc);
//}
//int main()
//{
//	int a[MAX] = { 0 }, b[MAX] = { 0 }, c[MAX] = { 0 }, n, m;
//	cout << "Nhap P(x):" << endl;
//	nhap(a, n);
//	cout << "Nhap Q(x):" << endl;
//	nhap(b, m);
//	cout << "P(x) + Q(x): ";
//	cong(a, b, c, n, m);
//	system("pause");
//	return 0;
//}