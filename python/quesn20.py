n = int(input("Enter the value of n: "))
num_list = list(map(int, input("Enter n-1 integers: ").split()))

# Sum of 1 to n integers
sum_n = (n * (n + 1)) // 2

# Missing number
miss_num = sum_n - sum(num_list)

print("Missing number is:", miss_num)