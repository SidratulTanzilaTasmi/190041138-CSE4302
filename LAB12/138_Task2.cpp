#include <bits/stdc++.h>
using namespace std;
const int size = 10;
template <class Type>
Type amax(Type arr[], int size, int n)
{
    Type temp_arr[size];
    copy(arr, arr + size, temp_arr);
    sort(temp_arr, temp_arr + size, greater<Type>());
    return temp_arr[n - 1];
}

int main()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int n;
    cout << "index: ";
    cin >> n;
    cout <<n<<"th largest element: " << amax(arr, size, n) << endl;
    return 0;
}
