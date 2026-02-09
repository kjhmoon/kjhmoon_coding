def solution(num_list, n):
        num_sub = num_list[0:n]
        num_list = num_list[n:]
        answer = num_list + num_sub
        return answer