def solution(myStr):
    table = myStr.maketrans({'a':' ', 'b': ' ', 'c': ' '})
    result = myStr.translate(table).split()
    
    return result if result else ["EMPTY"]