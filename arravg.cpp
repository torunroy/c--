#include <iostream>
using namespace std;
int main(){
    int arr[34]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25,26,27,28,29,30,31,32,33,34};
    double avg,sum=0;
    int len=sizeof(arr)/4;
    for(int i :arr){
        sum+=i;
    }
    avg=sum/len;
    cout<<"The average of the array is: "<<avg<<endl;
    cout<<"The sum of the array is: "<<sum<<endl;
    }
