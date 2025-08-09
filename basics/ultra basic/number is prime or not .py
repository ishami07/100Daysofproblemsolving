a=int(input("enter the value of a :-->  "))
i=2
while(i<a):
    if(a%i==0):
        print("not prime")
        break 
    i=i+1    
else:
    print("prime")