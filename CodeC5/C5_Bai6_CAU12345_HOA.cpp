#include <iostream>
#include <fstream>
using namespace std;
int const maxx=1001;
int a[maxx][maxx],n,dfs[maxx];
char ss[maxx];
int Qq[maxx],Ss[maxx];
int top,bot;
struct node{
	int info;
	node *link;
};

node *f,*r,*sp;

void input(int &n)
{
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>ss[i];
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			cin>>a[i][j];
}
void inputfile(int &n)
{
	ifstream fi("D:\\DoThi\\matranke1.txt");
	fi>>n;
	for (int i=0;i<n;i++)
		fi>>ss[i];
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			fi>>a[i][j];
	fi.close();
}
void output()
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
void initQ(int a[], int &top, int &bot)
{
	top=-1;
	bot=-1;
}
bool emptyQ(int top,int bot)
{
	if (bot==top)
		return true;
	else 
		return false;
}
bool fullQ(int top,int bot)
{
	if ((bot==0 && top==maxx-1) || (bot-top==1))
		return true;
	else
		return false;
}
void pushQ(int a[],int &top,int &bot,int x)
{
	if(bot==-1)
		bot=0;
	if(top==maxx-1)
	{
		for (int i=bot;i<=top;i++)
			a[i-bot]=a[i];
		top=maxx-1-bot;
		bot=0;
	}
	top++;
	a[top]=x;
}
int popQ(int a[],int &bot,int &top)
{
	int tmp=a[bot++];
	if (bot>top)
	{
		top=-1;
		bot=-1;
	}
	return tmp;
}
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
void pushS(int a[],int &top, int x)
{
	top++;
	a[top]=x;
}
int popS(int a[],int &top)
{
	top--;
	return a[top+1];
}

void BFS(int x)
{
	initQ(Qq,top,bot);
	int k;
	bool kt[maxx];
	for (int i=0;i<n;i++)
		kt[i]=false;
	pushQ(Qq,top,bot,x);
	cout<<ss[x]<<" ";
	kt[x]=true;
	while (!emptyQ(top,bot))
	{
		k=popQ(Qq,bot,top);
		for (int i=0;i<n;i++)
		{
			if(!kt[i] && a[k][i]==1)
			{
				pushQ(Qq,top,bot,i);
				cout<<ss[i]<<" ";
				kt[i]=true;
			}
		}
	}
}
void DFS(int x)
{
	initS(top);
	int v=-1,c[maxx];
	for (int i=0;i<=n;i++)
		c[i]=0;
	pushS(Ss,top,x);
	c[x]=1;
	int ndfs=0;
	cout<<ss[x]<<" ";
	int u=x;
	while(!emptyS(top))
	{
		if (v==n)
			popS(Ss,top);
		for (v=0;v<n;v++)
			if (a[u][v]!=0 && c[v]==0)
			{
				pushS(Ss,top,u);
				pushS(Ss,top,v);
				cout<<ss[v]<<" ";
				c[v]=1;
				u=v;
				break;
			}
	}
}
void BFSs(int x,int tk)
{
	initQ(Qq,top,bot);
	int k;
	bool kt[maxx];
	for (int i=0;i<n;i++)
		kt[i]=false;
	pushQ(Qq,top,bot,x);
	kt[x]=true;
	while (!emptyQ(top,bot))
	{
		k=popQ(Qq,bot,top);
		if (k==tk)
		{
			cout<<"Tim thay "<<ss[tk]<<endl;
			return;
		}
		for (int i=0;i<n;i++)
			if(!kt[i] && a[k][i]==1)
			{
				pushQ(Qq,top,bot,i);
				kt[i]=true;
			}
	}
	cout<<"Khong thay "<<endl;
}
int main()
{
	cout<<"BAI TAP CHUONG 5 BAI 6"<<endl;
	cout<<"1 input hand"<<endl;
	cout<<"2 input text"<<endl;
	cout<<"3 output "<<endl;
	cout<<"4 BFS"<<endl;
	cout<<"5 DFS"<<endl;
	cout<<"6 Tim x"<<endl;
	cout<<"7 End"<<endl;
	int c=0,x;
	while (c!=7)
	{
		cout<<"CHON LENH : ";cin>>c;
		switch (c)
		{
		case 1:
			{
				input(n);
				cout<<"Nhap thanh cong"<<endl;
				break;
			}
		case 2:
			{
				inputfile(n);
				cout<<"Nhap thanh cong"<<endl;
				break;
			}
		case 3:
			{
				cout<<"Xuat man hinh"<<endl;
				output();
				break;
			}
		case 4:
			{
				initQ(Qq,top,bot);
				cout<<"Duyet BFS :"<<endl;
				char l;
				cout<<"chon dinh bat dau :";cin>>l;
				for (int i=0;i<n;i++)
				{
					if (l==ss[i])
					{
						x=i;
						break;
					}
					x=-1;
				}
				BFS(x);
				cout<<endl;
				break;
			}
		case 5:
			{
				initQ(Ss,top,bot);
				cout<<"Duyet DFS :"<<endl;
				char l;
				cout<<"chon dinh bat dau :";cin>>l;
				for (int i=0;i<n;i++)
				{
					if (l==ss[i])
					{
						x=i;
						break;
					}
					x=-1;
				}
				DFS(x);
				cout<<endl;
				break;
			}
		case 6:
			{
				initQ(Qq,top,bot);
				int k;
				char l;
				cout<<"Nhap dinh can tim : ";cin>>l;
				for (int i=0;i<n;i++)
				{
					if (l==ss[i])
					{
						x=i;
						break;
					}
					x=-1;
				}
				cout<<"chon dinh bat dau :";cin>>l;
				for (int i=0;i<n;i++)
				{
					if (l==ss[i])
					{
						k=i;
						break;
					}
					k=-1;
				}
				BFSs(k,x);
				break;
			}
		case 7:
			{
				cout<<"KET THUC"<<endl;
				break;
			}
		default:
			{
				cout<<"NHAP SAI NHAP LAI"<<endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}