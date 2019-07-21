//#include <iostream>
//using namespace std;
//struct node
//{
//	int hs, sm;
//	node *next;
//};
//struct list
//{
//	node *head, *tail;
//};
//void init(list &l)
//{
//	l.head = l.tail = NULL;
//}
//node *creatNode(int h, int s)
//{
//	node *p = new node;
//	if (p == NULL)
//		exit(1);
//	p->sm = s;
//	p->hs = h;
//	p->next = NULL;
//	return p;
//}
//void addtail(list &l, node *p)
//{
//	if (l.head == NULL)
//		l.head = l.tail = p;
//	else
//	{
//		l.tail->next = p;
//		l.tail = p;
//	}
//}
//void nhap(list &l)
//{
//	int x, n;
//	node *p;
//	cout << "Nhap bac cua thuc: ";
//	cin >> n;
//	for (int i = n; i >= 0; i--)
//	{
//		cout << "nhap he so cua x^" << i << ": ";
//		cin >> x;
//		p = creatNode(x, i);
//		addtail(l, p);
//	}
//}
//void cong(list &l, list l1, list l2)
//{
//	node *p = new node, *q = new node;
//	if (l1.head->sm > l2.head->sm)
//	{
//		l = l1;
//		p = l2.head;
//	}
//	else
//	{
//		l = l2;
//		p = l1.head;
//	}
//	q = l.head;
//	while (q->sm > p->sm)
//		q = q->next;
//	while (q != NULL)
//	{
//		q->hs += p->hs;
//		p = p->next;
//		q = q->next;
//	}
//}
//void xuat(list l)
//{
//	node *p = l.head;
//	while (p != NULL)
//	{
//		if (p->sm == 0)
//			cout << p->hs;
//		else
//			if (p->hs != 0)
//				cout << p->hs << "x^" << p->sm << " + ";
//		p = p->next;
//	}
//	cout << endl;
//}	
//int main()
//{
//	list l, l1, l2;
//	init(l);
//	init(l1);
//	init(l2);
//	cout << "Nhap P(x): ";
//	nhap(l1);
//	cout << "P(x) = ";
//	xuat(l1);
//	cout << "Nhap Q(x): ";
//	nhap(l2);
//	cout << "Q(x) = ";
//	xuat(l2);
//	cong(l, l1, l2);
//	cout << "\nR(x) = ";
//	xuat(l);
//	system("pause");
//	return 0;
//}