#include <iostream>

int Policz(int a, int b){
    return a * b;
}

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    cout<<"W drugim branchu; 2 * 3 = "<<Policz(2, 3)<<endl;
    return 0;
}
