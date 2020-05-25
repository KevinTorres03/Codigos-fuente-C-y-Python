may=0
men=99999
ds=1

print("programa que va a determinar el numero mayor, y el menor\n")

while ds == 1:
    num=(int(input("Ingrese un número: \n")))
    if(num):
     if(num>may):
         may=num

     if(num<men):
         men=num

    ds=(int(input("¿Desea de ingresar más numeros? Si=1 No=2 \n")))

print("El numero mayor es: " ,may)
print("\nEl numero menor es: " ,men)
