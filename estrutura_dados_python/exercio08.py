tupla_frutas = ('maça', 'banana', 'laranga')

print("\nValores da TUPLA:")
for fruta in tupla_frutas:
    print(fruta)
print(f'Esta é a tupla: {tupla_frutas}')

lista_frutas = list(tupla_frutas)
lista_frutas[2] = 'morango'

print("\nValores da LISTA:")
for fruta in lista_frutas:
    print(fruta)
print(f'Esta é a LISTA com valor alterado: {lista_frutas}')

tupla_frutas_alterada = tuple(lista_frutas)
print("\nEsta é a TUPLA como valor alterado:", tupla_frutas_alterada)