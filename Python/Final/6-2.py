def acronym(a):
    words = a.split()
    first_ch = [word[0].upper() for word in words]
    result = ''.join(first_ch)
    return result
phrase = input()
print(acronym(phrase))