#include <iostream>
using namespace std;
int main() {
    int a ,b,c,d;
    cin>>a>>b>>c>>d;
    if (a+b+c==d) {
        cout << "yes ," <<a+b+c;
    } else if (a-b-c==d){
        cout << "yes ,"<< a-b-c;
    }else if (a*b*c==d){
        cout << "yes , "<<a*b*c;
    }else{
        cout << "no";
    }
}