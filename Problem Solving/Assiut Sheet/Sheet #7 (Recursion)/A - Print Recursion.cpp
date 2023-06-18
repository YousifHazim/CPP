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

    if(number == 0)
        return;

        cout<<"I love Recursion"<<endl;

    return print(number-1);
}
