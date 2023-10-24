#include <iostream>
using namespace std;
int main() {
   int i,j,x,s;
   cout<<"enter two numbers :";
   cin>>i>>j;
    for ( x = i+1; x <=j-1 ; ++x) {
    for ( s = 2; s <=x-1 ; ++s) {
           if(x%s==0)
               break;
        }
        if(s==x)
            cout<<x<<" ";
    }
    return 0;
}
