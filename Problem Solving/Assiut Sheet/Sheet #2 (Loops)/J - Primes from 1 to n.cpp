#include <iostream>

using namespace std;

int prime(int num){

    for(int i=2; i<=num/2 ; i++){
        if(num % i == 0 )
            return -1;
    }
    return num;
}

int main()
{
    int number;cin>>number;
    int counter=0;

    for(int i=2 ; i <= number ; i++){

        int result = prime(i);
        if(result != -1)
            cout<<result<<" ";

    }

    return 0;
}
