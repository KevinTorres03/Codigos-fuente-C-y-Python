print ("Vamos a determinar a determinar cuanto debe para un cliente por una serie de compras")
cp = int( input ("Ingrese la cantidad de articulos: "))
vu = int ( input ("Ingrese el valor unitario de los productos: "))

if cp*vu>20000:
    print("El valor total a pagar es: " ,(cp*vu-cp*vu*20/100), "ya que se le resta el 20% de descuento, que por su compra equivale a: " ,(cp*vu*20/100))
else:
    print("El valor total a pagar por la compra es: " ,(cp*vu))
