x=int(input())
y=int(input())
if(x <= 100 and x >= 1 and y <= 100 and y >= 1 ):
    print(f"{x} {y}\n{y} {x}\n{y} {x-x*2}\n{x} {y-y*2}\n{x-x*2} {y-y*2}\n{y-y*2} {x-x*2}\n {y-y*2} {x}\n{x-x*2} {y}\n")
else:
    print("Error\n")
