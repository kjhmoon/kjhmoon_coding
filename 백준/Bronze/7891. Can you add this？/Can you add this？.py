import sys

def main():
    t = int(sys.stdin.readline().strip())  # 테스트 케이스 개수 입력
    
    for _ in range(t):
        a, b = map(int, sys.stdin.readline().split())  # 두 정수 입력
        print(a + b)  # 합 출력

if __name__ == "__main__":
    main()
