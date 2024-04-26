use = int(input())
if use < 0:
    print("Invalid Value!")
else:
    if use < 50:
        print("cost = %.2f" % (0.53 * use))
    else:
        print("cost = %.2f" % (0.53 * 50 + (use - 50) * 0.58))