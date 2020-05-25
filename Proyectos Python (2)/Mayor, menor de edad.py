print ("Vamos a determinar si una persona es mayor o menor de edad")
AC = int( input ("Ingrese el ultimo año en el que cumplió: "))
AN = int ( input ("Ingrese el en el que nacio: "))

if AC-AN>=18:
    print("La persona es mayor de edad")
else:
    print("La persona es menor de edad")
