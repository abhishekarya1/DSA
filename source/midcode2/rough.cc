#include<iostream>

using namespace std;

void findpair(int arr[], int len, int sum)
{
    std::sort(arr, len); // sort the input array
    int i = 0;
    int j = len -1;
    while( i < j){
        while((arr[i] + arr[j]) <= sum && i < j)
        {
            if((arr[i] + arr[j]) == sum)
                cout << arr[i] << "," << arr[j];
            i++;
        }
        j--;
        while((arr[i] + arr[j]) >= sum && i < j)
        {
            if((arr[i] + arr[j]) == sum)
                cout << arr[i] << "," << arr[j];
            j--;
        }
    }
}
// main program to test the above function
int main()
{
    int arr [10] = {1,2,3,4,5,6,7,8,9,10};
    findpair(arr, 10, 7);
}
