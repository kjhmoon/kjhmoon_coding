def solution(l, r):
    answer = []
    for i in range(l,r+1):
        num = set(str(i))
        if not (num - {'0', '5'}):
            answer.append(i)
    if not answer:
        answer.append(-1)
    return answer