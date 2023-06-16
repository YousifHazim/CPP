#include <iostream>

using namespace std;

int counter = 1;
int anotherNumber;
bool isFirst = true;

void print(int number);

int main()
{
    int number;cin>>number;
    print(number);
    return 0;
}

void print(int number){

    if(isFirst)
        anotherNumber = number;

    if(counter <= anotherNumber){
        isFirst = false;
        cout<<counter<<endl;
        counter++;
    }else{
        return;
    }

    print(number-1);
}
