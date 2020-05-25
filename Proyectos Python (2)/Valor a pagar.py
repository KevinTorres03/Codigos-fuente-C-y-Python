print ("Vamos a determinar el valor total a pagar por la compra de varios productos aplicando su respectivo descuento")
cp = int( input ("Ingrese la cantidad de productos: "))
vu = int ( input ("Ingrese el valor unitario de los productos: "))

m = int (cp*vu)

if m>50000:
    print("El valor total pagar es: ",(m-m*50/100), "\nYa que se hace el descuento del 50%")
else:
    print("")
    if m>20001:
        print("El valor total a pagar por las compras es de: ",(m-m*30/100),"\nYa que se le hace el respectivo descuento del 30%")
    else:
        print("")
        if m>10000:
            print("El valor total a pagar por las compras es: ",(m-m*10/100), "\nYa que se le hace el respectivo descuento del 10%")
        else:
            print("El valor total a pagar es de: ",(m),"\nNo tiene su respectivo descuento." )
