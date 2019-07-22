//#include <iostream>
//using namespace std;
//
//struct node
//{
//	int info;
//	node *link;
//};
//
//node *first;
//
//void init()
//{
//	first=NULL;
//}
//void output()
//{
//	node *p;
//	p=first;
//	while(p!=NULL)
//	{
//		cout<<p->info<<"   ";
//		p=p->link;
//	}
//	cout<<endl;
//}
//int findx(int x)
//{
//	node *p;
//	int loco=0;
//	p=first;
//	if (first!=NULL)
//	{
//		while (p->link!=NULL && p->info!=x)
//		{
//			loco++;
//			p=p->link;
//		}
//	}
//	if (p->info==x)
//		return loco;
//	else
//		return -1;
//}
//void addfirst(int x)
//{
//	node* p;
//	p= new node;
//	p->info=x;
//	p->link=first;
//	first=p;
//}
//void addlast(int x)
//{
//	node *p,*q;
//	q=new node;
//	p=new node;
//	q->link=NULL;
//	q->info=x;
//	p=first;
//	if (first==NULL)
//		first=q;
//	else
//	{
//		while (p->link!=NULL)
//			p=p->link;
//		p->link = q;
//	}
//}
//void dfirst()
//{
//	if(first!=NULL)
//	{
//		node *p;
//		p=first;
//		first=first->link;
//		delete p;
//	}
//}
//void dlast()
//{
//	if(first!=NULL)
//	{
//		node *p,*q;
//		p=new node;
//		q=new node;
//		p=first;
//		q=p->link;
//		while(q->link!=NULL)
//		{
//			p=p->link;
//			q=q->link;
//		}
//		p->link=NULL;
//		delete q;
//	}
//}
//void timvaxoa(int x)
//{
//	node *p,*q;
//	q=first;
//	p=first->link;
//	if (q->info==x)
//	{
//		first=first->link;
//		delete q;
//	}
//	else
//	{
//		if (first!=NULL)
//		{
//			while (p->link!=NULL && p->info!=x)
//			{
//				p=p->link;
//				q=q->link;
//			}
//		}
//		if (p->info==x) 
//			{
//				q->link=p->link;
//				delete p;
//			}
//	}
//}
//void swap(node *a,node *b)
//{
//	int tmp=a->info;
//	a->info=b->info;
//	b->info=tmp;
//}
//void sort()
//{
//	node *p,*q;
//	q=first;
//	p=new node;
//	while (q!=NULL)
//	{
//		p=q->link;
//		while(p!=NULL)
//		{
//			if (q->info > p->info)
//				swap(q,p);
//			p=p->link;
//		}
//		q=q->link;
//	}
//}
//int main()
//{
//	int c=1,x=0;
//	cout<<"*********************BAI TAP CHUONG 2 BAI 3*********************"<<endl;
//	cout<<"Danh sach cac lenh"<<endl;
//	cout<<"1 Khoi tao danh sach"<<endl;
//	cout<<"2 Xuat danh sach"<<endl;
//	cout<<"3 Them phan tu vao dau danh sach"<<endl;
//	cout<<"4 Them phan tu vao cuoi danh sach"<<endl;
//	cout<<"5 Xoa phan tu dau danh sach"<<endl;
//	cout<<"6 Xoa phan tu cuoi danh sach"<<endl;
//	cout<<"7 Tim phan tu trong danh sach"<<endl;
//	cout<<"8 Tim va xoa phan tu trong danh sach"<<endl;
//	cout<<"9 Sap xep danh sach"<<endl;
//	cout<<"10 Thoat"<<endl;
//	while (c!=10)
//	{
//		cout<<"Nhap lenh can thuc thi ";
//		cin>>c;
//		switch (c)
//		{
//			case 1:
//				{
//					init();
//					cout<<"Khoi tao danh sach thanh cong!"<<endl;
//					break;
//				}
//			case 2:
//				{
//					cout<<"Danh sach :"<<endl;
//					output();
//					break;
//				}
//			case 3:
//				{
//					int x;
//					cout<<"nhap gia tri them dau danh sach: ";cin>>x;
//					addfirst(x);
//					cout<<"danh sach sau khi them x :"<<endl;
//					output();
//					break;
//				}
//			case 4:
//				{
//					int x;
//					cout<<"Nhap gia tri them cuoi danh sach: ";cin>>x;
//					addlast(x);
//					cout<<"danh sach sau khi them x :"<<endl;
//					output();
//					break;
//				}
//			case 5:
//				{
//					dfirst();
//					cout<<"danh sach sau khi xoa: "<<endl;
//					output();
//					break;
//				}
//			case 6:
//				{
//					dlast();
//					cout<<"danh sach sau khi xoa: "<<endl;
//					output();
//					break;
//				}
//			case 7:
//				{
//					cout<<"Nhap gia tri x can tim ";cin>>x;
//					int tmp = findx(x);
//					if (tmp!=-1)
//						cout<<"Tim thay tai vi tri "<<tmp<<endl;
//					else
//						cout<<"ko tim thay"<<endl;
//					break;
//				}
//			case 8:
//				{
//					cout<<"Nhap gia tri can tim va xoa: ";cin>>x;
//					timvaxoa(x);
//					cout<<"danh sach sau khi xoa: "<<endl;
//					output();
//					break;
//				}
//			case 9:
//				{
//					sort();
//					cout<<"danh sach sau khi sap xep: "<<endl;
//					output();
//					break;
//				}
//			case 10:
//				{
//					cout<<"THE END"<<endl;
//					break;
//				}
//			default :
//				{
//					cout<<"lenh khong ton tai"<<endl<<"Nhap lai"<<endl;
//					break;
//				}
//		}
//		cout<<"-----------------------------------------------"<<endl;
//	}
//	system("pause");
//	return 0;
//}