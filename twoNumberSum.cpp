#include <iostream>
#include <vector> 
using namespace std;

vector<int> sumNum(vector<int> array, int targetSum){
    for (int i=0; i <= array.size() - 1; i++){
        int firstNumber = array[i];
        
        for (int j = i+1; j <= array.size(); j++ ){
            int secondNumber = array[j];
            
            if (firstNumber + secondNumber == targetSum){
                return vector<int>{firstNumber, secondNumber};
            }
        }
    }
    return {};
}


    

int main()
{
    vector<int> array = {1, 2, 3, 4, 7};
    int targetSum = 10;
    vector<int> result = sumNum(array, targetSum);

    if (!result.empty()) {
        cout << "Pair found: " << result[0] << ", " << result[1] << std::endl;
    } else {
        cout << "No pair found" << std::endl;
    }

    return 0;
}