#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int x;
    int sum=0;
    while (true){
        cin >> x;
        if (x<=100){
            sum=sum+x;
        }
        else {
            break;
        }
    }
    cout << sum;
    return 0;
}