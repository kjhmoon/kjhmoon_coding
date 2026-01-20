def solution(arr, queries):
    answer = []
    found_values = []
    
    for s,e,k in queries:    
        
        for int in arr[s:e+1]:
            if int > k:
                found_values.append(int)
                
        if found_values:
            answer.append(min(found_values))
            found_values = []
        else:
            answer.append(-1)
            
    return answer