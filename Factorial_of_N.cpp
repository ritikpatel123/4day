#include <iostream>
using namespace std;

int fun(int i)
{
    if(i==0) return 1;
    return i*fun(i-1);
}

int main() {
    int n;
    cin>>n;
    cout<<fun(n);

    return 0;
}
