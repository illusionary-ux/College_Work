fp = open("letter.txt","r")
letter = 0
number = 0
other = 0
for line in fp:
    for ch in line:
        if ch.isalpha():
            letter+=1
        elif ch.isdigit():
            number+=1
        else:
            other+=1
print(letter,number,other)