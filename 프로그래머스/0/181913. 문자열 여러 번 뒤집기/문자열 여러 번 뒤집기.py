def solution(my_string, queries):
    answer_list = list(my_string)
    for s, e in queries:
        answer_list[s:e+1] = answer_list[s: e+1][::-1]
    return ''.join(answer_list)