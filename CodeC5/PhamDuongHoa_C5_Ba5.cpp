//#include <iostream>
//#include <fstream>
//#include <sstream>
//using namespace std;
//int const maxx=1001;
//int a[maxx][maxx],n,m,dfs[maxx];
//char ss[maxx];
//
//struct node{
//	int info;
//	node *link;
//};
//
//node *f,*r,*sp;
//node *DS[maxx];
//void addlast(node *&f,node *&p)
//{
//	if (f==NULL)
//		f=p;
//	else
//	{
//		node *q=f;
//		while(q->link!=NULL)
//		{
//			q=q->link;
//		}
//		q->link=p;
//	}
//}
//void input(int &n)
//{
//	cin>>n;
//	for (int i=0;i<n;i++)
//		cin>>ss[i];
//	string str;
//	int i=0;
//	while(getline(cin,str))
//	{
//		int tmp;
//		istringstream sss(str);
//		DS[i]=NULL;
//		while (sss >> tmp)
//		{
//			node *p;
//			p=new node;
//			p->info=tmp;
//			p->link=NULL;
//			addlast(DS[i],p);
//		}
//		i++;
//	}
//	m=i;
//}
//void inputfile(int &n)
//{
//	ifstream fi("D:\\DoThi\\danhsachke1.txt");
//	fi>>n;
//	for (int i=0;i<n;i++)
//		fi>>ss[i];
//	string str;
//	int i=0;
//	while(getline(fi,str))
//	{
//		int tmp;
//		istringstream sss(str);
//		DS[i]=NULL;
//		while (sss >> tmp)
//		{
//			node *p;
//			p=new node;
//			p->info=tmp;
//			p->link=NULL;
//			addlast(DS[i-1],p);
//		}
//		i++;
//	}
//	m=i-1;
//	fi.close();
//}
//void output()
//{
//	for (int i=0;i<m;i++)
//	{
//		node *p=DS[i];
//		while (p!=NULL)
//		{
//			cout<<p->info<<" ";
//			p=p->link;
//		}
//		cout<<endl;
//	}
//}
//void initQ()
//{
//	f=NULL;
//	r=NULL;
//}
//bool emptyQ()
//{
//	if (f==NULL)
//		return true;
//	else 
//		return false;
//}
//void pushQ(int x)
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
//int popQ()
//{
//	node *p=f;
//	int tmp=p->info;
//	f=f->link;
//	if (f==NULL)
//		r=NULL;
//	delete p;
//	return tmp;
//}
//void initS()
//{
//	sp=NULL;
//}
//bool emptyS()
//{
//	if (sp==NULL)
//		return true;
//	else 
//		return false;
//}
//void pushS(int x)
//{
//	node *p;
//	p=new node;
//	p->info=x;
//	p->link=sp;
//	sp=p;
//}
//void popS(int &x)
//{
//	node *p=sp;
//	x=p->info;
//	sp=p->link;
//	delete p;
//}
//void BFS(int x)
//{
//	if (x==-1) return ;
//	int k=-1;
//	bool kt[maxx];
//	for (int i=0;i<n;i++)
//		kt[i]=false;
//	pushQ(x);
//	cout<<ss[x]<<" ";
//	kt[x]=true;
//	while (f!=NULL)
//	{
//		k=popQ();
//		node *p=DS[k];
//		while (p!=NULL)
//		{
//			if(!kt[p->info])
//			{
//				pushQ(p->info);
//				cout<<ss[p->info]<<" ";
//				kt[p->info]=true;
//			}
//			p=p->link;
//		}
//	}
//}
//void DFS(int x)
//{
//	int c[maxx];
//	for (int i=0;i<=n;i++)
//		c[i]=0;
//	pushS(x);
//	c[x]=1;
//	cout<<ss[x]<<" ";
//	int u=x;
//	while(!emptyS())
//	{
//		
//		node *p=DS[u];
//		while (p!=NULL)
//		{
//			if (c[p->info]==0)
//			{
//				pushS(u);
//				pushS(p->info);
//				cout<<ss[p->info]<<" ";
//				c[p->info]=1;
//				u=p->info;
//				break;
//			}
//			p=p->link;
//		}
//		if (p==NULL)
//			popS(u);
//	}
//	cout<<endl;
//}
//void BFSs(int x,int tk)
//{
//	int k;
//	bool kt[maxx];
//	for (int i=0;i<n;i++)
//		kt[i]=false;
//	pushQ(x);
//	kt[x]=true;
//	while (f!=NULL)
//	{
//		k=popQ();
//		if (k==tk)
//		{
//			cout<<"Tim thay "<<ss[tk]<<endl;
//			return;
//		}
//		node *p=DS[k];
//		while (p!=NULL)
//		{
//			if(!kt[p->info])
//			{
//				pushQ(p->info);
//				kt[p->info]=true;
//			}
//			p=p->link;
//		}
//	}
//	cout<<"Khong thay "<<endl;
//}
//int main()
//{
//	cout<<"BAI TAP CHUONG 5 BAI 1"<<endl;
//	cout<<"1 input hand"<<endl;
//	cout<<"2 input text"<<endl;
//	cout<<"3 output "<<endl;
//	cout<<"4 BFS"<<endl;
//	cout<<"5 DFS"<<endl;
//	cout<<"6 Tim x"<<endl;
//	cout<<"7 End"<<endl;
//	int c=0,x;
//	while (c!=7)
//	{
//		cout<<"CHON LENH : ";cin>>c;
//		switch (c)
//		{
//		case 1:
//			{
//				input(n);
//				cout<<"Nhap thanh cong"<<endl;
//				break;
//			}
//		case 2:
//			{
//				inputfile(n);
//				cout<<"Nhap thanh cong"<<endl;
//				break;
//			}
//		case 3:
//			{
//				cout<<"Xuat man hinh"<<endl;
//				output();
//				break;
//			}
//		case 4:
//			{
//				cout<<"Duyet BFS :"<<endl;
//				char l;
//				cout<<"chon dinh bat dau :";cin>>l;
//				for (int i=0;i<n;i++)
//				{
//					if (l==ss[i])
//					{
//						x=i;
//						break;
//					}
//					x=-1;
//				}
//				BFS(x);
//				cout<<endl;
//				break;
//			}
//		case 5:
//			{
//				cout<<"Duyet DFS :"<<endl;
//				char l;
//				cout<<"chon dinh bat dau :";cin>>l;
//				for (int i=0;i<n;i++)
//				{
//					if (l==ss[i])
//					{
//						x=i;
//						break;
//					}
//					x=-1;
//				}
//				DFS(x);
//				break;
//			}
//		case 6:
//			{
//				int k;
//				char l;
//				cout<<"Nhap dinh can tim : ";cin>>l;
//				for (int i=0;i<n;i++)
//				{
//					if (l==ss[i])
//					{
//						x=i;
//						break;
//					}
//					x=-1;
//				}
//				cout<<"chon dinh bat dau :";cin>>l;
//				for (int i=0;i<n;i++)
//				{
//					if (l==ss[i])
//					{
//						k=i;
//						break;
//					}
//					k=-1;
//				}
//				BFSs(k,x);
//				break;
//			}
//		case 7:
//			{
//				cout<<"KET THUC"<<endl;
//				break;
//			}
//		default:
//			{
//				cout<<"NHAP SAI NHAP LAI"<<endl;
//				break;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}