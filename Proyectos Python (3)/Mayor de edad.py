print("Vamos a detertminar cuantos estudiantes son mayores de 18 en un curso")
my=0
mn=0
for num in range(1,21):
    e=int(input("ingrese su edad: "))
    if(e>=18):
        my=my+1
    else:
        mn=mn+1
print("Hay " ,my, " mayores de edad")        
print("\nHay ",mn, " menores de edad")        
