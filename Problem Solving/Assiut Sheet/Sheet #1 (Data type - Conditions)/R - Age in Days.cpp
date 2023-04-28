#include <iostream>

using namespace std;

int main()
{
    int number;cin>>number; // 400
    int counter;

    int year = number/365; // 1
    counter = number - (year * 365); // 35
    int months = (counter / 30); // 1
    counter -= (months * 30); // 5
    int days = counter; // 5

    cout<<year<<" years"<<endl<<months<<" months"<<endl<<days<<" days"<<endl;

    return 0;
}
