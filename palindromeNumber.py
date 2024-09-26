num = int(input("Enter a number to check if it's a palindrome: "))

num_str = str(num)

if num_str == num_str[::-1]:
    print(num, "is a palindrome.")
else:
    print(num, "is not a palindrome.")
