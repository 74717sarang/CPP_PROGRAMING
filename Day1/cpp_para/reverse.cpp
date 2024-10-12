#include <iostream>
using namespace std;
int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter no:" << endl;
        cin >> arr[i];
    }

    for (int j = 4; j >= 0; j--)
    {
       cout<<"  "<<arr[j];

    }
}
