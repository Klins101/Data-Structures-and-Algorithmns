#include <iostream>
using namespace std;

int sumBetween(int m, int n){
    int sum = 0;
    for (int i = m; i <= n; i++){
        sum += i;

    }
    return sum;
}

int main(){
    int m = 4; 
    int n = 10;
    int results = sumBetween(m, n);
    cout << "Sum: " << results << endl;
}