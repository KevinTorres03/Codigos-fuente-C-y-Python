print ("Programa que va a calcular la temperatura promedio en una semana")
t1 = int( input ("Ingrese la temperatura del primer dia: "))
t2 = int ( input ("Ingrese la temperatura del segundo dia: "))
t3 = int ( input ("Ingrese la temperatura del tercer dia: "))
t4 = int ( input ("Ingrese la temperatura del cuarto dia: "))
t5 = int ( input ("Ingrese la temperatura del quinto dia: "))
t6 = int ( input ("Ingrese la temperatura del sexto dia: "))
t7 = int ( input ("Ingrese la temperatura del septimo dia: "))
s = int (t1+t2+t3+t4+t5+t6+t7)

if s/7>35:
    print("Que semana tan calurosa, la temperatura promedio durante toda la semana fue de: ",(s/7))
else:
    print("")
    if s/7>=15:
        print("que clima tan delicioso, la temperatura promedio durante toda la semana fue de: ",(s/7))
    else:
        print ("Que semana tan fria, la temperatura promedio durante toda la semana fue de: ",(s/7))
        
