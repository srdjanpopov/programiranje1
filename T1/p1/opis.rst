====
Uvod 
====

(Alfabet, konstante, identifikatori, tipovi podataka, promenljive, standardni ulaz/izlaz)

.. raw:: pdf

    PageBreak

Alfabet
-------

Alfabet programskog jezika c se sastoji iz malih i velikih slova engleskog alfabeta, cifara dekadnog brojnog sistema i znakova: ( ) + - * / | \ ~ # ^ % & _ ! = ' " : ; < > , . ?

Konstante
---------

Konstante u c programskom jeziku mogu biti celobrojne konstante (zadate u dekadnom, oktalnom i heksadecimalnom brojnom sistemu), realne ili razlomljene konstante (bez eksponenta ili sa eksponentom) i znakovne konstante(vrednosti znakova koje je moguće učitati ili ispisati na posmatranom sistemu).

Identifikatori
--------------

Identifikatori su namenjeni imenovanju: varijabli, funkcija, makroa, struktura, konstanti i drugih objekata. Imena identifikatora moraju biti u skladu sa pravilima imenovanja u programskom jeziku C, ona obuhvataju: slova iz alfabeta C jezika (mala i velika slova se razlikuju), donju crtu, dekadne cifre. Pri čemu prvi znak identifikatora ne sme biti cifra.

Oblast važenja
--------------

Tipovi podataka
---------------

Tipologija C programskog jezika prepoznaje bazne i izvedene tipove. Bazni tipovi mogu biti osnovni (celobrojni, realni i kompleksni kao i tip void) i nabrojivi tipovi (enumeracija, definiše se službenom rečju enum). Izvedeni tipovi su: pokazivači, nizovi, strukture, unije, polja bita,  funkcije. Za tri osnovne familije tipova znakovnih tipova char, celobrojnih tipova int i realnih tipova double i float, važe modifikatori  dužine (short, long) i predznaka signed, unsigned. Prirodni tipovi su int za ceo broj double za realni. 

Iskaz typedef
-------------

Iskaz typedef je namenjen za formiranje tipova definisanih od strane programera. Ova deklaracija ne formira novi tip nego uvodi novo ime za već postojeći tip.

Promenljive
-----------

Promenljive ili varijable predstavljaju imenovani deo memorije namenjen za čuvanje vrednosti tokom izvršavanja programa. Promenljive se moraju definisati tačno jedanput, definicijom se zadaju tip i ime (identifikator), a kompajler na osnovu tipa rezerviše memorijsku lokaciju. Opseg važenja promenljive počinje njenom definicijom i može se inicijalizovati samo konstantnim izrazom.


Standardni ulaz/izlaz
---------------------