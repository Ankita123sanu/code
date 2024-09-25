#include<iostream>
using namespace std;
void modifyValue(int num) {
    num = 20; // yeh sirf 'num' ki copy ko change karega, asli variable ko nahi
}

int main() {
    int x = 10; // yeh asli variable hai
    modifyValue(x); // 'x' ki value 10 pass hoti hai, lekin sirf uski copy modify hoti hai
    cout << x; // Output: 10, kyunki asli 'x' unchanged raha
    return 0;
}