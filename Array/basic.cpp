#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cout<<"The array element is: \n";
        cin>>i>>arr[i];
        
    }
    cout<<"The array element is: \n";
    for(int i=0;i<n;i++){
        cout<<i<<"= "<< arr[i] << endl;
    }
    return 0;
}