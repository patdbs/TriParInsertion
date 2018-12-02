# TriParInsertion

Script en C permettant de faire le tri par insertion sur des entiers générés "aléatoirement".

Pour rappel (wikipédia - https://fr.wikipedia.org/wiki/Tri_par_insertion) : 

En général, le tri par insertion est beaucoup plus lent que d'autres algorithmes comme le tri rapide (ou quicksort) et le tri fusion pour traiter de grandes séquences, car sa complexité asymptotique est quadratique.

Le tri par insertion est cependant considéré comme le tri le plus efficace sur des entrées de petite taille. Il est aussi très rapide lorsque les données sont déjà presque triées. Pour ces raisons, il est utilisé en pratique en combinaison avec d'autres méthodes comme le tri rapide. 

Dans l'algorithme, on parcourt le tableau à trier du début à la fin. Au moment où on considère le i-ème élément, les éléments qui le précèdent sont déjà triés. Pour faire l'analogie avec l'exemple du jeu de cartes, lorsqu'on est à la i-ème étape du parcours, le i-ème élément est la carte saisie, les éléments précédents sont la main triée et les éléments suivants correspondent aux cartes encore mélangées sur la table.

L'objectif d'une étape est d'insérer le i-ème élément à sa place parmi ceux qui précèdent. Il faut pour cela trouver où l'élément doit être inséré en le comparant aux autres, puis décaler les éléments afin de pouvoir effectuer l'insertion. En pratique, ces deux actions sont fréquemment effectuées en une passe, qui consiste à faire « remonter » l'élément au fur et à mesure jusqu'à rencontrer un élément plus petit. 

Pour exécuter le script, il suffit de faire "./tri_par_insertion" dans votre terminal.

Si ça ne se lance pas, vérifiez que vous êtes dans le bon dossier que le fichier dispose des droits suffisants pour être exécuté!
