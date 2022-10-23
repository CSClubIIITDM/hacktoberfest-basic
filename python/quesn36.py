string1 = input("Enter a string1: ")
string2 = input("Enter a string2: ")
n = len(string1)
m = len(string2)

if n != m:
    print("Two strings are not isomorphic")
    exit()

char_map = dict()
for i in range(n):
    if string1[i] in char_map:
        if char_map[string1[i]] != string2[i]:
            print("Two strings are not isomorphic")
            exit()
    else:
        char_map[string1[i]] = string2[i]

print("Two strings are isomorphic")