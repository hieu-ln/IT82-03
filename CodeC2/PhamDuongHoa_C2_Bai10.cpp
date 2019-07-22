//#include <iostream>
//using namespace std;
//struct node{
//	int info;
//	node* link;
//};
//void init(node *&sp)
//{
//	sp=NULL;
//}
//bool empty(node *sp)
//{
//	if (sp==NULL) 
//		return true;
//	else
//		return false;
//}
//void push(int x,node* &sp)
//{
//	node *p;
//	p=new node;
//	p->info=x;
//	p->link=sp;
//	sp=p;
//}
//int pop(node* &sp)
//{
//	node *p=sp;
//	int tmp=sp->info;
//	sp=sp->link;
//	delete p;
//	return tmp;
//}
//void doihe(int x)
//{
//	node *p;
//	init(p);
//	while (x>1)
//	{
//		push(x%2,p);
//		x=x/2;
//	}
//	push(x%2,p);
//	while(!empty(p))
//	{
//		cout<<pop(p);
//	}
//	cout<<endl;
//}
//int main()
//{
//    node *sp;
//	int c=0;
//	while (c!=6)
//	{
//		cout<<"Chon lenh: ";
//		cin>>c;
//		switch (c)
//		{
//		case 1:
//			{
//				init(sp);
//				cout<<"Khoi tao thanh cong!"<<endl;
//				break;
//			}
//		case 2:
//			{
//				if (empty(sp))
//					cout<<"Stack rong"<<endl;
//				else
//					cout<<"Stack khong rong"<<endl;
//				break;
//			}
//		case 3:
//			{
//				int x;
//				cout<<"Nhap gia tri can them : ";
//				cin>>x;
//				push(x,sp);
//				break;
//			}
//		case 4:
//			{
//				if (!empty(sp))
//					cout<<"Phan tu lay duoc = "<<pop(sp)<<endl;
//				else
//					cout<<"Stack rong"<<endl;
//				break;
//			}
//		case 5:
//			{
//				int x;
//				cout<<"Nhap so can doi he ";cin>>x;
//				cout<<"He nhi phan : "<<x<<" = ";
//				doihe(x);
//				break;
//			}
//		case 6:
//			{
//				cout<<"Ket thuc!"<<endl;
//				system("pause");
//				break;
//			}
//		default :
//			{
//				cout<<"Lenh khong hop le!"<<endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}
