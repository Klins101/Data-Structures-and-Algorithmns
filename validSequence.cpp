#include <iostream>
using namespace std;
#include <vector>


bool validSequence(vector<int> array, vector<int> sequence){
    int arrayIdx = 0;
    int seqIdx = 0;
    while (arrayIdx < array.size() && seqIdx < sequence.size()){
        if (array[arrayIdx] == sequence[seqIdx]){
            seqIdx += 1;
            

        }
        arrayIdx += 1;
    }
    return seqIdx == sequence.size();

}

int main(){
    vector<int> array {3, 5, 1, 22, 25, 4, 8, -1, 16};
    vector<int> sequence {1, 25, 8, -1 };
    bool results = validSequence(array, sequence);
    cout << results;

}