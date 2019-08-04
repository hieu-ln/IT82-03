#include <iostream>
using namespace std;
struct tree{
	int info;
	tree *left;
	tree *right;
} ;
	tree *root;
const int maxx=100;
tree *a[maxx];
void initS(int &top)
{
	top=-1;
}
bool emptyS(int top)
{
	if (top==-1)
		return true;
	else 
		return false;
}
bool fullS(int top)
{
	if (top==maxx-1)
		return true;
	else
		return false;
}
void pushS(int &top, tree *x)
{
	top++;
	a[top]=x;
}
tree  *popS(int &top)
{
	top--;
	return a[top+1];
}

void inittree()
{
	root=NULL;
}
void addnode(tree *&p,int x)
{
	if (p==NULL)
	{
		p=new tree;
		p->info=x;
		p->left=NULL;
		p->right=NULL;
	}
	else
	{
		if (p->info==x)
			return;
		if (p->info>x)
			addnode(p->left,x);
		else
			addnode(p->right,x);
	}
}
void NLRStack(tree *&p, int top)
{
	pushS(top,p);
	while (!emptyS(top))
	{
		tree* p=popS(top);
		cout<<p->info<<" ";
		if(p->right!=NULL)
		{
			pushS(top,p->right);
		}
		if ( p->left!=NULL)
		{
			pushS(top,p->left);
		}
	}
}
int main()
{
	int top;
	initS(top);
	inittree();
	int c=0,x,n;
	cout<<"BAI TAP LAM THEM CHUONG 4_BAI2.6_PHAMDUONGHOA"<<endl;
	cout<<"Menu lenh :"<<endl;
	cout<<"1. Nhap danh sach cay."<<endl;
	cout<<"2.Duyet NLR."<<endl;
	cout<<"3 Thoat."<<endl;
	while (c!=3)
	{
		cout<<"Chon lenh :";
		cin>>c;
		switch (c)
		{
		case 1:
		{
			cout<<"Nhap so phan tu muon them vao danh sach :";
			cin>>n;
			for (int i=0;i<n;i++)
			{
				cout<<"Nhap phan tu thu :"<<i<<" : ";
				cin>>x;
				addnode(root,x);
			}
			cout<<"Nhap thanh cong!"<<endl;
			break;
		}
		case 2:
		{
			cout<<"Duyet NLR :";
			NLRStack(root,top);
			cout<<endl;
			break;
		}
		case 3:
		{
			cout<<"THOAT!"<<endl;
			break;
		}
		default:
			{
				cout<<"Nhap sai lenh, nhap lai"<<endl;
				break;
			}
		}
	}
	system("pause");
return 0;
}