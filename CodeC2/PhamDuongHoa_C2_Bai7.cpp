//#include <iostream>
//using namespace std;
//
//const int maxx=101;
//
//void init(int a[], int &top, int &bot)
//{
//	top=-1;
//	bot=-1;
//}
//void output(int a[],int top,int bot)
//{
//	for (int i=bot;i<=top;i++)
//		cout<<a[i]<<" ";
//	cout<<endl;
//	cout<<"------------------------------------------------------"<<endl;
//}
//bool empty(int a[],int top,int bot)
//{
//	if (bot==top)
//		return true;
//	else 
//		return false;
//}
//bool full(int a[],int top,int bot)
//{
//	if ((bot==0 && top==maxx-1) || (bot-top==1))
//		return true;
//	else
//		return false;
//}
//void push(int a[],int &top,int &bot,int x)
//{
//	if(bot==-1)
//		bot=0;
//	if(top==maxx-1)
//	{
//		for (int i=bot;i<=top;i++)
//			a[i-bot]=a[i];
//		top=maxx-1-bot;
//		bot=0;
//	}
//	top++;
//	a[top]=x;
//}
//int pop(int a[],int &bot,int &top)
//{
//	int tmp=a[bot++];
//	if (bot>top)
//	{
//		top=-1;
//		bot=-1;
//	}
//	return tmp;
//}
//int main()
//{
//	int a[maxx],top,bot,x;
//	cout<<"BAI TAP CHUONG 1 BAI 7"<<endl;
//	cout<<"Danh sach lenh."<<endl;
//	cout<<"1. Khoi tao QUEUE"<<endl;
//	cout<<"2. Xuat QUEUE"<<endl;
//	cout<<"3. Kiem tra QUEUE rong"<<endl;
//	cout<<"4. Kiem tra QUEUE day"<<endl;
//	cout<<"5. Them phan tu vao QUEUE"<<endl;
//	cout<<"6. Xoa phan tu ra khoi QUEUE"<<endl;
//	cout<<"7. Thoat"<<endl;
//	int c=0;
//	while (c!=7)
//	{
//		cout<<"chon lenh can thuc hien: ";cin>>c;
//		switch (c)
//		{
//		case 1:
//			{
//				init(a,bot,top);
//				cout<<"Khoi tao thanh cong"<<endl;
//				break;
//			}
//		case 2:
//			{
//				output(a,top,bot);
//				break;
//			}
//		case 3:
//			{
//				if (empty(a,top,bot))
//					cout<<"QUEUE rong"<<endl;
//				else
//					cout<<"QUEUE khong rong"<<endl;
//				break;
//			}
//		case 4:
//			{
//				if (full(a,top,bot))
//					cout<<"QUEUE day"<<endl;
//				else
//					cout<<"QUEUE chua day"<<endl;
//				break;
//			}
//		case 5:
//			{
//				int x;
//				if (full(a,top,bot))
//					cout<<"QUEUE day khong the them"<<endl;
//				else
//				{
//					cout<<"Nhap gia tri them vao QUEUE :";cin>>x;
//					push(a,top,bot,x);
//				}
//				output(a,top,bot);
//				break;
//			}
//		case 6:
//			{
//				if (empty(a,top,bot))
//					cout<<"QUEUE rong khong the xoa"<<endl;
//				else
//					cout<<"gia tri bi xoa : "<<pop(a,bot,top)<<endl;
//				output(a,top,bot);
//				break;
//			}
//		case 7:
//			{
//				cout<<"Exit: Press Enter"<<endl;
//				break;
//			}
//		default:
//			{
//				cout<<"Lenh khong hop le"<<endl<<"Nhap lai"<<endl;
//				break;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}