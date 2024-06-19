students = ['ZhangSan', 'LiSi', 'WangWu', 'ZhaoLiu']
subjects = list()
scores = {student:[] for student in students}
while True:
    line = input()
    if line == "End":
        break
    data = line.split()
    subject = data[0]
    subject_score = data[1:]
    subjects.append(subject)
    for i, score in enumerate(subject_score):
        scores[students[i]].append(score)
header = "Name           "
for subject in subjects:
    header += f"{subject:<15}"
print(header)

for student in students:
    row = f"{student:<15}"
    for score in scores[student]:
        row += f"{score:<15}"
    print(row)