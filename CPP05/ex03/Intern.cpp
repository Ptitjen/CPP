#include "Intern.hpp"

// Le stagiaire n’a pas de nom, pas d’échelon, aucun signe distinctif. La seule
// chose dont se préoccupent les bureaucrates, c’est qu’un stagiaire fasse son
// travail. Cependant, le stagiaire a une aptitude importante : la fonction
// makeForm() qui prend deux strings en paramètres. La première est le nom du
// formulaire, la seconde la cible du formulaire. Elle retourne un pointeur sur
// un objet Form dont le nom est passé en paramètre et dont la cible est le
// second paramètre. Elle affiche quelque chose comme :
//    Intern creates <form>
// Si le nom du formulaire passé en paramètre n’existe pas, affichez un message
// d’erreur explicite