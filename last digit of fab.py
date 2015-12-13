import math
no=math.factorial(137)
print("Factorial of 137 is",no)
while no>0:
    temp=no%10
    if(temp!=0):
        print("Last non zero digit is",temp)
        break;
    no=no//10
