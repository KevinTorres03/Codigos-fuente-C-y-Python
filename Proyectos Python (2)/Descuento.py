print ("Programa que va a determinar el total a pagar por una compra")
cp = int( input ("Ingrese la cantidad de articulos: "))
vu = int ( input ("Ingrese el valor unitario de los productos: "))

if cp*vu>=20000:
    print("El total a a pagar por la compra de los productos es: " ,(cp*vu-cp*vu*35/100)," Ya que se le descuenta el 35% de descuento que es: " ,(cp*vu*35/100))
else:
    print("El total a pagar por la compra de productos es: ",(cp*vu-cp*vu*15/100)," Ya que se le descuenta el 10% de descuento que es: " ,(cp*vu*35/100))
