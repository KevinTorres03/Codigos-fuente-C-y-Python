import random
cont=0
num=0
r=0
print("Programa que va a generar un numero aleatorio, y el usuario lo va a adivinar\n")
print("El numero esta entre 0 y 100\n")

x= random.randint(0 , 100)

while r == 0:

    num=(int(input("Ingrese un numero: \n")))
    cont=cont+1
    if (num>x):
        print("Menos\n")
    if (num<x):
        print("Mas\n")
    if(num==x):
        break
print("¡Haz adivinado!\n")
print("Numero de intentos",cont)
