from curses.ascii import isalpha


fp = open("letter.txt","r")
letter = 0
for line in fp:
    for ch in line:
        if ch.isalpha():
            letter+=1