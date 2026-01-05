def solution(num_list):
    answer = 0
    str1 = ""
    str2 = ""
    for i in range(len(num_list)):
        if num_list[i] % 2 != 0:
            str2 += str(num_list[i])
        else:
            str1 += str(num_list[i])
    answer = int(str1)+int(str2)
    return answer