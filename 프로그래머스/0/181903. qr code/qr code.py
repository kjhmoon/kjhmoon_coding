def solution(q, r, code):
    answer = ''
    for i in range(len(code)):
        temp = i % q
        if temp == r:  
            answer += code[i]
    return answer