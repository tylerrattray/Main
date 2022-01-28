from timeit import default_timer as timer

def Main(n,s):
    for i in range(n,s):
        c = 0
        p = n
        while n >1:
            if (n%2==0):
                n = n/2;c +=1
            else:
                n = 3*n+1;c +=1
        print (f"Num: {p} = Steps: {c}");n = p+1 
  
if __name__ == '__main__':
    print(f"Welcome to Collatz Conjecture Calculator \n")
    n=int(input(f"Please enter a starting number: "))
    s=int(input(f"Please enter a ending number: "))+1
    start = timer()
    Main(n,s)
    end = timer();print(end - start,"Seconds")
