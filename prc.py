
def gcd(m,n):
    cf=[]
    for i in range(1,min(m,n)+1):
        if (m%i == 0) and (n%i == 0):
            cf.append(i)
    return(cf[-1])



print(gcd(36,12))



# def twice(x):
#     y=2*x
#     return(y)

# print(twice(22))