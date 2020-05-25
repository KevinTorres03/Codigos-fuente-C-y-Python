nu=0

print("Programa que va a mostrar una lista de numeros pares hasta cero")
num=(int(input("Ingrese un numero")))

while num >=0:

    if(num % 2 == 0):
        print("Numero: ",num)
        num=num-2
    else:
        num=num-1
        print("Numero: ",num)
        num=num-1
    
