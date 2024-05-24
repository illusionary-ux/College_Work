def acronym(phrase):
    s=''
    phrase = phrase.title
    phrase = phrase.split()
    for i in range(len(phrase)):
        s += phrase[i][0]
    return s