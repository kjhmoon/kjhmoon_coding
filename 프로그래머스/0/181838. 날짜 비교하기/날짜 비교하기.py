def solution(date1, date2):
    for a,b in zip(date1,date2):
        if a < b:
            return 1
        if a > b:
            return 0
    return 0

            
