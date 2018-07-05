#include <iostream>
using namespace std;


template<typename T, typename Y>
void bubbleSort(T arr[], int n, Y compare){
    for(int i = 0; i < n - 1; ++i){
        for(int cur = 0; cur < n - i - 1; ++cur){
            if (compare(arr[i], arr[i+1])){
                // it returns true if arr[i] > arr[i + 1]
                swap(arr[cur], arr[cur + 1]);
            }
        }
    }
}

class Elephant{
public:
    int wt;
    char name[20];
};

bool compareMyElepnant(Elephant A, Elephant B){
    return A.wt > B.wt;
}

bool compareInt(int x, int y){
    return x > y;
}

template<typename T>
void print(T arr[], int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void printGeneric(T name)
{
    
}


int main() {
    int arr_int[] = {3,2,1};
    char arr_char[] = {'a','b','c'};

    bubbleSort(arr_char, 3, compareInt);
    // print<char>(arr_char, 3);
    // cout << endl;

    // bubbleSort(arr_int, 3);
    // print(arr_int, 3);
    // cout << endl;

    Elephant E[] = {
        {1600, "Hatchi"},
        {1500, "Rocky"},
        {1000, "Jumbo"}
    };
    
    bubbleSort(E, 3, compareMyElepnant);
    // print(E, 3);

}