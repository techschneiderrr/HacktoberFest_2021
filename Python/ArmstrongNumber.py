# Function to check whether the given number is an armstrong number or not.
def armstrong(n):
    number = str(n)
    n = len(number)
    output = 0
    for i in number:
      output = output+int(i)**n
    if output == int(number):
        return(True)
    else:
          return(False)
         
#function call
print(armstrong(370))
print(armstrong(100))
