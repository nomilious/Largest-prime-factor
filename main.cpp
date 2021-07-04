#include <iostream>
#include <cmath>
using namespace std;
int max(int, int);
int main(){
    long long int  a = 600851475143, c=1, b;
    while (a != 1)
        for(b=2; ;b++)
            if (!(a % b)){
                a /=b;
                c = max(c, b);
                break;
            }
    cout << "result:\t"<< c << endl;
    return 1;
}
int max(int a, int b) {
    return (a > b)? a: b;
}
