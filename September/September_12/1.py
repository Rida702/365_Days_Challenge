#For an odd number Like 7 take n-1 number XOR and then take one number out of those zeros that you got in 2 steps
#1 1 9 9 0 1 8 [1^1^9^9^0^1, 8]
#1. [1^1^1^1^1^1, --- 8] 1,n-1
#2. [0,0,0,0,0,0, --- 8] 1,n-1
# [0,0,0,0,0,--- 0^8]    
#3. [0,0,0,0,0,8,8]     n-1,n
#4. [0^0^0^0^0^8^8]     1,n
#then in 3rd step take XOR of non zero with one of the zero out of n-1 zeros
#print(0^0^0^0^0^9^9)
#In 4th step take Xor or all elements it will be zero
#print(0^0^0^0^0^0^9)
#print(0^9)

#7
#1 1 9 9 0 1 8
ans = 1^1^9^9^0^1
print(ans) #---1 (1,n-1)

aa = ans^ans^ans^ans^ans^ans
print(aa)    #---0 (1,n-1)

a1 = aa^8
print(aa^8) #---8 (n-1,n)

a2 = aa^aa^aa^aa^aa^a1^a1 
print(a2) #---0 (1,n)


