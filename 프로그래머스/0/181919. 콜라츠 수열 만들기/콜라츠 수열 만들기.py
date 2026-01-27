def solution(n):
    answer = []
    while True:
        if n == 1:
            answer.append(1)
            break;
        else:
            answer.append(n)
            if n % 2 == 0:
                n = n / 2
            else:
                n = 3 * n + 1
    return answer