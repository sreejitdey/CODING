myDict = {}
def uniqueWords(Word):   
    if Word in myDict:
        myDict[word] = myDict[word] + 1
    else:
        myDict.update({word: 1})

string = input()
myList = string.split()
for word in myList:
    uniqueWords(word)
count = 0
for word in myDict:
    if myDict[word] == 1:
        count = count + 1
print(count)
