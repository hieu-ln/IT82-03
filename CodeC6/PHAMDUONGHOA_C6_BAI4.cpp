//#include<iostream>
//#include<fstream>
//using namespace std;
//const int MAX=1000;
//int a[MAX][MAX],n,res=0,ans=0;
//int m[MAX];
//bool kt[MAX];
//void inputhand(){
//	cin>>n;
//	for (int i=0;i<n;i++)
//		for (int j=0;j<n;j++)
//			cin>>a[i][j];
//}
//void inputtext(){
//	ifstream fi("map.txt");
//	fi>>n;
//	for (int i=0;i<n;i++)
//		for (int j=0;j<n;j++)
//			fi>>a[i][j];
//	fi.close();
//}
//void init(){
//	for (int i=0;i<n;i++){
//		m[i]=0;
//		kt[i]=true;
//	}
//}
//void prim(){
//	while(ans!=n){
//		int tmp=0;
//		int Min=1<<30;
//		for (int i=0;i<ans;i++)
//			for (int j=0;j<n;j++){
//				if (a[m[i]][j]!=0 && kt[j]){
//					if (a[m[i]][j]<Min){
//						Min=a[m[i]][j];
//						tmp=j;
//					}
//				}
//			}
//		kt[tmp]=false;
//		ans++;
//		res+=Min;
//		m[ans]=tmp;
//	}
//}
//int main()
//{
//	int c=0;
//	cout<<"Menu BT CHUONG 6 Bai4"<<endl;
//	cout<<"1, nhap tay"<<endl;
//	cout<<"2, nhap may"<<endl;
//	cout<<"3, khoi tao"<<endl;
//	cout<<"4 chay Prim"<<endl;
//	while (c!=5){
//		cout<<"Chon lenh :";cin>>c;
//		switch (c){
//		case 1:{
//				inputhand();
//				cout<<"Nhap thanh cong"<<endl;
//				break;
//			 }
//		case 2:{
//				inputtext();
//				cout<<"Nhap thanh cong"<<endl;
//				break;
//			 }
//		case 3:{
//				init();
//				cout<<"Khoi tao thanh cong"<<endl;
//				break;
//			 }
//		case 4:{
//				int x;
//				cout<<"Nhap dinh bat dau :";cin>>x;
//				ans=0;
//				m[ans]=x;
//				kt[x]=false;
//				ans++;
//				prim();
//				cout<<"Tong trong so = "<<res<<endl;
//				break;
//			 }
//		case 5:{
//				cout<<"Ket thuc"<<endl;
//				system("pause");
//				break;
//			 }
//		default:{
//				cout<<"Loi lenh"<<endl;
//				break;
//			 }
//		}
//	}
//	return 0;
//}