import array as arr
a = arr.array('i',[1,2,3,9])
print(a[2])
#length of a
print(len(a))
##adding elemet using append
a.append(4)
print(a)
###extend an element using insert
a.extend([6,7])
print("array =a",a)
####insert element
a.insert(3,8)
print("array=a",a) # inserting 3&8 below the heightest number written like 9 i wrote
###pop
a.pop(2)  #removing the place not digit
print("array=a",a)
#pop
a.pop(-1)
print("array=a",a)
#remove element menas removing element not place of the digit
a.remove(4)
print("array=a",a)






