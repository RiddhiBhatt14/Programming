def isPrime(n):
    i=2
    while i<=(n//2):
        if n%i==0:
            return False
        i=i+1
    return True

i=2
while i<1069:
    if isPrime(i):
        print (i)
    i=i+1

