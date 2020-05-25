print("Vamos a calcular la estatura promedio en un grupo de 18 estudiantes")
es=1 
ed=0

for num in range(0,5):
    es=int(input("ingrese su estatura: "))
    ed=ed+es

pr=ed/5
print("La estatura promedio es: " ,pr, "cm")
if(pr<=140):
    print("Estudiantes muy bajos")
else:
    ()
    if(es<170):
        print("Estudiantes de estatura normal")
    else:
        print("Estudiantes muy altos")

