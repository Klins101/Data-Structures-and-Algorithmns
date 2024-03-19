def twoNumberSum(array, targetSum):
    for i in range(len(array) - 1):
        firstNum = array[i]
        for j in range(i+1, len(array) - 1):
            secondNumber = array[j]
            if firstNum + secondNumber == targetSum:
                return [firstNum, secondNumber]
    return []


if __name__ == "__main__":
    print(twoNumberSum(array=[5, 3, 8, 11, -7, 2, -1], targetSum=10))
