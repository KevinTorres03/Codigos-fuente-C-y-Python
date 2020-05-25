cont=0
nr=0
num=0
des=0
print("Programa que va a determinar cuantas veces aparece un numero ingresado por el usuario")
nr=(int(input("Ingrese el numero que se va a repetir:\n")))
while des != 2:
    num=(int(input("Ingrese un numero: \n")))
    if(num == nr):
        cont=cont+1
    else:
        num=(int(input("Ingrese un numero: \n")))
    des=(int(input("¿Desea ingresar mas numeros? Si=1, No=2\n")))

print("El numero que mas se repite es: ",nr, "\nCon una cantidad de: ",cont+1," veces.")
    
