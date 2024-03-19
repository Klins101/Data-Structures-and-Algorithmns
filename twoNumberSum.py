
# O(n^2) time | O(1) space


def twoNumberSum(array, targetSum):
    for i in range(len(array) - 1):
        firstNum = array[i]
        for j in range(i+1, len(array) - 1):
            secondNumber = array[j]
            if firstNum + secondNumber == targetSum:
                return [firstNum, secondNumber]
    return []

# O(nlog(n)) | O(1) space


def twoNumberSum1(array, targetSum):
    array.sort()
    left = 0
    right = len(array) - 1
    while left < right:
        currentSum = array[left] + array[right]
        if currentSum == targetSum:
            return [array[left], array[right]]
        elif currentSum < targetSum:
            left += 1
        else:
            right -= 1
    return []


if __name__ == "__main__":
    print(twoNumberSum(array=[5, 3, 8, 11, -7, 2, -1, 10, 7], targetSum=10))
    print(twoNumberSum1(array=[5, 3, 8, 11, -7, 2, -1, 10, 7], targetSum=10))
