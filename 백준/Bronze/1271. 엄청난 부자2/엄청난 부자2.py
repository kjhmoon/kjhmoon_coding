import sys

n, m = map(int, input().split())

if m == 0:
    print(n)
    print(n)
    sys.exit()

if n == 0:
    print(0)
    print(0)
    sys.exit()

print(n // m)
print(n % m)
