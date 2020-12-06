#include <stdio.h>
#include <memoire_borne.h>
#include <donnees_borne.h>

#include "lecteurcarte.h"
#include "voyants.h"
#include "boutons.h"
#include "prise.h"
#include "generateur.h"
#include "log.h"
#include "baseclient.h"


int main()
{

    log_init();
    log_msg("reussite de l'init");
    //log_msg("test succes incrementation");
    lecteurcarte_initialiser();
    
    voyants_initialiser();
   	boutons_initialiser();
   	prise_initialiser();
   	generateur_initialiser();   	
   	log_msg("fin de plein d'initialisation  repetitive dont je doute de l'utilité ");
   	
   	log_msg("generer une liste de client authentifiable");
   	baseclient_init();
    
    while (1)
    {  	
    	log_msg("\n debut lecteurcarte_lire_carte()");
		lecteurcarte_lire_carte();
    }

}
