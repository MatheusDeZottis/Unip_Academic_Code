# Solicitar ao usuário a escolha do destino temporal
print("Você está prestes a iniciar sua viagem no tempo.")
print("Escolha seu destino: digite ‘passado’ para viajar ao passado ou futuro para viajar ao futuro. ")
# Capturar a escolha do usuário
destino = input("Qual é a sua escolha? ").lower() # Converte a entrada para minúsculas
# Decisão com base na escolha
if destino == "passado":
 print("Você escolheu o passado! Prepare‑se para explorar os grandes mistérios da história. ")
elif destino == "futuro":
 print("Você escolheu o futuro! Prepare‑se para vislumbrar inovações e surpresas. ")
else:
 print("Escolha inválida. Por favor, digite ‘passado’ ou ‘futuro’.")