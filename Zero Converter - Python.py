# You are given a number n. The number n can be negative or positive. If n is negative, print numbers from n to 0 by adding 1 to n. If positive, print numbers from n-1 to 0 by subtracting 1 from n.

# Example:
# Input:
# 3
# 0
# 4
# -3
# Output:
# already Zero
# 3 2 1 0
# -3 -2 -1 0

def pos(n):
    # for var in range(n-1,-1,-1):#variable var takes value in this range
    #     print(str(var)+" ",end="")
    while(n>0):
        n-=1
        print(n,end=" ")
        
    
def neg(n):
    # for var in range(n,1,+1):#variable var takes value in this range
    #     print(str(var)+" ",end="")
##need must to be remember because number ==0 and number<0
    while(n<=0):
        print(n,end=" ")
        n+=1
    
