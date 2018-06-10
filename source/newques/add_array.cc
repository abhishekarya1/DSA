#include <iostream>
using namespace std;
 
int input_array(int *arr, int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}

int calSumUtil(int a[], int b[], int n, int m)
{
    int sum[n];
 
    int i = n - 1, j = m - 1, k = n - 1;
 
    int carry = 0, s = 0;
 
    while (j >= 0) {
        s = a[i] + b[j] + carry;
        sum[k] = (s % 10);

        carry = s / 10;
 
        k--;
        i--;
        j--;
    }
 
    while (i >= 0) {
        s = a[i] + carry;
        sum[k] = (s % 10);
        carry = s / 10;
 
        i--;
        k--;
    }
 
    int ans = 0;

    if (carry)
        ans = 10;
 

    for (int i = 0; i <= n - 1; i++) cout<<sum[i];
}
 
int calSum(int a[], int b[], int n, int m)
{

    if (n >= m)
        return calSumUtil(a, b, n, m);
 
    else
        return calSumUtil(b, a, m, n);
}
 
int main()
{
    int a[10]; int b[10]; int m; int n;
    cin>>m>>n;
    input_array(a,m);
    input_array(b,n);
 
    cout << calSum(a, b, n, m) << endl;
 
    return 0;
}