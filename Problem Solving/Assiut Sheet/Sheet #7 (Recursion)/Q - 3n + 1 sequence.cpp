#include <iostream>

using namespace std;

void sequence(int number);
int counter = 0;

int main()
{
    int number; cin>>number;
    sequence(number);
    cout<<counter<<endl;
    return 0;
}

void sequence(int number){

    counter++;

    if(number == 1)
        return;

    if(number % 2 == 0)
        sequence(number /= 2);
    else
        sequence((3*number + 1));

}
