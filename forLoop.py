# inp=int(input("type a number : "))
# no=1
# while no<inp+1:
#     stu=1
#     while stu<no+1:
#         print('::', end= " ")
#         stu=stu+1
#     print(" ")
#     no=no+1

inp=int(input("type a number : "))
no=1
stu=1
for no in range(1,inp+1,1):
    for stu in range(1,no+1,1):
        print('::', end= " ")
    print(" ")
    