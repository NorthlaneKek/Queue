#include "stdafx.h"
#include "TQueue.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	Tqueue <int> q(3);
	int v, c, m;
	cout<<"Введите элементы: ";
	cin>>v>>c>>m;
	q.Push(v);
	q.Push(c);
	q.Push(m);
	cout<<q;
	int s = q.Pop();
	cout<<"\n";
	cout<<"Состояние очереди после выталкивания первого элемента:\n"<<q;
}
