tupla_frutas = ('maça', 'banana', 'uva', 'laranga')

print("\nValores da TUPLA:")
for fruta in tupla_frutas:
    print(fruta)
print(f'Esta é a tupla: {tupla_frutas}')
lista_frutas = list(tupla_frutas)
print(f'Conversão de tupla para lista: {lista_frutas}')

lista_frutas[2] = 'morango'

lista_frutas.append('abacaxi')

print("\nValores da LISTA com alterações:")
for fruta in lista_frutas:
    print(fruta)
print(f'Esta é a LISTA com valor alterado: {lista_frutas}')

tupla_frutas_alterada = tuple(lista_frutas)
print("\nEsta é a TUPLA como valor alterado:", tupla_frutas_alterada)

removido = lista_frutas.pop(2)
print(f'\nRemovendo o valor "{removido}" da lista: {lista_frutas}')