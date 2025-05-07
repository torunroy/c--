#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of your cupons : ";
    cin>>n;
    switch (n)
    {
        case 1:
            cout<<"Congralutations !\n"<<"You have won the Dairy Mil\n";
            break;
    case 2:
            cout<<"Congralutations !\n"<<"You have won the 5$ gift card\n";
            break;
    case 3: 
            cout<<"Congralutations !\n"<<"You have won the 10$ gift card\n";
            break;
    case 4:
            cout<<"Congralutations !\n"<<"You have won the 20$ gift card\n";
            break;
    case 5: 
            cout<<"Congralutations !\n"<<"You have won the 50$ gift card\n";
            break;
    default:
            cout<<"Sorry Sir !\n"<< "You have not won anything\n"<<"Better luck next time\n";
            cout<<"You can try again by entering the number of your cupons\n";
            break;

    }

}