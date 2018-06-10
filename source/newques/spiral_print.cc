#include <iostream>


using namespace std;

int input_array(int a[][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) cin >> a[r][c];
    }
}

void spiralPrint(int a[][100], int m, int n)
{
    int i, k = 0, l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            cout << a[k][i];
        }
        k++;


        for (i = k; i < m; ++i)
        {
            cout << a[i][n - 1];
        }
        n--;

        if ( k < m)
        {
            for (i = n - 1; i >= l; --i)
            {
                cout << a[m - 1][i];
            }
            m--;
        }


        if (l < n)
        {
            for (i = m - 1; i >= k; --i)
            {
                cout << a[i][l];
            }
            l++;
        }
    }
}


int main()
{
    int a[100][100], r, c;
    cin>>r>>c;
    input_array(a, r, c);
    spiralPrint(a, r, c);
    return 0;
}