# print("enter no of choco:")
# n=int(input())
# print("enter types of choco:")
# a=input()
# lst=a.split(" ")
# print(lst)
# dict={}
# lst=[str(x) for x in input().split(" ")]
# # print(types)
# d={}
# for type in lst:
#     if type in d:
#         d[type]+=1
#     else:
#         d[type]=1 

# print(d)
# class Student:
#     def __init__(self) -> None:
#         print("Harshal")
    
# obj1=Student() 

# def fact(n):
#     if(n==1):
#         return 0
#     if(n==2):
#         return 0
#     if(n==3):
#         return 1
#     return fact(n-1)+fact(n-2)+fact(n-3)
# n=int(input("enter no: "))
# print(fact(n))


def mini(lst,i):
    if(i>=len(lst)):
        return 0
    
    if(lst[i]<0):
        return lst[i]+mini(lst,i+1)
    if(lst[i]>=0):
        return 0+mini(lst,i+1)
    
def maxi(lst,i):
    if(i>=len(lst)):
        return 0
    
    if(lst[i]>0):
        return lst[i]+maxi(lst,i+1)
    if(lst[i]<=0):
        return 0+maxi(lst,i+1)    
    
lst=[1,2,-3,2,4,-5,5,4,3,4,6]
a=(mini(lst,0))
b=(maxi(lst,0))
print("diff is: ",b-a)


