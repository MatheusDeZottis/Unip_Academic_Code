# Solicitam ao usuario a escolher do destinho temporal

print("Você está prestes a iniciar sua viagem no tempo ")

print("Escolher seu destino digite  passado para viajar ao passsado ou futuro viajar ao futuro")

# Capturar a escolha  do usúario 

destino = input ("Qual é a sua escolha ?")  #entrada para minusculo

# decisão com base na escolha 

destino = input("Escolha seu destino (passado ou futuro): ")


if destino.lower() == "passado":
    print("Você escolheu seu passado")
elif destino.lower() == "futuro":
    print("Você escolheu seu futuro")
else:
    print("Escolha inválida")


