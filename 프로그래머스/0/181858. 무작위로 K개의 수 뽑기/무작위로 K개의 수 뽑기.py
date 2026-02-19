def solution(arr, k):
    answer = []
    for i in arr:
        if not i in answer:
            answer.append(i)
    if len(answer) < k:
        for _ in range(k - len(answer)):
            answer.append(-1)
    else:
        answer = answer[0:k]
    return answer