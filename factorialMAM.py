def  factorial(n):
    if n == 0:
        return 1
    else :
        return n*factorial(n-1)
n=int(input("enter the number: "))
if n<0:
            print("sorry it is not ")
elif n==0:
            print(n,"!=",factorial(n))
else : 
            print(n,"!=",factorial(n))
