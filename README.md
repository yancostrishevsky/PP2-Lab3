# Zaimplementuj podaną na zajeciach klase reprezentujaca ulamek:
1. Nazwa klasy Fraction), po której zdefiniowaniu zmien: w makrze ´ IMPLEMENTED_classFraction←-
Exists 0 -> IMPLEMENTED_classFractionExists 1
2. Do klasy dodaj pola protected: numerator (licznik) i denominator (mianownik) nastepnie ustaw jedynke
obok IMPLEMENTED_hasNumeratorAndDenominator
3. Do klasy dodaj konstruktor bezparametrowy (moze byc tez z wartosciami domyslnymi), który ustawi 
wartosci licznika na 0 i mianownika na 1 nastepnie ustaw jedynke obok ´ IMPLEMENTED_hasDefault←-
Constructor
4. Do klasy dodaj konstruktor z parametrami (moze byc modyfikacja powyzszego), który ustawi licznik i mi-
anownik na podstawie parametrów, a) wartoscia domyslna dla mianownika ma byc 1 nastepnie ustaw jedynke 
obok IMPLEMENTED_hasConstructorWhichInitialiseFields
5. Do klasy dodaj zestaw metod dostepowych/modyfikujacych obiekty klasy -tzw. gettery i settery, które umozli- 
wia modyfikacje i pobranie wartosci licznika i mianownika nastepnie ustaw jedynke obok ´ IMPLEMENTED←-
_hasGettersAndSetters
6. Do klasy dodaj metode print(), wypisujaca atrybuty obiektu na konsole w formie "licznik/mianownik\n" nastepnie ustaw jedynke obok IMPLEMENTED_hasPrintFunction
7. Do klasy dodaj statyczny atrybut (removedFractions_) i metode statyczna: removedFractions() zwracajaca ten atrybut Skladowa ta powinna byc incrementowana w destruktorze nastepnie ustaw jedynke obok  IMPLEMENTED_counterOfDestructedFractionsImplemented
8. Dodaj do klasy metody zapisz(std::ostream& os)/wczytaj(std::istream& is), zapisujace/odczytujace zawartosc obiektu do przekazanego jako parametr strumienia wyj sciowego/wejsciowego, w formacie "licznik/mianownik". Metoda wczytujaca moze załozyc, ze format danych bedzie poprawny (nie trzeba
obslugiwac bledow). nastepnie ustaw jedynke obok IMPLEMENTED_readWriteImplemented.
9. Prosze dodanie stałej odzwierciedlajacej nazwe ułamka o nazwie fractionName, powinna byc pro- 
tected. Do niej prosze dodac metode stała:  getFractionName() nastepnie ustaw jedynke obok
IMPLEMENTED_fractionNameSettableFromConstructor
10. Do klasy dodaj dwie stałe: a) stała statyczna odzwierciedlajaca niedopuszczalna wartosc mianownika ´ ←-
: invalidDenominatorValue b) metode statyczna zwracajaca powyzsze: ˙ getInvalid←-
DenominatorValue() c) stała statyczna czasu kompilacji (constexpr) odzwierciedlajaca domyslna 
wartosc mianownika:  defaultDenominatorValue d) metode constexpr getDefault←-
DenominatorValue() zwracajac ˛a powyzsze nastepnie ustaw jedynke obok ˙ IMPLEMENTED_←-
fractionConstStaticFieldsImplemented
