print ("Vamos a dar a conocer el salario final de un empleado, descontando los servicios de salud y pension ")
DT = int( input (" Ingrese los dias trabajados: "))
SD = int( input (" Ingrese el salario diario: "))

print("El salario final es; " ,(DT*SD-DT*SD*10/100-DT*SD*15/100), "$")
print("Ya que se le descuenta el 10% de pension, que equivale a: " ,(DT*SD*10/100),"$") 
print("Y se le descuenta el 15% de pension, que equivale a: " ,(DT*SD*15/100),"$")
