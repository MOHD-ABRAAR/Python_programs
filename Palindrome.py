n=input("Enter a string:")
m=""
for i in n:
    print(i,end="")
    m=i+m
print("\n",m)
if(n==m):
    print("Yes")
else:
    print("No")
