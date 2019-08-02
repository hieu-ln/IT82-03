void searchStandFor(node *&p, node *&q)
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