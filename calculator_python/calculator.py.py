print("Welocme to the Calculator App")
x,y=map(int, input("type the 2 numbers u want to have calculation with: ").split())

op=input("type the operation from (+,-,/,*) to perform")

if op=="+":
    print(f"{x}+{y}={x+y}")
elif op=="-":
    print(f"{x}-{y}={x-y}")
elif op=="*":
    print(f"{x}*{y}={x*y}")
elif op=="/":
    print(f"{x}/{y}={x/y}")
else:
    print("wrong opertor choosen")
