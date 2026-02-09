def solution(arr, query):
    for i in range(len(query)):
        if i % 2 == 0:
            num = query[i]
            arr = arr[0:num+1]           
        else:
            num = query[i]
            arr = arr[num:]     
    return arr