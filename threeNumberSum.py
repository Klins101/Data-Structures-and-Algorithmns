# O(n^2) time | O(1) space

def threeNumberSum(array, targetSum):
    for i in range(len(array) - 1):
        firstNum = array[i]
        for j in range(i+1, len(array) - 1):
            secondNumber = array[j]
            thirdNumber = array[j+1]
            if firstNum + secondNumber + thirdNumber == targetSum:
                return [firstNum, secondNumber, thirdNumber]
    return []


if __name__ == "__main__":
    print(threeNumberSum(array=[5, 3, 8, 11, -7, 2, -9, 10, 7], targetSum=10))
