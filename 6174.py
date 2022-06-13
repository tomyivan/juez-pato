#Problem A: 6174
def unificar(n):
    x=''
    for i in n:
        x=i+x
    return x
def numero(x,con):
    if(x ==6174):
        print(con)
    else:  
        a = unificar(sorted(str(x),reverse=True))
        b = unificar(sorted(str(x)))
        x = abs(int(a)-int(b))    
        numero(x,con+1)
t = int(input())
for i in range(t):
    n = input()
    con=0
    numero(n,con)

