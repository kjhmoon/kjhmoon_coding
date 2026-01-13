def solution(numLog):
    answer = ''
    for front, back in zip(numLog, numLog[1:]):
        if back - front == 1:
            answer += 'w'
        elif back - front == -1:
            answer += 's'
        elif back - front == 10:
            answer += 'd'
        elif back - front == -10:
            answer += 'a'
    return answer