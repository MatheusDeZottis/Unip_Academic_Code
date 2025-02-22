# Verificação do ano bissexto
# Solicitar ao usuário o ano a ser verificado
# verificar se o ano é divisível por 4
ano = int(input("Digite um ano: "))

if (ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0):
    print("O ano é bissexto")
else:
    print("O ano não é bissexto")



     