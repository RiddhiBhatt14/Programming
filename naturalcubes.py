d=1
sum=0
s=int(input("choose a number : "))
while d<s+1:
    n=(d*d*d)
    d=d+1
    sum= sum+n
    print(n)
print("sum of the cubes : ",sum)
