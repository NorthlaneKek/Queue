#include "stdafx.h"
#include "TQueue.h"
#include <ctime>

void main()
{
	srand ( time(NULL) );  
	setlocale(LC_ALL, "Russian");
	cout<<"������� ������ �������: ";
	int Size;
	cin>>Size;
	Tqueue <int> Q(Size);
	double p,q;
	cout<<"������� ����������� ����������: ";
	cin>>p;
	p=p*100;
	cout<<"������� ����������� ���������� ��������: ";
	cin>>q;
	q=q*100;
    while (Q.GetLen()< Q.GetMaxSize())
	{
		double p1 = rand()%100+1;
		double q1 = rand()%100+1;
		if (p1<p)
		{
			Q.Push(p1);
			cout<<Q;
		}
		if (q1<q)
		{
			if (Q.GetLen()!=0)
			{
			int tmp = Q.Pop();
			cout<<Q;
		}
		}
	}
}
