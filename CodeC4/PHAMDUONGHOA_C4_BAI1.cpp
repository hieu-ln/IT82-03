//#include <iostream>
//using namespace std;
//struct node{
//	int info;
//	node *left, *right;
//};
//node *root;
//void init()
//{
//	root=NULL;
//}
//void addnode(node *&p,int x)
//{
//	if (p==NULL)
//	{
//		p=new node;
//		p->info=x;
//		p->left=NULL;
//		p->right=NULL;
//	}
//	else
//	{
//		if (p->info==x)
//			return;
//		if (p->info>x)
//			addnode(p->left,x);
//		else
//			addnode(p->right,x);
//	}
//}
//bool findnode(node*p,int x)
//{
//	if (p!=NULL)
//	{
//		if (p->info==x)
//			return true;
//		else
//		if (p->info>x)
//			return findnode(p->left,x);
//		else
//			return findnode(p->right,x);
//	}
//	return false;
//}
//void search(node *&p,node *&q)
//{
//	if(q->left==NULL)
//	{
//		p->info=q->info;
//		p=q;
//		q=q->right;
//	}
//	else
//		search(p,q->left);
//}
//bool deletenode(node *&p,int x)
//{
//	if (p==NULL)
//		return false;
//	if(p->info==x)
//	{
//		node *q=p;
//		if (p->left==NULL)
//			p=p->left;
//		else
//			search(q,p->right);
//		delete q;
//		return true;
//	}
//	if (p->info<x) deletenode(p->right,x);
//	if (p->info>x) deletenode(p->left,x);
//}
//void NLR(node* p)
//{
//	if(p!=NULL)
//	{
//		cout<<p->info<<" ";
//		NLR(p->left);
//		NLR(p->right);
//	}
//}
//void LNR(node* p)
//{
//	if(p!=NULL)
//	{
//		LNR(p->left);
//		cout<<p->info<<" ";
//		LNR(p->right);
//	}
//}
//void LRN(node* p)
//{
//	if(p!=NULL)
//	{
//		LRN(p->left);
//		LRN(p->right);
//		cout<<p->info<<" ";
//	}
//}
//int main()
//{
//	cout<<"BAI TAP CHUONG 4 BAI1_PHAMDUONGHOA"<<endl;
//	cout<<"Menu lenh : "<<endl;
//	cout<<"1. Khoi tao cay rang."<<endl;
//	cout<<"2. Them mot phan tu vao cay."<<endl;
//	cout<<"3. Tim mot phan tu trong cay."<<endl;
//	cout<<"4. Xoa mot phan tu trong cay."<<endl;
//	cout<<"5. Duyet NLR."<<endl;
//	cout<<"6. Duyet LNR."<<endl;
//	cout<<"7. Duyet LRN."<<endl;
//	cout<<"8. Ket thuc."<<endl;
//	int c=0;
//	while (c!=8)
//	{
//		cout<<"Nhap lenh : ";
//		cin>>c;
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
//				int x;
//				cout<<"Nhap gia tri gan dau tien:";
//				cin>>x;
//				addnode(root,x);
//				cout<<"Them gia tri thanh cong"<<endl;
//				break;
//			}
//		case 3:
//			{
//				int x;
//				cout<<"Nhap gia tri can tim:";
//				cin>>x;
//				if (findnode(root,x)) 
//					cout<<"Tim thay "<<x<<" trong cay "<<endl ;
//				else
//					cout<<"Khong tim thay "<<x<<" trong cay "<<endl ;
//				break;
//			}
//		case 4:
//			{
//				int x;
//				cout<<"Nhap gia tri can xoa :";
//				cin>>x;
//				if (deletenode(root,x))
//					cout<<"Xoa thanh congg"<<endl;
//				else
//					cout<<"Kong tim thay phan tu can"<<endl;
//				break;
//			}
//		case 5:
//			{
//				cout<<"Duyet NLR:";
//				NLR(root);
//				cout<<endl;
//				break;
//			}
//		case 6:
//			{
//				cout<<"Duyet LNR:";
//				LNR(root);
//				cout<<endl;
//				break;
//			}
//		case 7:
//			{
//				cout<<"Duyet LRN:";
//				LRN(root);
//				cout<<endl;
//				break;
//			}
//		case 8:
//			{
//				cout<<"Ket thuc!"<<endl;
//				break;
//			}
//		default:
//			{
//				cout<<"Lenh khong hop le, nhap lai"<<endl;
//				break;
//			}
//		
//		}
//	}
//}