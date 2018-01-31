
def chunkText( text ):
    ret = []
    #text = text.replace(" ","")  # remove spaces
    text = text.lower()
    text = filter(lambda c: c.isalpha(), text) # remove all non-alpha characters
    text2 = ""
    for i in range(len(text)):
        if text[i] == 'j':
            text2 = text2 + 'i'
        else:
            text2 = text2 + text[i]
    if len(text2) % 2 == 1: text2 = text2 + "x"  # Put an x on the end if not even
    for i in range(0,len(text2),2):
        ret.append(text2[i:(i+2)])
    return ret
    
