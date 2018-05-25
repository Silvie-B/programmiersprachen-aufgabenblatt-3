# include <cstdlib> // std :: rand ()
# include <vector> // std :: vector <>
# include <list> // std :: list <>
# include <iostream> // std :: cout
# include <iterator> // std :: ostream_iterator <>
# include <algorithm> // std :: reverse , std :: generate
int main ()
{
    //Initialisierung eines vector v_0 vom Typ int mit 10 Elementen
    std :: vector <int > v_0 (10);
    
    //Füllen von v_0 mit Zufalls-int
    for ( auto & v : v_0) {
        v = std :: rand ();
    }
    //Kopieren aller Elemente vom Typ int in v_0 und Übertragen in den Ausgabestream ostream und ausgabe in neuer Zeile
    std :: copy (std :: cbegin (v_0), std :: cend (v_0),
                 std :: ostream_iterator <int >( std :: cout , "\n"));
    
    //Initialisierung einer Liste l_0 vom Typ int
    std :: list <int > l_0(std :: cbegin (v_0), std :: cend ( v_0 ));
    
    //Initialisierung einer Liste l_1 vom Typ int
    std :: list <int > l_1(std :: cbegin (l_0), std :: cend ( l_0 ));
    
    //Umkehren der Reihenfolge der Elemente in Liste l_1
    std :: reverse (std :: begin (l_1), std :: end(l_1 ));
    
    //Kopieren aller Elemente vom Typ int in l_1 und Übertragen in den Ausgabestream ostream und Ausgabe in neuer Zeile
    std :: copy (std :: cbegin (l_1), std :: cend (l_1),
                 std :: ostream_iterator <int >( std :: cout , "\n"));
    
    //sortieren der Liste l_1 nach < (von klein nach groß)
    l_1 . sort ();
    
    //Kopieren aller Elemente vom Typ int der sortiereten Elemente in l_1 und Übertragen in den Ausgabestream ostream und Ausgabe in neuer Zeile
    std :: copy (l_1. cbegin (), l_1. cend (),
                 std :: ostream_iterator <int >( std :: cout , "\n"));
    
    //generieren von Zufallszahlen in v_0
    std :: generate (std :: begin (v_0), std :: end(v_0), std :: rand );
    
    //Kopieren aller zufälligen Elemente vom Typ int in v_0 und Übertragen in den Ausgabestream ostream und Ausgabe in neuer Zeile
    std :: copy (v_0. crbegin (), v_0. crend (),
                 std :: ostream_iterator <int >( std :: cout , "\n"));
    return 0;
}
