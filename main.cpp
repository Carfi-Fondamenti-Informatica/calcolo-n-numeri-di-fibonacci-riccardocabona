#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int a=0;
    int b=1;
    if(n>=2) {
        cout << 1 << endl;
        for (int i = 1; i < n; i++) {
            int c = 0;
            c = a + b;
            a=b;
            b=c;
            cout << c << endl;
        }
    }else{
        cout<<"errore";
    }
    return 0;
}
