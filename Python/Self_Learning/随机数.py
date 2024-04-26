import random
num = random.randint(1, 10)
print(num)
guess_num = int(input("num = "))
if guess_num == num:
    print("right")
elif guess_num >num:
    print("big")
else:
    print("small")
