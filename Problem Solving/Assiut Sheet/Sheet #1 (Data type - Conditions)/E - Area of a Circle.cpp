#include <iostream>
#include<iomanip>
#include<math.h>

using namespace std;

const double pi = 3.141592653;

int main()
{
    double R;cin>>R;

    cout<< fixed << setprecision(9) <<pi*pow(R,2)<<endl;

    return 0;
}
