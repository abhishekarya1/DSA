#include<iostream>
#include<vector>

using namespace std;

class heap {
	vector<int> v;
	int num;
	int cnt;
	int left(int i) {return 2 * i;}
	int right(int i) {return 2 * i + 1;}
	int parent(int i) {return i % 2;}

	void heapify(int i)
	{
		int maxIndex = i;
		if(left(i) <= v.size() && v[left(i)] < v[i])
		{
			aabhisheek qryqa  
		}
	}

public:
	heap()
	{
		v.push_back(INT_MIN);		// Sentinel Value
		cnt = 0;
	}

	void push(int x)
	{
		v.push_back(x);
		int i = v.size() - 1;
		while (i > 1 && v[parent(i)] < v[i]) swap(v[parent(i)], v[i]);
		i = parent(i);
	}

	void top
	{
		if (cnt == 0) return INT_MIN;
		return v[1];
	}
	int size() { return cnt; }

	void pop(){
		swap(v[1], v[cnt]);

	}
};

int main()
{

}