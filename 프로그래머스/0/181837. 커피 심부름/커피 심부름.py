def solution(order):
    answer = 0
    A , B = 0, 0
    for str_coffe in order:
        if "americano" in str_coffe or "anything" in str_coffe:
            A += 1
        elif "cafelatte" in str_coffe:
            B += 1
    return (A*4500) + (B*5000)