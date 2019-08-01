//#include <iomanip>
//#include <iostream>
//using namespace std;
//struct node
//{
//	int info;
//	node *left, *right;
//};
//node *root;
//void tree_empty()
//{
//	root = NULL;
//}
//void insert(node *&p, int x)
//{
//	if (p == NULL)
//	{
//		p = new node;
//		p->info = x;
//		p->left = p->right = NULL;
//	}
//	else
//	{
//		if (p->info == x)
//			return;
//		else if (p->info > x)
//			return insert(p->left, x);
//		else
//			return insert(p->right, x);
//	}
//}
//void duyet_LNR(node *p)
//{
//	if (p != NULL)
//	{
//		duyet_LNR(p->left);
//		cout << setw(4) << p->info;
//		duyet_LNR(p->right);
//	}
//}
//void duyet_NLR(node *p)
//{
//	if (p != NULL)
//	{
//		cout << setw(4) << p->info;
//		duyet_NLR(p->left);
//		duyet_NLR(p->right);
//	}
//}
//void duyet_LRN(node *p)
//{
//	if (p != NULL)
//	{
//		duyet_LRN(p->left);
//		duyet_LRN(p->right);
//		cout << setw(4) << p->info;
//	}
//}
//node *search_DQ(node *p, int x)
//{
//	if (p != NULL)
//	{
//		if (p->info == x)
//			return p;
//		else
//		{
//			if (x > p->info)
//				return search_DQ(p->right, x);
//			else
//				return search_DQ(p->left, x);
//		}
//	}
//	return NULL;
//}
//void searchStandFor(node *&p, node *&q)
//{
//	if (q->left == NULL)
//	{
//		p->info = q->info;
//		p = q;
//		q = q->right;
//	}
//	else
//		searchStandFor(p, q->left);
//}
//int Delete(node *&T, int x)
//{
//	if (T == NULL)
//		return 0;
//	if (T->info == x)
//	{
//		node *p = T;
//		if (T->left == NULL)
//			T = T->right;
//		else if (T->right == NULL)
//			T = T->left;
//		else
//			searchStandFor(p, T->right);
//		delete p;
//		return 1;
//	}
//	if (T->info < x)
//		return Delete(T->right, x);
//	if (T->info > x)
//		return Delete(T->left, x);
//	return -1;
//}
//int main()
//{
//	cout << "---------- BAI TAP 1, CHUONG 4, CAY NHI PHAN ----------	" << endl;
//	cout << "1. Khoi tao cay rong." << endl;
//	cout << "2. Them phan tu vao cay." << endl;
//	cout << "3. Tim phan thu trong cay." << endl;
//	cout << "4. Xoa node trong cay." << endl;
//	cout << "5. Duyet cay theo NLR." << endl;
//	cout << "6. Duyet cay theo LNR." << endl;
//	cout << "7. Duyet cay theo LRN." << endl;
//	cout << "8. Thoat" << endl;
//	int n, i = 0, choice, kt;
//	node *p;
//	do {
//		cout << "Chon muc: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			tree_empty();
//			cout << "Da khoi ta cay rong thanh cong!" << endl;
//			break;
//		case 2:
//			cout << "Nhap node thu " << i++ << ": ";
//			cin >> n;
//			insert(root, n);
//			break;
//		case 3:
//			cout << "Nhap node muon tim: ";
//			cin >> n;
//			p = search_DQ(root, n);
//			if (p == NULL)
//				cout << "Khong tim thay!" << endl;
//			else
//				cout << "Node " << n << " co trong cay nhi phan!" << endl;
//			break;
//		case 4:
//			cout << "Nhap node muon xoa: ";
//			cin >> n;
//			kt = Delete(root, n);
//			if (kt != 0)
//				cout << "da xoa thanh cong!" << endl;
//			else
//				cout << "node vua nhap khong co trong cay!" << endl;
//			break;
//		case 5:
//			cout << "KQ duyet_NLR: ";
//			duyet_NLR(root);
//			cout << endl;
//			break;
//		case 6:
//			cout << "KQ duyet_LNR: ";
//			duyet_LNR(root);
//			cout << endl;
//			break;
//		case 7:
//			cout << "KQ duyet_LRN: ";
//			duyet_LRN(root);
//			cout << endl;
//			break;
//		case 8:
//			cout << "Tam biet!" << endl;
//			break;
//		default:
//			cout << "Nhap sai, nhap lai!" << endl;
//			break;
//		}
//	} while (choice != 8);
//	system("pause");
//	return 0;
//}