#include <iostream>
#include<cmath>

using namespace std;


int main() {

    int n;
    cin >> n;

   for(n;n>=1;n--)
    {
        int a, b;
        cin >> a >> b;

        for (int i = a; i <= b; i++)
        {
            if (i < 2) continue;
            bool flag = true;
            int s = sqrt(i);
            for (int j = 2; j <= s; j++)
            {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag == true) cout << i << " ";

        }
        cout << endl;
    }
}
