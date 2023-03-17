def generarPalabras(datos,palabra):
	longitud = len(palabra)
	for i in range(longitud):
		aux = palabra[i:]
		aux1= palabra[:i]
		newpalabra = aux+aux1
		if(newpalabra == datos):
			return True
	return False

n = int(input())
for i in range(n):
	palabra = list(map(str,input().split()))
	cont = 0;
	for datos in palabra:
		if(len(datos)==len(palabra[0])):
			if(generarPalabras(datos,palabra[0])):
				cont+=1
	print(cont-1)	