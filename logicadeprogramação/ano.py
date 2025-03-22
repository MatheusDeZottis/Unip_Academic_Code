from datetime import datetime
ano_atual = datetime.now().year
ano_destino = int(input('Digite o ano de nascimento: '))
direnca_anos = ano_destino - ano_atual
print(" O intervalo entre o ano atual e o ano destino é:, diferença_anos", direnca_anos)