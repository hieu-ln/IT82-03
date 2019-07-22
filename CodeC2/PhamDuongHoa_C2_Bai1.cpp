//#include <iostream>
//using namespace std;
//
//const int maxx=100;
//int a[maxx],n,x;
//
//bool input(int a[],int &n)
//{
//	cout<<"Nhap do dai mang ";
//	cin>>n;
//	if (n>0 && n<=100)
//	{
//		for (int i=0;i<n;i++)
//		{
//			cout<<"nhap phan tu a["<<i<<"] =";
//			cin>>a[i];
//		}
//		return true;
//	}
//	else 
//		return false;
//}
//void output(int a[],int n)
//{
//	for (int i=0;i<n;i++)
//		cout<<a[i]<<" ";
//	cout<<endl;
//}
//int findx(int a[],int n,int x)
//{
//	for (int i=0;i<n;i++)
//		if (a[i]==x)
//			return i;
//	return -1;
//}
//bool addlast(int a[],int& n, int x)
//{
//	if (n<99)
//	{
//		a[n]=x;
//		n++;
//		return true;
//	}
//	return false;
//}
//bool dlast(int a[],int& n)
//{
//	if (n>0)
//	{
//		a[n]=0;
//		n--;
//		return true;
//	}
//	return false;
//}
//bool dlocal(int a[], int&n, int k)
//{
//	if (k>=0 && k<n)
//	{
//		n--;
//		for (int i=k;i<n;i++)
//			a[i]=a[i+1];
//		return true;
//	}
//	return false;
//}
//bool findd(int a[], int&n, int x)
//{
//	int j=findx(a,n,x);
//	if (j==-1)
//		return false;
//	else
//	{
//		dlocal(a,n,j);
//		return true;
//	}
//}
//int main()
//{
//	cout<<"Danh sach cac lenh"<<endl;
//	cout<<"1 Nhap danh sach"<<endl;
//	cout<<"2 Xuat danh sach"<<endl;
//	cout<<"3 Tim phan tu trong danh sach"<<endl;
//	cout<<"4 Them phan tu cuoi danh sach"<<endl;
//	cout<<"5 Xoa phan tu cuoi danh sach"<<endl;
//	cout<<"6 Xoa phan tu tai vi tri i trong danh sach"<<endl;
//	cout<<"7 Tim va xoa phan tu trong danh sach"<<endl;
//	cout<<"8 Thoat"<<endl;
//	int c=0;
//	while (c!=8)
//	{
//		cout<<"Chon lenh :";
//		cin>>c;
//		switch (c)
//		{
//			case 1:
//				{
//					if (input(a,n))
//						cout<<"Nhap danh sach thanh cong!"<<endl;
//					else
//						cout<<"Nhap danh sach that bai!"<<endl;
//					break;
//				}
//			case 2:
//				{
//					output(a,n);
//					break;
//				}
//			case 3:
//				{
//					cout<<"nhap so can tim :";
//					cin>>x;
//					int tmp=findx(a,n,x);
//					if (tmp!=-1)
//						cout<<"Tim thay phan tu x = "<<x<<" tai vi tri i = "<<tmp<<endl;
//					else
//						cout<<"Khong tim thay phan tu x trong danh sach"<<endl;
//					break;
//				}
//			case 4:
//				{	
//					cout<<"nhap so can them vao cuoi danh sach :";
//					cin>>x;
//					if(addlast(a,n,x))
//					{
//						cout<<"them thanh cong"<<endl;
//						cout<<"danh sach moi"<<endl;
//						output(a,n);
//					}
//					else
//						cout<<"them that bai"<<endl;
//					break;
//				}
//			case 5:
//				{
//					if(dlast(a,n))
//					{
//						cout<<"xoa thanh cong"<<endl;
//						cout<<"danh sach moi"<<endl;
//						output(a,n);
//					}
//					else
//						cout<<"Xoa that bai"<<endl;
//					break;
//				}
//			case 6:
//				{
//					cout<<"Nhap vi tri can xoa "<<endl;
//					cin>>x;
//					if (dlocal(a,n,x))
//					{
//						cout<<"danh sach moi"<<endl;
//						output(a,n);
//					}
//					else
//						cout<<"that bai"<<endl;
//					break;
//				}
//			case 7:
//				{
//					cout<<"Nhap phan tu can tim va xoa "<<endl;
//					cin>>x;
//					if (findd(a,n,x))
//					{
//						cout<<"danh sach moi"<<endl;
//						output(a,n);
//					}
//					else
//						cout<<"That bai "<<endl;
//					break;
//				}
//			default:
//				{
//					cout<<"Lenh khong hop le moi nhap lai "<<endl;
//					break;
//				}
//		}
//		cout<<"---------------------------------------"<<endl;
//	}
//	return 0;
//}
//
