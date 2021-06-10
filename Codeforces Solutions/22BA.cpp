#include<iostream>
using namespace std;

int main()
{
    unsigned int a,b,c,d;
    int count = 1;
    cin >> a >> b >> c >> d;

    if (b != a){
        count++;
    }
    if (c != a && c != b){
        count++;
    }
    if (d != a && d != b && d != c){
        count++;
    }

    cout << 4-count;
}
