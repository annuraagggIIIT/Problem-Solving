def cf(num1,num2):
    n=[]
    for i in range(1, min(num1, num2)+1): 
        if num1%i==num2%i==0: 
            n.append(i)
    return n

num1 = int(input("Enter a number 1: "))
num2 = int(input("Enter a number 2: "))

print("There are ",len(cf(num1,num2)) , " numbers: " , cf(num1, num2))

