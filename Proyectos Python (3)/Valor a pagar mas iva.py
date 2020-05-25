print("Vamos a determinar el valor total a pagar incluyendo el valor del iva")
cp=0
vu=0
t=0

cp=int(input("ingrese la cantidad de articulos: "))
for num in range(0,cp):
    vu=int(input("Ingrese el valor de cada producto: "))
    t=t+vu

iva=t*16/100
promedio=t+iva
print("El valor total a pagar es: ",promedio,"$")
print("El valor del 16% de iva incluido es: ",iva)
