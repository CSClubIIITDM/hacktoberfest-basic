l = list(map(str,input("Enter the string : ")))
k = []
i = 0
while i < len(l):
    if l[i] not in k:
        k.append(l[i])
    i += 1
print("Given String without duplicates :",end=" ")
for i in k:
    print(i,end="")
print()