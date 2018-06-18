
#include<iostream>

using namespace std;

template <typename X>
class ans{
	X ans; 
};

class Me{
	
	X phone_no;
public:
	Me(X p)
	{
		phone_no = p;
	}
};
int main()
{

	Me m(7229);
	ans<Me> a;

}