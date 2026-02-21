def solution(rank, attendance):
    rank_sort = []
    for i in range(len(attendance)):
        if attendance[i] == True:
            rank_sort.append((rank[i],i))
    rank_sort.sort()
    a,b,c = [x[1] for x in rank_sort[:3]]
    return 10000 * a + 100 * b + c