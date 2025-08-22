import sys
from collections import deque

n = int(sys.stdin.readline())
S = deque()

for _ in range(n):
    command = sys.stdin.readline().split()
    cmd = command[0]

    if cmd == "push":
        S.append(int(command[1]))
    elif cmd == "pop":
        if not S:
            print(-1)
        else:
            print(S.popleft())
    elif cmd == "size":
        print(len(S))
    elif cmd == "empty":
        if not S:
            print(1)
        else:
            print(0)
    elif cmd == "front":
        if not S:
            print(-1)
        else:
            print(S[0])
    elif cmd == "back":
        if not S:
            print(-1)
        else:
            print(S[-1])