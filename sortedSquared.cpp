#include<iostream>
#include<vector>
using namespace std;
#include <algorithm>


vector<int> sortedSquared(vector<int> array){
    for (int i = 0; i < array.size(); i++){
        array[i] = array[i] * array[i];
    }
    
    sort(array.begin(), array.end());
    return array;

}

int main(){
    vector<int> array {1, -5, -3, 5, 6};
    vector<int> results = sortedSquared(array);
    
    for (auto x : results) {
        cout << x << " ";
    }


}