def solution(intStrs, k, s, l):
    answer = []
    for string in intStrs: 
        sub_string = string[s : s + l]
        if k < int(sub_string):
            answer.append(int(sub_string))
    return answer