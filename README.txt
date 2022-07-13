// Descripción //
El programa se trata de un juego de dados personalizado.

*¿CÓMO SE JUEGA?*

-- PASO 1 --
Al principio de la partida se tiene que definir:
-Nombre de jugadores
   ~No utilizar numeros	

-Cantidad de rondas que se quieren jugar
   ~Cada ronda posee 5 tiradas

-Apuestas
   ~Numero de cualquier valor


-- PASO 2 --
Al comenzar la partida, se tirarán 5 dados al azar de los que se tomará el mayor valor en cada una de las 5 tiradas.

-- PASO 3 --
Luego de las 5 tiradas, los máximos tomados de cada una de ellas se deben sumar para lograr obtener un numero generador de puntos de la siguiente tabla:

Suma < 20  |  Pierde puntos
Suma = 20  |  Numero generador de puntos 1
Suma = 21  |  Numero generador de puntos 2
Suma = 22  |  Numero generador de puntos 3
Suma = 23  |  Numero generador de puntos 4 
Suma = 24  |  Numero generador de puntos 5
Suma > 24  |  Numero generador de puntos 6

Teniendo en cuenta esto, vamos a lo siguiente.

-- PASO 4 --
En caso de que la suma sea menor a 20, la Apuesta generada al principio se restará de los puntos totales del jugador.

Caso contrario, se hará una "Tirada por puntos" de 5 dados en la que se buscará la cantidad de veces que apareza nuestro número generador de puntos.

-- PASO 5 (EN CASO DE LLEGAR A LA TIRADA POR PUNTOS) --
Para obtener la cantidad de puntos que se sumarán a nuestro puntaje total se multiplicará:

Cantidad de veces que aparece nuestro Numero Generador de Puntos * Numero Generador de Puntos = Puntaje Total

*En caso de no aparecer ninguna vez nuestro numero, no se sumará nada a nuestro puntaje total pero no se nos restarán puntos.