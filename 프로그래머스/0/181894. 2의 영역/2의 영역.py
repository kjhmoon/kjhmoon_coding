def solution(arr):
    answer = []
    arr_num = []
    for i in range(len(arr)):
        if arr[i] == 2:
            arr_num.append(i)
    if not arr_num:
        return [-1]
    start = arr_num[0]
    end = arr_num[-1]
    if len(arr) == 1:
        return 2
    else:
        answer += arr[start:end+1]
    return answer