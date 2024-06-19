import random


def estimate_pi(seed, num_points):
    random.seed(seed)
    inside_circle = 0

    for _ in range(num_points):
        x = random.uniform(-1, 1)
        y = random.uniform(-1, 1)
        if x ** 2 + y ** 2 <= 1:
            inside_circle += 1

    pi_estimate = (inside_circle / num_points) * 4
    return round(pi_estimate, 8)


# 获取输入
seed, num_points = map(int, input().split())

# 估算圆周率
pi_estimate = estimate_pi(seed, num_points)

# 输出圆周率估算值
print(f"{pi_estimate:.8f}")
