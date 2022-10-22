bin_nums = list(input("Enter 4-digit comma-seperated binary numbers: ").split(","))
div_by_5 = ["0000", "0101", "1010", "1111"]

result = []
for i in bin_nums:
    if i in div_by_5:
        result.append(i)

if len(result) == 0:
    print("No numbers are divisible by 5")
else:
    print("Numbers divisible by 5 are: ", end="")
    print(*result, sep=",")