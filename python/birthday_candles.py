def birthdayCakeCandles(arr,n):
    arr.sort()
    max = arr[-1]
    count = 0
    for i in range(n):
        if arr[-i] == max:
            count += 1
    return (count)
        






if __name__ == "__main__":
    n = int(input())
    arr = list(map(int,input().split()))
    if len(arr) != n:
        exit(1)
    
    result = birthdayCakeCandles(arr,n)
    print (result)


    