def solution(a, d, included):
    ret = 0
    for i in range(len(included)):
        if included[i]:
            ret += a
        a = a + d
    return ret
            