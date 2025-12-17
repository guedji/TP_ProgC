Manipulation des Variables de Types de Base avec des Pointeurs

L'objectif de cet exercice est de réutiliser le programme variables.c en créant un nouveau programme en C nommé ptrvariables.c. Ce programme doit affecter et afficher les valeurs des variables de différents types de base (char, short, int, long int, long long int, float, double, long double) en utilisant leurs adresses avec des pointeurs. En outre, le programme doit afficher à la fois l'adresse et la valeur de ces variables avant et après la manipulation par leurs adresses en utilisant les pointeurs.

Instructions :

Réutilisez les variables de différents types de base (char, short, int, long int, long long int, float, double, long double) à partir du programme variables.c.
Utilisez des pointeurs pour stocker les adresses de ces variables.
Avant la manipulation des variables par leurs adresses, affichez à l'écran l'adresse et la valeur de chaque variable en hexadécimal.
Effectuez la manipulation des variables en utilisant les pointeurs (par exemple, modifiez la valeur d'une variable via son pointeur).
Après la manipulation, réaffichez à l'écran l'adresse et la valeur actualisée de chaque variable en hexadécimal.
Assurez-vous que les valeurs sont affichées en hexadécimal, comme indiqué dans l'exemple.
Exemple :

Un exemple d'utilisation de ce programme pourrait être :

Le programme affiche les adresses et les valeurs des variables avant et après la manipulation par les pointeurs, par exemple :

Avant la manipulation :
Adresse de i : 0x7ffd779efc50, Valeur de i : a47865ff
Adresse de f : 0x7ffd779efc4c, Valeur de f : 40000000

Après la manipulation :
Adresse de i : 0x7ffd779efc50, Valeur de i : a47865fe
Adresse de f : 0x7ffd779efc4c, Valeur de f : 3f800000
Assurez-vous de respecter les consignes en utilisant des pointeurs pour manipuler les variables et en affichant les adresses et les valeurs en hexadécimal.

