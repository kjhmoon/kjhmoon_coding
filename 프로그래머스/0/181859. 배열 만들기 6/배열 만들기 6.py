def solution(arr):
    stk = []
    i = 0
    for i in arr:
        if not stk:
            stk.append(i)
        elif stk[-1] == i:
            stk.pop()
        elif stk[-1] != i:
            stk.append(i)
    return stk if stk else [-1]