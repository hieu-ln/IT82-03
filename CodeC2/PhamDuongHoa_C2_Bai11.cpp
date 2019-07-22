//#include <iostream>
//using namespace std;
//struct node{
//	int info;
//	node *link;
//};
//node *f,*r;
//void init()
//{
//	f=NULL;
//	r=NULL;
//}
//bool empty()
//{
//	if (f==NULL)
//		return true;
//	else 
//		return false;
//}
//void push(int x)
//{
//	node *p;
//	p=new node;
//	p->info=x;
//	p->link=NULL;
//	if (r==NULL)
//		f=p;
//	else
//		r->link=p;
//	r=p;
//}
//int pop()
//{
//	node *p=f;
//	int tmp=p->info;
//	f=f->link;
//	if (f==NULL)
//		r=NULL;
//	delete p;
//	return tmp;
//}
//int main()
//{
//	int x,c=0;
//	while (c!=5)
//	{
//		cout<<"CHON LENH :";cin>>c;
//		switch (c)
//		{
//		case 1:
//			{
//				init();
//				cout<<"Khoi tao thanh cong!"<<endl;
//				break;
//			}
//		case 2:
//			{
//				if (empty())
//					cout<<"Queue rong!";
//				else
//					cout<<"Queue khong rong!";
//				cout<<endl;
//				break;
//			}
//		case 3:
//			{
//				cout<<"Nhap gia tri can them : ";cin>>x;
//				push(x);
//				break;
//			}
//		case 4:
//			{
//				if (empty())
//					cout<<"Queue rong!";
//				else
//					cout<<"Phan tu lay ra = "<<pop();
//				cout<<endl;
//				break;
//			}
//		case 5:
//			{
//				cout<<"KET THUC!"<<endl;
//				system("pause");
//				break;
//			}
//		default:
//			{
//				cout<<"Lenh khong hop le!"<<endl;
//				break;
//			}
//		}
//	}
//return 0;
//}