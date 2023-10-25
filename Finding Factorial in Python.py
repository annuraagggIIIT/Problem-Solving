#Program to calculate factorial of a number
def fact(a):            #defining a function to calculate factorial
    f=1
    for i in range(a):
        f*=(1+i)
    print("Factorial of {} is {}".format(a,f))
        


#main
a=int(input("Enter a number whose factorial is to be found\n"))
fact(a)                 #calling factorial function



