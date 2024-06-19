lst1 = input().split()
lst2 = input().split()
my_dict = dict()
for i in range(len(lst1)):
    my_dict.update({lst1[i] : lst2[i]})
sorted_keys = sorted(my_dict.keys())

for key in sorted_keys:
    print(f"{key}: {my_dict[key]}")