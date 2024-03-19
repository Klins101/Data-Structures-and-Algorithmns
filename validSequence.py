# O(n) time | O(1) space

def validSequence(array, sequence):
    arrIdx = 0
    seqIdx = 0
    while arrIdx < len(array) and seqIdx < len(sequence):
        if array[arrIdx] == sequence[seqIdx]:
            seqIdx += 1
        arrIdx += 1
    return seqIdx == len(sequence)


if __name__ == "__main__":
    print(validSequence(array=[5, 3, 8, 11, -7,
          2, -1, 10, 7], sequence=[3, 2, 10, 7]))
