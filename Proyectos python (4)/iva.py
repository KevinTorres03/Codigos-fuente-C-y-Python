vp=0
cp=0
iva=0
des=0
st=0
print("Programa que va a dar a conocer el total a pagar en una caja registradora")
cp=(int(input("Ingrese la cantidad de articulos:\n")))
vp=(int(input("Ingrese el valor de cada producto:\n")))
des=(int(input("¿Desea ingresar otro articulo? Si=1, No=2\n")))
st=vp*cp
while des == 1:
    cp=(int(input("Ingrese la cantidad de articulos:\n")))
    vp=(int(input("Ingrese el valor de cada producto:\n")))
    st=st+cp*vp 
    des=(int(input("¿Desea ingresar otro articulo? Si=1, No=2\n")))

iva = st * 0.16
des=(int(input("Ingrese su forma de pago: Tarjeta=3, Efectivo=4\n")))
if (des==3):
    print ("El valor total a pagar es: ",st+iva)
else:
    print("El valor total a pagar es: ",st-iva)
