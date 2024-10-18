# sistemi numerici

Corso: [[999 AESO]]
Argomento: #sisteminumerici #numeribinari #numeridecimali #numeriesadecimali
Pagine: 5-9
Data: 17-10-2024

---

Appunti:

#### [[Numeri decimali]]
I numeri decimali sono i numeri piu' utilizzati nella vita di tutti i giorni, derivando proprio dal numero delle nostre dita. 10.
Da destra verso sinistra il peso di ogni cifra cambia partendo da 10^0

$$ 
9742_{10} = 9*10^3+7*10^2+4*10^1+2*10^0
$$

#### [[Numeri binari]]
I [[bit]] rappresentano uno dei due valori 0 o 1 e vengono uniti l'uno con l'altro per formare i numeri binari, ogni posizione ha il doppio del peso della precedente, i pesi delle posizioni sono: 1, 2, 4, 8, 16, 32, 64, 128... (potenze di due). Per questo nel sistema binario i numeri sono in [[base 2]].

![[Schermata del 2024-10-17 16-07-29.png]]
##### Conversione da binario a decimale
$$
10110_2 = 1*2^4+0*10^3+1*10^2+1*10^1+0*10^0=22_{10}
$$

##### Conversione da decimale a binario
Per convertire un numero da decimale a binario dobbiamo determinare per ogni posizione se la cifra e' 1 o 0.

Prendiamo in esempio il numero 84:

Partendo da sinistra si individua la potenza di due minore o uguale a 84
$$
84 >= 64
$$

Quindi la posizione del 64 deve avere valore 1, ora facciamo 84-64=20
$$
20 <= 32
$$
Quindi la posizione del 32 avra' uno 0
$$
20>=16
$$
Nella posizione del 16 ci sara' quindi un 1, 20-16=4
$$
4<=8
$$
Nella posizione del 16 ci sara' 0, mentre invece nella posizione del 4 ci sara' 1, 4-4=0, quindi sia nella posizione del 2 che nella posizione dell'1 avranno valore 0. 
$$
84_{10}=1010100_2
$$

#### [[Numeri esadecimali]]

Scrivere lunghe file di cifre in decimale diventa noioso e aumenta le possibilita' di commettere errori. Un gruppo di 4 bit rappresenta $$ 2^4 = 16 $$possibilita'.
A volte e' quindi piu' utile lavorare in base 16, utilizzando le cifre decimali da 0 a 9 e le lettere dalla A alla F. Le posizioni delle cifre pesano rispettivamente:
$$
1, 16, 16^2(256), 16^3(4096)...
$$
![[Schermata del 2024-10-17 16-27-39.png]]
Per esempio il numero esadecimale 2ED, corrisponde in decimale a:
$$
2ED_{16}=2*16^2+E*16^1+D*16^0=749_{10}
$$
