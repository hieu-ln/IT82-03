//#include <iostream>
//using namespace std;
//
//const int maxx=10001;
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
//	cout<<"BAI TAP CHUONG 1 BAI 5"<<endl;
//	cout<<"Danh sach lenh."<<endl;
//	cout<<"1. Khoi tao stack"<<endl;
//	cout<<"2. Xuat stack"<<endl;
//	cout<<"3. Kiem tra stack rong"<<endl;
//	cout<<"4. Kiem tra stack day"<<endl;
//	cout<<"5. Them phan tu vao stack"<<endl;
//	cout<<"6. Lay phan tu ra khoi stack"<<endl;
//	cout<<"7. Thoat"<<endl;
//	int c=0;
//	while (c!=7)
//	{
//		cout<<"chon lenh can thuc hien: ";cin>>c;
//		switch (c)
//		{
//		case 1:
//			{
//				init(a,top);
//				cout<<"Khoi tao thanh cong"<<endl;
//				break;
//			}
//		case 2:
//			{
//				output(a,top);
//				break;
//			}
//		case 3:
//			{
//				if (empty(top))
//					cout<<"Stack rong"<<endl;
//				else
//					cout<<"Stack khong rong"<<endl;
//				output(a,top);
//				break;
//			}
//		case 4:
//			{
//				if (full(top))
//					cout<<"Stack day"<<endl;
//				else
//					cout<<"Stack chua day"<<endl;
//				output(a,top);
//				break;
//			}
//		case 5:
//			{
//				int x;
//				if (full(top))
//					cout<<"Stack day khong the them"<<endl;
//				else
//				{
//					cout<<"Nhap gia tri them vao Stack :";cin>>x;
//					push(a,top,x);
//				}
//				output(a,top);
//				break;
//			}
//		case 6:
//			{
//				if (empty(top))
//					cout<<"Stack rong khong the lay"<<endl;
//				else
//					cout<<"gia tri duoc lay ra : "<<pop(a,top)<<endl;
//				output(a,top);
//				break;
//			}
//		case 7:
//			{
//				cout<<"Exit: Press Enter"<<endl;
//				system("pause");
//				break;
//			}
//		default:
//			{
//				cout<<"Lenh khong hop le"<<endl<<"Nhap lai"<<endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}