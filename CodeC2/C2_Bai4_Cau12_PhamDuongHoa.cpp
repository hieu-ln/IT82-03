#include<iostream>
using namespace std;
struct node
{
	int info;
	node *pre;
	node *next;
};
node *first,*last;
void init()
{
	first=NULL;
	last=NULL;
}
void output()
{
	node *p=first;
	while (p!=NULL)
	{
		cout<<p->info<<" ";
		p=p->next;
	}
	cout<<endl;
}
void addfirst(int x)
{
	node *p;
	p=new node;
	p->next=first;
	p->pre=NULL;
	p->info=x;
	if (first!=NULL)
		first->pre=p;
	else
		last=p;
	first=p;
}
void addlast(int x)
{
	node *p;
	p=new node;
	p->next=NULL;
	p->pre=last;
	p->info=x;
	if (last!=NULL)
		last->next=p;
	else
		first=p;
	last=p;
}
void delfirst()
{
	node *p=first;
	first=first->next;
	delete p;
	if (first==NULL)
		last=NULL;
	else
		first->pre=NULL;
}
void dellast()
{
	node *p=last;
	last=last->pre;
	delete p;
	if (first==NULL)
		first=NULL;
	else
		last->next=NULL;
}
void timvaxoa(int x)
{
	if (first->info==x) delfirst();
	else
		if (last->info==x) dellast();
		else
		{
			node *p=first->next;
			while (p!=last && p->info!=x)
			{
				p=p->next;
			}
			if (p->info==x)
			{
				p->pre->next=p->next;
				p->next->pre=p->pre;
				delete p;
			}
		}
}
void timvathem(int x,int y)
{
	node *p=first;
	node *res;
	int tmp=1<<30;
	while (p!=NULL )
	{
		if (tmp > p->info-x && p->info-x>=0)
		{
			tmp=p->info-x;
			res=p;
		}
		p=p->next;
	}
	p=new node;
	p->info=y;
	p->next=res->next;
	p->pre=res;
	res->next=p;
}
int main()
{
	int c=0,x,y;
	cout<<"BAI TAP LAM THEM C2 BAI12"<<endl;
	while (c!=9)
	{
		cout<<"Chon lenh can thuc hien: ";
		cin>>c;
		switch(c)
		{
		case 1:
			{
				init();
				cout<<"Khoi tao thanh cong"<<endl;
				break;
			}
		case 2:
			{
				cout<<"Xuat danh sach:"<<endl;
				output();
				break;
			}
		case 3:
			{
				cout<<"Nhap phan tu them dau danh sach: ";
				cin>>x;
				addfirst(x);
				break;
			}
		case 4:
			{
				cout<<"Nhap phan tu them cuoi danh sach: ";
				cin>>x;
				addlast(x);
				break;
			}
		case 5:
			{
				delfirst();
				cout<<"Xoa thanh cong phan tu dau danh sach!"<<endl;
				break;
			}
		case 6:
			{
				dellast();
				cout<<"Xoa thanh cong phan tu cuoi danh sach!"<<endl;
				break;
			}
		case 7:
			{
				cout<<"Nhap phan tu can tim va xoa: ";
				cin>>x;
				timvaxoa(x);
				cout<<"Xoa thanh cong!"<<endl;;
				break;
			}
		case 8:
			{
				cout<<"Nhap phan tu can tim: ";
				cin>>x;
				cout<<"Nhap phan tu can them: ";
				cin>>y;
				timvathem(x,y);
				cout<<"Them thanh cong!"<<endl;
				break;
			}
		case 9:
			{
				cout<<"Ket thuc!"<<endl;
				break;
			}
		case 10:
			{
				cout<<"Lenh khong hop le"<<endl<<"Nhap lai"<<endl;
			}
		}
	}
	system("pause");
	return 0;
}