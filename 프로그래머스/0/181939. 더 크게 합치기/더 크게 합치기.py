def solution(a, b):
    ab_str = str(a) + str(b)
    ba_str = str(b) + str(a)

    ab_num  = int(ab_str)
    ba_num  = int(ba_str)
    if ab_num > ba_num:
        return ab_num
    else:
        return ba_num