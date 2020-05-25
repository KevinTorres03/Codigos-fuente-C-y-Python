print("Determinar numero de hombres y de mujeres en un  grupo de 5 personas")
num = 1
h = 0
m = 0

for num in range (1,26):
    op=int(input("Ingrese su genero 1=h 2=h: "))
    if(op==1):
        h=h+1
        
        
    else:
        m=1+m
        
        
print("Hombres: " ,h, "\nMujeres: " ,m)
