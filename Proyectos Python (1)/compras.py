print ("Vamos a determinar cuanto debe pagar un cliente por la compra de varios productos con su respectivo IVA")
CP = int( input (" Ingrese la cantidad de productos: "))
VP = int( input (" Ingrese el valor de cada producto: "))

IV = ,(CP*VP*16/100)
print("El total a pagar es: " ,(CP*VP-IV))
