// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int fun(int n)
{
    if(n<=1)   return n;
    int ans= fun(n-1)+fun(n-2);
    return ans;
}

int main() {
    
    cout<<fun(3);
    return 0;
}
