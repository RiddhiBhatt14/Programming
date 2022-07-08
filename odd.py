#Write a program to print first 10 odd numbers.
def Odd(number):
    if number%2==1:
        return True
    return False
i=1
while i<20:
    if Odd(i):
        print ( i )
    i=i+1
