def solution(myString):
    answer = ''
    for char in myString:
        if char == " ":
            answer += " "
        elif char == "a" or char == "A": 
            answer += "A"
        elif char.islower():
            answer += char
        elif char != "A" and char.isupper():
            answer += char.lower()
    return answer