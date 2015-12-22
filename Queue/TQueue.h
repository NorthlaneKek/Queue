#pragma once 
#include <iostream>

using namespace std;
template <class T>
class Tqueue
{
private:
	int begin, end, len, MaxSize;
		T *mas;
public:
	Tqueue (int _MaxSize=10)
	{
		MaxSize = _MaxSize;
		mas = new T[MaxSize];
		begin = 0;
		end = -1;
		len = 0;
	}
	~Tqueue()
	{
		delete[]mas;
	}

	Tqueue (const Tqueue &Q)
	{
		MaxSize = Q.MaxSize;
		begin = Q.begin;
		len = Q.len;
		end = Q.end;
	}
	
	bool IsEmpty()
	{
		return (len==0);
	}

	bool IsFull()
	{
		return (len==MaxSize);
	}

	void Push(const T n)
	{
		if (end < MaxSize-1)
			end++;
		else end = 0;
		mas[end] = n;
		len++;
	}

	T Pop()
	{
		T tmp = mas[begin];
		if (IsEmpty())
		{
			cout<<"Очередь пуста ";
			throw -1;
		}
		else 
		{
		if (begin < MaxSize-1)
			begin++;
		else 
			begin = 0;
		}
		len--;
		return tmp;
	}

	T Top()
	{ 
		if (IsEmpty())
		{
			cout<<"kek";
			throw -1;
		}
		return mas[begin];ffff
	}

	friend ostream& operator<<(ostream &out, const Tqueue <T> &q)
	{
		out << "Количество элементов в очереди: " << q.len << '\n';
		if (q.len == 0)
			out << "Очередь пуста\n";
		else
		{
			out << "Очередь: ";
			for (int i = 0; i < q.len; i++)
				out << q.mas[i] << " ";
			out << '\n';
			return out;
		}
	}
	int GetLen()
	{
		return len;
	}

	int GetMaxSize()
	{
		return MaxSize;
	}

};


