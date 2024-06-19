morse = {
    # Letters
    "a": ".-","b": "-...","c": "-.-.","d": "-..","e": ".","f": "..-.","g": "--.",
    "h": "....","i": "..","j": ".---","k": "-.-","l": ".-..","m": "--","n": "-.",
    "o": "---","p": ".--.","q": "--.-","r": ".-.","s": "...","t": "-","u": "..-",
    "v": "...-","w": ".--","x": "-..-","y": "-.--","z": "--..",
    # Numbers
    "0": "-----","1": ".----","2": "..---","3": "...--","4": "....-",
    "5": ".....","6": "-....","7": "--...","8": "---..","9": "----.",
    # Punctuation
    "&": ".-...","'": ".----.","@": ".--.-.",")": "-.--.-","(": "-.--.",
    ":": "---...",",": "--..--","=": "-...-","!": "-.-.--",".": ".-.-.-",
    "-": "-....-","+": ".-.-.",'"': ".-..-.","?": "..--..","/": "-..-.",
}

# Reverse the morse dictionary for decoding
morse_inverse = {v: k for k, v in morse.items()}

def decode_morse(morse_code):
    # Split the morse code into words
    words = morse_code.split('//')
    decoded_message = []

    for word in words:
        # Split each word into characters
        characters = word.split('/')
        decoded_word = ''.join(morse_inverse[char] for char in characters if char in morse_inverse)
        decoded_message.append(decoded_word)

    return ' '.join(decoded_message)

# Input the morse code
morse_code = input()

# Decode the morse code
decoded_message = decode_morse(morse_code)

# Print the decoded message
print(decoded_message)
