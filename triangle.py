a=int(input("enter the angle of triangle: "))
b=int(input("enter the angle of triangle: "))
c=int(input("enter the angle of triangle: "))
total=a+b+c

if total == 180:
   print("\n true")
elif a<=60:
   print("not true")
elif b<=60:
    print("not true")
elif c<=60:
    print("not true")
else: 
    print("\n false")