n = input()
tokens=[]
tokens = input().split('X')
tokens = filter(None, tokens)
notEmptyTokens = [x for x in tokens if x != None]
print (len(notEmptyTokens))
for token in notEmptyTokens:
    print (token)
