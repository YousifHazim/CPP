#include <iostream>

using namespace std;

void print(int number);

int main()
{
    int number;cin>>number;
    print(number);
    return 0;
}

void print(int number){

    if(number == 1){
        cout<<number;
        return;
    }


    cout<<number<<" ";

    print(--number);
}
