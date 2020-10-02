#  Problem-Task : This program will give the middle characters of a string.
#  Problem Link :  https://edabit.com/challenge/p3SCSXaWQLWpvqCYZ



s=input('ENTER THE STRING\n')
l=len(s)
if l%2>0:
   print(s[l//2])
else:
   print(s[l//2],end='')
   print(s[l//2+1])