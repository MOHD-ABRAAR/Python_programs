n=int(input("Enter no.of rows:"))
#right triangle
for i in range(1,n+1):
    for j in range(1,i+1):
        print("*",end='')
    print()
#reverse right triangle
for i in range(n,0,-1):
    for j in range(1,i+1):
        print("*",end='')
    print()
#1
#12
#123
#1234
#12345
for i in range(1,n+1):
    for j in range(1,i+1):
        print(j,end='')
    print()
#1
#22
#333
#4444
#55555
for i in range(1,n+1):
    for j in range(1,i+1):
        print(i,end='')
    print()


