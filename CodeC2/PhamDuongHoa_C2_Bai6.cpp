//#include <iostream>
//using namespace std;
//
//const int maxx=101;
//int a[maxx];
//int top;
//
//void init(int a[],int &top)
//{
//	top=-1;
//}
//void output(int a[],int top)
//{
//	cout<<"Stack hien tai:"<<endl;
//	for (int i=0;i<=top;i++)
//		cout<<a[i]<<" ";
//	cout<<endl;
//}
//bool empty(int top)
//{
//	if (top==-1)
//		return true;
//	else 
//		return false;
//}
//bool full(int top)
//{
//	if (top==maxx-1)
//		return true;
//	else
//		return false;
//}
//void push(int a[],int &top, int x)
//{
//	top++;
//	a[top]=x;
//}
//int pop(int a[],int &top)
//{
//	top--;
//	return a[top+1];
//}
//int main()
//{
//	cout<<"BAI TAP CHUONG 1 BAI 6"<<endl;
//	cout<<"Danh sach lenh"<<endl;
//	cout<<"1. Doi thap phan sang nhi phan."<<endl;
//	cout<<"2. Thoat"<<endl;
//	int c=0;
//	while(c!=2)
//	{
//		cout<<"Chon lenh :";cin>>c;
//		if (c==1)
//		{
//			int n;
//			cout<<"Nhap so thap phan can doi sang nhi phan: ";cin>>n;
//			init(a,top);
//			while (n>1)
//			{
//				push(a,top,n%2);
//				n=n/2;
//			}
//			push(a,top,n);
//			while(!empty(top))
//			{
//				cout<<pop(a,top);
//			}
//			cout<<endl;
//		}
//		else if (c==2) cout<<"Thoat chuong trinh"<<endl;
//		else cout<<"Lenh khong hop le"<<endl<<"Nhap lai"<<endl;
//	}
//	system("pause");
//	return 0;
//}