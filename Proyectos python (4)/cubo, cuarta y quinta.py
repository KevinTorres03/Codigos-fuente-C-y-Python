des=0
num=0
cb=0
cu=0
qu=0
print("Programa que va a determinar la potencia (cubo, cuarta y quinta)")
while des!=2:
        num=(int(input("Ingrese el numero\n")))
        cb=num*num*num
        cu=num*num*num*num
        qu=num*num*num*num*num
        print("El cubo de ",num, " es:" ,cb)
        print("La cuarta de ",num," es:" ,cu)
        print("La quinta de ",num," es:",qu)
        des=(int(input("¿Desea ingresar otro numero? Si=1, No=2\n")))

print("Fin del programa")
