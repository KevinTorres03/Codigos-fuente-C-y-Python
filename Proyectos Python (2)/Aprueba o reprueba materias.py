print ("Vamos a determinar si un estudiante aprobó o reprobó la materia")
ce = int( input ("Ingrese el codigo del estudiante: "))
nm = input ("Ingrese el nombre completo del estudiante: ")
mt = input ("Ingrese la materia: ")
n1 = int( input ("Ingrese la primera nota: "))
n2 = int( input ("Ingrese la segunda nota: "))
n3 = int( input ("Ingrese la tercera nota: "))

if n1+n2+n3/3>=35:
    print("El estudiante " ,(nm),"\nCon el codigo: ",(ce), " \nAprovo la materia de : " ,(mt))
else:
    print("El estudiante " ,(nm),"\nCon el codigo: ",(ce), " \nNo aprovo la materia de : " ,(mt))
