#Taking multiple inputs in a single variable. [also in a single line]
value = input().split(" ")
a,b,c = value
A,B,C = int(a), int(b), int(c)

#Finding the largest number:
if A > B and A > C:
    print("%d is the biggest number" %A)

elif B > A and B > C:
    print("%d is the biggest number" %B)

else :
    print("%d is the biggest number" %C)