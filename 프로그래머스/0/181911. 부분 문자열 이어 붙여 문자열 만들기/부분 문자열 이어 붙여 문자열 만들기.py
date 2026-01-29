def solution(my_strings, parts):
    answer = ''
    for i, string in enumerate(my_strings):
        s, e = parts[i]
        answer += string[s:e+1]
    return answer