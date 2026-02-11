def solution(arr):
    answer = 0
    while True:
        arr_sub_1 = []
        for i in arr:
            if i >= 50 and i % 2 == 0:
                i = i / 2
                arr_sub_1.append(i)
            elif i < 50 and i % 2 != 0:
                i = i * 2 + 1
                arr_sub_1.append(i)
            else:
                arr_sub_1.append(i)
                
        if arr == arr_sub_1:
            return answer
        
        answer += 1
        arr = arr_sub_1
