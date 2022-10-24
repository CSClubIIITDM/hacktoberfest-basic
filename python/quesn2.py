#U.Anandhakumar EC21B1087
nos=list(int(x) for x in input("enter the numbers: ").split()) #getting the list of input
d={} #declaring dictionary to record their positional values of the numbers
for i in range(len(nos)): #recording the positional values
    d[i]=nos[i]
factorial=[]  #where the factorial of the number is stored
nos.sort()  # sorting it for easier way of calculating factorial of a given number from previous results
fact=1
j=1
for i in nos:   #factorial calculation
    while(j<i+1):
        fact=fact*j
        j+=1
    factorial+=[fact]

for i in range(len(nos)): # printing factorial of the numbers  according to the positional values of the numbers
    j=len(nos)-1
    while(d[i]!=nos[j]):
        j=j-1
    if(i==len(nos)-1):
        print(factorial[j])
    else:
        print(factorial[j],end=",")
        
        
   
    