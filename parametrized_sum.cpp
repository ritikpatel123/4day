#include <iostream>
using namespace std;

int fun(int i,int sum)
{
    if(i<1) 
    {
        cout<<sum;
    return 0;
    }
    fun(i-1,sum+i);
}
int main() {

  fun(5,0);

    return 0;
}
