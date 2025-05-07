#include <iostream>
using namespace std;
int main() {
    // Declare an array of integers
    int arr[10] = {1, 2, 3, 4, 5,7,8,9,10};

    // Output: Display array elements using a for loop
    cout << "The array elements are: \n";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<sizeof(arr)/4<<endl;

    return 0;
}