#include <iostream>
using namespace std;

int fun(string str,int i,int n)
{
    if(i>=n/2 )  return true;

     if(str[i] != str[n-i-1]) 
        return false;
   return fun(str,i+1,n);

}

int main() {
    string str="abbaa";
    int size=5;
    bool flag=fun(str,0,size);
     if (flag==true){cout<<"this string is pallindrome";}
       else cout<<"this string is not a pallindrome";

    return 0;
}
