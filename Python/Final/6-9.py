def count_digit(n, d):
    return str(n).count(str(d))

n, d = map(int, input().split())
c = count_digit(n, d)
print(f'Number of digit {d} in {n}: {c}')