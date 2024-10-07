#include <iostream>
using namespace std;

void modifyValue(int x){
    x = 10;  
}

int main(){
    int y = 100;
    modifyValue(y);
    cout << y << endl;  // Will still print 100
    return 0;
}



