def parse_time(time_str):
    try:
        hh, mm = map(int, time_str.split(':'))
        if 0 <= hh < 24 and 0 <= mm < 60:
            return hh * 60 + mm
        else:
            return None
    except ValueError:
        return None


def format_time(minutes):
    hh = minutes // 60
    mm = minutes % 60
    return f"{hh}:{mm:02d}"


def time_difference(time1, time2):
    minutes1 = parse_time(time1)
    minutes2 = parse_time(time2)

    if minutes1 is None or minutes2 is None:
        return "Illegal Time"

    # Calculate the difference in minutes
    if minutes2 < minutes1:
        minutes2 += 24 * 60  # Add 24 hours in minutes to the second time

    diff = minutes2 - minutes1
    return format_time(diff)


# 获取输入
time1, time2 = input().split()

# 计算并输出时间间隔
print(time_difference(time1, time2))
