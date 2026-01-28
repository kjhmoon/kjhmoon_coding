from collections import Counter

def solution(a, b, c, d):
    nums = [a,b,c,d]
    counts = Counter(nums)
    sorted_counts = counts.most_common()
    
    if len(counts) == 1:
        p = sorted_counts[0][0]
        return 1111*p
    
    elif len(counts) == 2:
        p = sorted_counts[0][0]
        q = sorted_counts[1][0]
        
        if sorted_counts[0][1] == sorted_counts[1][1]:
            return (p+q)*abs(p-q)
        else:
            return (10*p+q)**2
        
    elif len(counts) == 3:
        q = sorted_counts[1][0]
        r = sorted_counts[2][0]
        return q*r 
    
    elif len(counts) == 4:
        return min(nums)