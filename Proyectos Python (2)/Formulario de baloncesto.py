print ("Vamos a conocer si una persona es admitida en un equipo de baloncesto en Bogotá ")
ed = int( input ("Ingrese la edad: "))
et = int ( input ("Ingrese la estatura: "))
ps = int ( input ("Ingrese el peso: "))

if ed>=18:
    print("Cumples con la edad")
    if et>180:
        print("Cumples con la estatura")
        if ps>80:
            print("cumples con todos los requisitos, ¡Bienvenido al equipo!")
        else:
            print("Lo sentimos, cumples con la estatura y la edad, pero no cumples con los demas requisitos" )
    else:
        print("Lo sentimos, cumples con la edad pero no cumples con los demas requisitos")
else:
    print("Lo sentimos pero no cumples algunos de los requisitos requeridos ")
    
