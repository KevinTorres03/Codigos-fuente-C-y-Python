print("Programa que va a determinar la estatura mayor en un grupo de estudiantes")
may=0
des=0
while des !=2:
    est=(int(input("Ingrese su estatura:\n ")))
    if(est):
     if(est>may):
        may=est
    des=(int(input("¿Desea ingresar mas datos? Si=1, No=2\n")))

print("La estatura mayor es:",may)


